module.exports = function(grunt) {

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    concat: {
      builder: {
        src: ['build/<%= pkg.builder %>/intro.js',
                'build/<%= pkg.builder %>/variables.js',
                'build/<%= pkg.builder %>/helpers.js',
                'build/<%= pkg.builder %>/backend-connect.js',
                'build/<%= pkg.builder %>/carbide-prototype.js',
                'build/<%= pkg.builder %>/parameter-type-prototype.js',
                'build/<%= pkg.builder %>/core-parameter-types/*.js',
                'build/<%= pkg.builder %>/carbide-elements-prototype.js',
                'build/<%= pkg.builder %>/base-element-prototype.js',
                'build/<%= pkg.builder %>/animated-element-prototype.js',
                'build/<%= pkg.builder %>/carbide-init.js',
                'build/<%= pkg.builder %>/animated-element-prototype/*.js',
                'build/<%= pkg.builder %>/core-elements/section.js',
                'build/<%= pkg.builder %>/core-elements/row.js',
                'build/<%= pkg.builder %>/core-elements/column.js',
                'build/<%= pkg.builder %>/core-elements/section.js',
                'build/<%= pkg.builder %>/core-elements/tabs.js',
                'build/<%= pkg.builder %>/core-elements/tab.js',
                'build/<%= pkg.builder %>/core-elements/accordion.js',
                'build/<%= pkg.builder %>/core-elements/toggle.js',
                'build/<%= pkg.builder %>/core-elements/carousel.js',
                'build/<%= pkg.builder %>/core-elements/slide.js',
                'build/<%= pkg.builder %>/core-elements/layers.js',
                'build/<%= pkg.builder %>/core-elements/item.js',
                'build/<%= pkg.builder %>/core-elements/container.js',
                'build/<%= pkg.builder %>/core-elements/unknown.js',
                'build/<%= pkg.builder %>/load-other-elements.js',
                'build/<%= pkg.builder %>/load-form-elements.js',
                'build/<%= pkg.builder %>/out.js'
              ],
        dest: 'carbide_builder.js'
      },
      elements: {
        src: ['build/<%= pkg.elements %>/intro.js',
                'build/<%= pkg.elements %>/elements/*.js',
                'build/<%= pkg.elements %>/intermediate.js',
                'build/<%= pkg.elements %>/form-elements/*.js',
                'build/<%= pkg.elements %>/out.js'
              ],
        dest: 'carbide_elements.js'
      },
      param_type: {
        src: ['build/<%= pkg.types %>/intro.js',
                'build/<%= pkg.types %>/elements/*.js',
                'build/<%= pkg.types %>/out.js'
              ],
        dest: 'carbide_param_types.js'
      }
    },
    uglify: {
      options: {
        banner: '/*! <%= pkg.name %> <%= grunt.template.today("dd-mm-yyyy") %> */\n'
      },
      dist: {
        files: {
          'carbide_elements.min.js': ['<%= concat.elements.dest %>'],
          'carbide_builder.min.js': ['carbide_builder.js'],
          'carbide_frontend.min.js': ['carbide_frontend.js'],
          'carbide_param_types.min.js': ['<%= concat.param_type.dest %>']
        }
      }
    },
    sass: {
      dist: {
        options:{
          style:'compressed'
        },
        files: {
          'css/carbide_builder.css' : 'sass/carbide_builder.scss',
          'css/carbide_builder_backend.css' : 'sass/carbide_builder_backend.scss',
          'css/icon-helpers.css' : 'sass/icon-helpers.scss',
          'css/social.css' : 'sass/social.scss',
          'css/st-owl-carousel.css' : 'sass/st-owl-carousel.scss',
          '../css/ac_drupal.css' : '../sass/ac_drupal.scss',
          '../css/elements/contact.css' : '../sass/elements/contact.scss',
          '../css/elements/cta.css' : '../sass/elements/cta.scss',
          '../css/elements/iconbox.css' : '../sass/elements/iconbox.scss',
          '../css/elements/iconwell.css' : '../sass/elements/iconwell.scss',
          '../css/elements/imagebox.css' : '../sass/elements/imagebox.scss',
          '../css/elements/pricelisting.css' : '../sass/elements/pricelisting.scss',
          '../css/elements/pricingtable.css' : '../sass/elements/pricingtable.scss',
          '../css/elements/quoteslider.css' : '../sass/elements/quoteslider.scss',
          '../css/elements/separator.css' : '../sass/elements/separator.scss',
          '../css/elements/teambox.css' : '../sass/elements/teambox.scss',
          '../css/elements/timeline.css' : '../sass/elements/timeline.scss',
        }
      }
    },
    postcss: {
        options: {
            processors: require('autoprefixer')({browsers: ['last 2 versions', 'ie 9']}),
        },
        dist: {
            src: 'css/*.css',
        },
    },
    watch: {
      css: {
        files: ['sass/*.scss', 'sass/**/*.scss', '../sass/*.scss', '../sass/**/*.scss'],
        tasks: ['sass', 'postcss']
      },
      js: {
        files: ['build/**/*.js', 'carbide_frontend.js'],
        tasks: ['concat', 'uglify']
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-sass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-postcss');
  grunt.registerTask('default', ['watch']);
};
