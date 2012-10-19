<?php

/**
 * @file
 * Module constants list.
 */

// Ratings titles.
define('UPLOADSPEED', 'Upload Speed');
define('STORAGESPACE', 'Storage Space');
define('CUSTOMER', 'Customer Experience');
define('EASEOFUSE', 'Ease of Use');
define('FEATURES', 'Features');
define('PRICE', 'Price');
define('OVERALL', 'Overall Average Rating');
define('RECOMMEND', 'Would you recommend this CloudBackup provider?');



$rating_options_const = serialize(array('upload_speed' => UPLOADSPEED, 'storage_space' => STORAGESPACE, 'customer' => CUSTOMER, 'ease_of_use' => EASEOFUSE, 'features' => FEATURES, 'price' => PRICE, 'recommend' => RECOMMEND));
$rating_options_with_overall_const = serialize(array('upload_speed' => UPLOADSPEED, 'storage_space' => STORAGESPACE, 'customer' => CUSTOMER, 'ease_of_use' => EASEOFUSE, 'features' => FEATURES, 'price' => PRICE, 'overall' => OVERALL, 'recommend' => RECOMMEND));

$rating_options_descriptions_const = serialize(array(
  'upload_speed' => 'Upload Speed.',
  'storage_space' => 'Storage Space.',
  'customer' => 'Customer Experience.',
  'ease_of_use' => 'Ease of Use.',
  'features' => 'Features Rating for a provider.', 
  'price' => 'Value for Money Rating for a provider.',
  'overall' => 'Value for Would you recommend this CloudBackup provider. Yes or No.',
  'recommend' => 'Average overall value for all providers rates.',
));

define('RATING_OPTIONS', $rating_options_const);
define('RATING_OPTIONS_WITH_OVERALL', $rating_options_with_overall_const);
define('RATING_OPTIONS_DESCRIPTIONS', $rating_options_descriptions_const);



// Fields hints.
define('FNAME_HINT', 'First');
define('LNAME_HINT', 'Last');
define('EMAIL_HINT', 'Enter a valid email');
define('PROS_HINT', 'Optional');
define('CONS_HINT', 'Optional');


// Provider data
$service_types_const = serialize(array('re' => 'Personal', 'bu' => 'Business'));
$service_descriptions_const = serialize(array('pti' => 'Preface title', 'pte' => 'Preface text', 'ss' => 'Storage Space', 'mbg' => 'Money Back Guarentee', 'vr-y' => 'Video Review (YouTube video ID)'));
$fee_types_const = serialize(array('mon' => array('Monthly price', '$'), 'oth' => array('Other fees', '')));


define('SERVICE_TYPES', $service_types_const);
define('SERVICE_DESCRIPTIONS', $service_descriptions_const);
define('FEE_TYPES', $fee_types_const);
