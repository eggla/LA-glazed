<?php
/**
 * @file glazed-gridstack-gridstack-plugin-rows.tpl.php
 * Default simple view template to display glazed_gridstack_gridstack_plugin_rows.
 *
 * @ingroup views_templates
 */
?>

<div class="glazed-gridstack__content">
  <div class="glazed-gridstack__image"><?php print $image ?></div>
  <div class="glazed-gridstack__field-wrapper">
    <?php if (!empty($category)): ?>
      <div class="glazed-gridstack__category"><?php print $category ?></div>
    <?php endif ?>
    <?php if (!empty($title)): ?>
      <h3 class="glazed-gridstack__title"><?php print $title ?></h3>
    <?php endif ?>
  </div>
</div>
