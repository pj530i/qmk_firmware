#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#ifdef RGB_DI_PIN
#    ifdef RGB_MATRIX_ENABLE
#       define RGB_MATRIX_KEYPRESSES
#       define SPLIT_TRANSPORT_MIRROR
#       define SPLIT_LAYER_STATE_ENABLE

#       define ENABLE_RGB_MATRIX_ALPHAS_MODS
#       define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#       define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#       define ENABLE_RGB_MATRIX_BREATHING
#       define ENABLE_RGB_MATRIX_BAND_SAT
#       define ENABLE_RGB_MATRIX_BAND_VAL
#       define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#       define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#       define ENABLE_RGB_MATRIX_CYCLE_ALL
#       define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#       define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#       define ENABLE_RGB_MATRIX_RAINDROPS
#       define ENABLE_RGB_MATRIX_HUE_BREATHING
#       define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#       define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#       define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#       define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#     define ENABLE_RGB_MATRIX_SPLASH
//#     define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    endif
#endif
