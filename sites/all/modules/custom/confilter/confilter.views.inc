<?php
 
function confilter_views_query_alter(&$view, &$query) {
  // Whatever your view is named...
  if ($view->name == 'tagged_titles') {
    
    $query->where[0]['type'] = 'OR';
    
  }
}