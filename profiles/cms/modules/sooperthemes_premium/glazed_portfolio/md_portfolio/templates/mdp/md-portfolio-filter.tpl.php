<div id="<?php print $filter_id; ?>" class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <?php if (isset($dropdown_header)): ?>
    <div class="cbp-l-filters-dropdownWrap">
      <div class="cbp-l-filters-dropdownHeader"><?php print $dropdown_header; ?></div>
      <div class="cbp-l-filters-dropdownList">
  <?php endif; ?>
        <div data-filter="*" class="cbp-filter-item-active cbp-filter-item"><?php print t('All') . $text_counter; ?></div>
        <?php foreach($data as $tid => $name): ?>
        <div data-filter=".filter-<?php print $tid; ?>" class="cbp-filter-item">
          <?php print $name; ?>
          <?php print $text_counter; ?>
        </div>
        <?php endforeach; ?>
  <?php if (isset($dropdown_header)): ?>
      </div>
    </div>
  <?php endif; ?>
</div>