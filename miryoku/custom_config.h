// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp O,             &kp M,             &kp B,             &kp COMMA,         &kp DOT,           &kp F,             &kp W,             &kp D,             &kp SQT,           \
U_MT(LGUI, N),     U_MT(LALT, S),     U_MT(LCTRL, R),    U_MT(LSHFT, T),    &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, E),    U_MT(LALT, A),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp K,             &kp C,             &kp V,             &kp J,             &kp L,             &kp U,             U_MT(RALT, P),     U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPC),  U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, BSPC), U_LT(U_MEDIA, DEL),U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp O,             &kp M,             &kp B,             &kp COMMA,         &kp DOT,           &kp F,             &kp W,             &kp D,             &kp SQT,           \
&kp N,             &kp S,             &kp R,             &kp T,             &kp G,             &kp Y,             &kp H,             &kp E,             &kp A,             &kp I,             \
&kp Z,             &kp X,             &kp K,             &kp C,             &kp V,             &kp J,             &kp L,             &kp U,             &kp P,             &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
LG(&kp F12),       K_BACK,            &kp C_VOL_UP,      K_FORWARD,         LG(&kp F10),       U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
LG(&kp F11),       &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        C_PWR,             U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &bt BT_CLR,        &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP
