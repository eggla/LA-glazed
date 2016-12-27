<?php
/**
 * @file glazed-gridstack-gridstack-plugin-style.tpl.php
 * Default simple view template to display Glazed GridStack.
 *
 *
 * - $columns contains rows grouped by columns.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title ?></h3>
<?php endif ?>

<div id="glazed-gridstack-gridstack-<?php print $id ?>" class="glazed-gridstack-gridstack-live <?php print $classes ?>">
  <div class="grid-stack">
    <?php foreach ($layout_data as $key => $item_position): ?>
      <div class="grid-stack-item<?php if ($key > $gridstack_items_mobile): print ' glazed-gridstack-util-hidemobile'; endif ?>"
           data-gs-x="<?php print $item_position['x'] ?>"
           data-gs-y="<?php print $item_position['y'] ?>"
           data-gs-width="<?php print $item_position['width'] ?>"
           data-gs-height="<?php print $item_position['height'] ?>">

        <div class="grid-stack-item-content" <?php if(isset($gridstack_margin)) print $gridstack_margin; ?>>
          <?php if (isset($rows[$key])) print $rows[$key]; ?>
        </div>

      </div>
    <?php endforeach ?>
  </div>
</div>