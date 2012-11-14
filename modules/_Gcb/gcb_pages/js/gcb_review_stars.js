(function ($) {

  Drupal.behaviors.gcb_review_stars = {
    attach: function (context, settings) {

        $('.form-item-rating-features').stars({
          inputType: "select",
          captionEl: $('#edit-rating-features-choice'),
          cancelShow: false
        });
        $('.form-item-rating-upload').stars({
          inputType: "select",
          captionEl: $('#edit-rating-upload_speed-choice'),
          cancelShow: false
        });
        $('.form-item-rating-storage-space').stars({
          inputType: "select",
          captionEl: $('#edit-rating-storage_space-choice'),
          cancelShow: false
        });
        $('.form-item-rating-customer').stars({
          inputType: "select",
          captionEl: $('#edit-rating-customer-choice'),
          cancelShow: false
        });
        $('.form-item-rating-ease-of-use').stars({
          inputType: "select",
          captionEl: $('#edit-rating-ease_of_use-choice'),
          cancelShow: false
        });
        $('.form-item-rating-price').stars({
          inputType: "select",
          captionEl: $('#edit-rating-price-choice'),
          cancelShow: false
        });
    
    }
  };

}(jQuery));