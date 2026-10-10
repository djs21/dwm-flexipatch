/* my_keys.h - User custom keybindings for dwm */
#pragma once

#include <X11/XF86keysym.h>

/* Helper macro for spawning commands directly with arguments */
#ifndef SPAWN
#define SPAWN(...)   { .v = (const char*[]){ __VA_ARGS__, NULL } }
#endif

#define MY_KEYS \
    /* ===== BRIGHTNESS AND AUDIO CONTROLS ===== */ \
    {0,                     XF86XK_AudioLowerVolume, spawn, SPAWN("defapps-artix", "--vdown")}, \
    {0,                     XF86XK_AudioMute,        spawn, SPAWN("defapps-artix", "--vtoggle")}, \
    {0,                     XF86XK_AudioRaiseVolume, spawn, SPAWN("defapps-artix", "--vup")}, \
    {0,                     XF86XK_MonBrightnessUp,  spawn, SPAWN("defapps-artix", "--brup")}, \
    {0,                     XF86XK_MonBrightnessDown,spawn, SPAWN("defapps-artix", "--brdown")}, \
    \
    /* Alternative volume/brightness shortcuts */ \
    {MODKEY|ShiftMask,      XK_v,                    spawn, SPAWN("defapps-artix", "--vup")}, \
    {MODKEY,                XK_v,                    spawn, SPAWN("defapps-artix", "--vdown")}, \
    {MODKEY|ShiftMask,      XK_m,                    spawn, SPAWN("defapps-artix", "--vtoggle")}, \
    \
    /* ===== TERMINAL SHORTCUTS ===== */ \
    {MODKEY,                XK_Return,               spawn, SPAWN("defapps-artix", "-t1")}, \
    {MODKEY|ShiftMask,      XK_Return,               spawn, SPAWN("defapps-artix", "-t2")}, \
    {Mod1Mask|ShiftMask,    XK_t,                    spawn, SPAWN("defapps-artix", "--runt")}, \
    \
    /* ===== BROWSERS ===== */ \
    {Mod1Mask|ShiftMask,    XK_w,                    spawn, SPAWN("defapps-artix", "--runb")}, \
    \
    /* ===== EDITORS ===== */ \
    {Mod1Mask|ShiftMask,    XK_e,                    spawn, SPAWN("defapps-artix", "--rune")}, \
    \
    /* ===== CONTROL PANELS ===== */ \
    {Mod1Mask|ShiftMask,    XK_c,                    spawn, SPAWN("defapps-artix", "--runc")}, \
    \
    /* ===== ROFI MENUS ===== */ \
    {Mod1Mask|ShiftMask,    XK_2,                    spawn, SPAWN("defapps-artix", "--rc")}, \
    {Mod1Mask|ShiftMask,    XK_a,                    spawn, SPAWN("defapps-artix", "--rw")}, \
    {Mod1Mask,              XK_F2,                   spawn, SPAWN("defapps-artix", "--rr")}, \
    \
    /* ===== CLIPBOARD MANAGER ===== */ \
    {Mod1Mask|ControlMask,  XK_h,                    spawn, SPAWN("defapps-artix", "--clipboard")}, \
    \
    /* ===== NETWORK MANAGER ===== */ \
    {Mod1Mask|ShiftMask,    XK_n,                    spawn, SPAWN("defapps-artix", "--nmd")}, \
    \
    /* ===== HOTKEYS HELP ===== */ \
    {Mod1Mask|ShiftMask,    XK_slash,                spawn, SPAWN("defapps-artix", "--hotkeys")}, \
    \
    /* ===== SCREEN LOCKER ===== */ \
    {Mod1Mask|ShiftMask,    XK_l,                    spawn, SPAWN("defapps-artix", "--sl")}, \
    \
    /* ===== SCREENSHOTS ===== */ \
    {0,                     XK_Print,                spawn, SPAWN("defapps-artix", "--fss")}, \
    {Mod1Mask,              XK_Print,                spawn, SPAWN("defapps-artix", "--ass")}, \
    \
    /* ===== WALLPAPER ===== */ \
    {Mod1Mask|ShiftMask,    XK_r,                    spawn, SPAWN("defapps-artix", "--rwal")}, \
    {Mod1Mask|ShiftMask,    XK_s,                    spawn, SPAWN("defapps-artix", "--spt")}, \
    \
    /* ===== POWER MENU ===== */ \
    {Mod1Mask|ShiftMask,    XK_x,                    spawn, SPAWN("defapps-artix", "--powermenu")},
