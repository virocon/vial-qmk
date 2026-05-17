RGB_MATRIX_EFFECT(FIRMWARE_UI)
RGB_MATRIX_EFFECT(DEBUG_MODE)
RGB_MATRIX_EFFECT(GAMING_MODE)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
/* These stubs clear the canvas; actual rendering is done in
 * rgb_matrix_indicators_advanced_user() in keymap.c. */
static bool FIRMWARE_UI(effect_params_t *params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) rgb_matrix_set_color(i, 0, 0, 0);
    return led_max < RGB_MATRIX_LED_COUNT;
}
static bool DEBUG_MODE(effect_params_t *params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) rgb_matrix_set_color(i, 0, 0, 0);
    return led_max < RGB_MATRIX_LED_COUNT;
}
static bool GAMING_MODE(effect_params_t *params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) rgb_matrix_set_color(i, 0, 0, 0);
    return led_max < RGB_MATRIX_LED_COUNT;
}
#endif /* RGB_MATRIX_CUSTOM_EFFECT_IMPLS */
