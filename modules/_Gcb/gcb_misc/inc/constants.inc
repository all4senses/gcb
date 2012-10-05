<?php

/**
 * @file
 * Module constants list.
 */

// Ratings titles.
define('SOUND', 'Sound/Call Quality');
define('INSTALL', 'Installation Process');
define('CUSTOMER', 'Customer Experience');
define('RELY', 'Service Reliability');
define('FEATURES', 'Features');
define('PRICE', 'Price');
define('OVERALL', 'Overall Average Rating');
define('RECOMMEND', 'Would you recommend this CloudBackup provider?');

$rating_options_descriptions_const = array(
  'sound' => 'Sound Quality Rating for a provider.',
  'install' => 'Installation Process Rating for a provider.',
  'service' => 'Value for Customer Service Rating for a provider.',
  'rely' => 'Reliability Rating for a provider.',
  'features' => 'Features Rating for a provider.', 
  'money' => 'Value for Money Rating for a provider.',
  'overall' => 'Value for Would you recommend this CloudBackup provider. Yes or No.',
  'recommend' => 'Average overall value for all providers rates.',
);

$rating_options_const = array('sound' => SOUND, 'install' => INSTALL, 'service' => CUSTOMER, 'rely' => RELY, 'features' => FEATURES, 'money' => PRICE, 'recommend' => RECOMMEND);
$rating_options_with_overall_const = array('sound' => SOUND, 'install' => INSTALL, 'service' => CUSTOMER, 'rely' => RELY, 'features' => FEATURES, 'money' => PRICE, 'overall' => OVERALL, 'recommend' => RECOMMEND);


// Fields hints.
define('FNAME_HINT', 'First');
define('LNAME_HINT', 'Last');
define('EMAIL_HINT', 'Enter a valid email');
define('PROS_HINT', 'Optional');
define('CONS_HINT', 'Optional');


// Provider data
$service_types_const = array('re' => 'Personal', 'bu' => 'Business');
$service_descriptions_const = array('pti' => 'Preface title', 'pte' => 'Preface text', 'ss' => 'Storage Space', 'mbg' => 'Money Back Guarentee', 'vr-y' => 'Video Review (YouTube video ID)');
$fee_types_const = array('mon' => array('Monthly price', '$'), 'oth' => array('Other fees', ''));


//define('SERVICE_TYPES', $service_types);
//define('SERVICE_DESCRIPTIONS', $service_descriptions);
//define('FEE_TYPES', $fee_types);
