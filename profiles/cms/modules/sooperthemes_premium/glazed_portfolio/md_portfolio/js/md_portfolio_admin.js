(function ($) {
    Drupal.behaviors.initPortfolio = {
        attach: function (context, settings) {
            $.each(settings.mdPortfolio, function(id, options){
                var mediaQuery = options.mediaQueries;
                options.singlePageCallback = function(url, element) {
                    var t = this;
                    $.ajax({
                        url: url,
                        type: 'GET',
                        dataType: 'html',
                        timeout: 10000
                    })
                        .done(function(result) {
                            t.updateSinglePage(result);
                        })
                        .fail(function() {
                            t.updateSinglePage('AJAX Error! Please refresh the page!');
                        });
                };
                options.singlePageInlineCallback = function(url, element) {
                    var t = this;
                    $.ajax({
                        url: url,
                        type: 'GET',
                        dataType: 'html',
                        timeout: 10000
                    })
                        .done(function(result) {
                            t.updateSinglePageInline(result);
                        })
                        .fail(function() {
                            t.updateSinglePageInline('AJAX Error! Please refresh the page!');
                        });
                };
                $('#' + id).once('cube-process', function(){
                    $(this).cubeportfolio('init', options);
                });
                Drupal.behaviors.initPortfolio.mdr_load_more(context, settings, id);
                $(document).ready(function(){
                    Drupal.behaviors.initPortfolio.mdr_load_scroll(context, settings, id);
                });
            })

        },
        mdr_load_more: function(context, settings, id){
            $(document).delegate('.cbp-l-loadMore-button-link', 'click', function (e) {
                var gridContainer = $(this).closest('.view').find('.view-content').find('[id^="mdp-grid-"]');//#grid-container
                var options = $(this).parents('.mdp-portfolio-load-more').data('json');
                var md_this = $(this);
                e.preventDefault();
                var wle_page = md_this.attr('data-load');
                var clicks, me = $(this), oMsg;
                if (me.hasClass('cbp-l-loadMore-button-stop')) return;

                // get the number of times the loadMore link has been clicked
                clicks = $.data(this, 'numberOfClicks');
                clicks = (clicks) ? ++clicks : 1;
                $.data(this, 'numberOfClicks', clicks);

                // set loading status
                oMsg = me.text();
                me.text('LOADING...');
                // perform ajax request
                $.ajax({
                    url: Drupal.settings.basePath + '?q=md-portfolio/loadmore/' + settings.mdPortfolio[id].vname + '/' + settings.mdPortfolio[id].display_id + '/' + wle_page,
                    type: 'GET',
                    dataType: 'HTML'
                })
                    .done(function (result) {
                        var items, itemsNext;
                        items = $(result).filter(function () {
                            return $(this).is('div' + '.cbp-loadMore-block');
                        });

                        gridContainer.cubeportfolio('appendItems', items.html(),
                            function () {
                                // put the original message back
                                me.text(oMsg);
                                if ((parseInt(wle_page)) == parseInt(options['max_pager'])) {
                                    me.text('NO MORE WORKS');
                                    me.addClass('cbp-l-loadMore-button-stop');
                                }
                            });
                        wle_page = parseInt(wle_page) + 1;
                        md_this.attr({'data-load': wle_page});
                    })
                    .fail(function () {
                        // error
                    });
            });
        },
        mdr_load_scroll: function(context, settings, id) {
            $.each($('.cbp-l-loadMore-text-link'), function () {

                var gridContainer = $(this).closest('.view').find('.view-content').find('[id^="mdp-grid-"]');//#grid-container
                var options = $(this).parents('.mdp-portfolio-load-more').data('json');
                var loadMoreObject = {

                        init: function () {

                            var t = this;

                            // the job inactive
                            t.isActive = false;

                            t.numberOfClicks = 0;

                            // cache link selector
                            t.loadMore = $('.cbp-l-loadMore-text-link');

                            // cache window selector
                            t.window = $(window);

                            // add events for scroll
                            t.addEvents();

                            // trigger method on init
                            t.getNewItems();

                        },

                        addEvents: function () {
                            var t = this;

                            t.window.on("scroll.loadMoreObject", function () {
                                // get new items on scroll
                                t.getNewItems();
                            });
                        },

                        getNewItems: function () {
                            var t = this, topLoadMore, topWindow, clicks;

                            if (t.isActive || t.loadMore.hasClass('cbp-l-loadMore-text-stop')) return;

                            topLoadMore = t.loadMore.offset().top;
                            topWindow = t.window.scrollTop() + t.window.height();

                            if (topLoadMore > topWindow) return;

                            // this job is now busy
                            t.isActive = true;

                            // increment number of clicks
                            t.numberOfClicks++;

                            // perform ajax request
                            var wle_page = $('.cbp-l-loadMore-text-link').attr('data-load');

                            $.ajax({
                                url: Drupal.settings.basePath + '?q=md-portfolio/loadmore/' + settings.mdPortfolio[id].vname + '/' + settings.mdPortfolio[id].display_id + '/' + wle_page,
                                //url: t.loadMore.attr('data-href'),
                                type: 'GET',
                                dataType: 'HTML',
                                cache: true
                            })
                                .done(function (result) {
                                    var items, itemsNext;

                                    // find current container
                                    items = $(result).filter(function () {
                                        return $(this).is('div' + '.cbp-loadMore-block');
                                    });

                                    gridContainer.cubeportfolio('appendItems', items.html(),
                                        function () {

                                            // check if we have more works
                                            itemsNext = $(result).filter(function () {
                                                return $(this).is('div' + '.cbp-loadMore-block');
                                            });
                                            if ((parseInt(wle_page)) == parseInt(options['max_pager'])) {
                                                t.loadMore.text('NO MORE ENTRIES');
                                                t.loadMore.addClass('cbp-l-loadMore-text-stop');

                                                t.window.off("scroll.loadMoreObject");

                                            } else {
                                                // make the job inactive
                                                t.isActive = false;

                                                topLoadMore = t.loadMore.offset().top;
                                                topWindow = t.window.scrollTop() + t.window.height();

                                                var wle_page_update = parseInt(wle_page) + 1;
                                                $('.cbp-l-loadMore-text-link').attr({'data-load': wle_page_update});

                                                if (topLoadMore <= topWindow) {
                                                    t.getNewItems();

                                                }
                                            }

                                        });

                                })
                                .fail(function () {
                                    // make the job inactive
                                    t.isActive = false;
                                });
                        }
                    },
                    loadMore = Object.create(loadMoreObject);


                // Cube Portfolio is an event emitter. You can bind listeners to events with the on and off methods. The supported events are: 'initComplete', 'filterComplete'

                // when the plugin is completed
                gridContainer.on('initComplete.cbp', function () {
                    loadMore.init();
                });

                // when the height of grid is changed
                gridContainer.on('filterComplete', function () {
                    loadMore.window.trigger('scroll.loadMoreObject');
                });
            })
        }
    };
})(jQuery)

