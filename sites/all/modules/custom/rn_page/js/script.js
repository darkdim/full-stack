/**
 * @file
 * Default script.js for test module.
 */

(function($){
    "use strict";

    Drupal.behaviors.rn_page = {
        attach: function(context, settings) {
            $(document).ready(function() {
                $('select').selectmenu();
            });
        }
    };

})(jQuery);
