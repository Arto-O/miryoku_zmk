// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "artoo_exit_tap_combo.dtsi"

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp O,             &kp M,             &kp B,             &kp COMMA,         &kp DOT,           &kp F,             &kp W,             &kp D,             &kp SQT,           \
U_MT(LGUI, N),     U_MT(LALT, S),     U_MT(LCTRL, R),    U_MT(LSHFT, T),    &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, E),    U_MT(LALT, A),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp K,             &kp C,             &kp V,             &kp J,             &kp L,             &kp U,             U_MT(RALT, P),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPC),  U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, BSPC), U_LT(U_MEDIA, DEL),U_NP,              U_NP

// Keep modtap on right side
#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp O,             &kp M,             &kp B,             &kp COMMA,         &kp DOT,           &kp F,             &kp W,             &kp D,             &kp SQT,           \
&kp N,             &kp S,             &kp R,             &kp T,             &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, E),    U_MT(LALT, A),     U_MT(LGUI, I),     \
&kp Z,             &kp X,             &kp K,             &kp C,             &kp V,             &kp J,             &kp L,             &kp U,             U_MT(RALT, P),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
