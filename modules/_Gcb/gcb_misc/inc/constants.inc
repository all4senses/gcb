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

// Fields hints.
define('FNAME_HINT', 'First');
define('LNAME_HINT', 'Last');
define('EMAIL_HINT', 'Enter a valid email');
define('PROS_HINT', 'Optional');
define('CONS_HINT', 'Optional');


// Provider data
$service_types = serialize(array('re' => 'Personal', 'bu' => 'Business'));
$service_descriptions = serialize(array('pti' => 'Preface title', 'pte' => 'Preface text', 'biti' => 'Basic info title', 'bite' => 'Basic info text', 'snti' => 'Special notes title', 'snte' => 'Special notes text', 'mbg' => 'Money Back Guarentee', 'vr-y' => 'Video Review (YouTube video ID)'));
$fee_types = serialize(array('mon' => array('Monthly fees', '$'), 'set' => array('Setup fees', ''), 'shp' => array('Shipping fees', ''), 'can' => array('Cancellation fees', '$'), 'lng' => array('Long distance fees', ''), 'oth' => array('Other fees', '') ));

define('SERVICE_TYPES', $service_types);
define('SERVICE_DESCRIPTIONS', $service_descriptions);
define('FEE_TYPES', $fee_types);
