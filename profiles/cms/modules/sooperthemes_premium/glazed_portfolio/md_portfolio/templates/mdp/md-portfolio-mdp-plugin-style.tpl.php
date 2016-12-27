<div class="md_portfolio_display_content" style="display: none;"></div>
<div class="md-portfolio-content <?php print $md_data['options']['md_style_class_add_style']; ?>">
  <?php if(isset($filter) && $filter): ?>
    <?php print theme('md_portfolio_filter', $filter); ?>
  <?php endif; ?>
  <div id="<?php print($md_data['options']['md_style_view']['grid_div_id']) ?>" class="<?php print($md_data['options']['md_style_container_type']) ?>">
    <!--mdsstart-->
    <?php foreach($rows as $row_id => $row): ?>
      <?php print $row; ?>
    <?php endforeach; ?>
    <!--mdsend-->
  </div>
</div>
