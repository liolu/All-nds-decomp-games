/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_Modf from https://github.com/Project-Holon/aletheia src/game/arm9/fx.c (license: none (MIT = tooling only)), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef s32 fx32;
extern fx32 func_020cd788(fx32 x, fx32 *iPtr);
fx32 func_020cd788(fx32 x, fx32 *iPtr) {
    if (x >= 0) {
        *iPtr = x & 0x7ffff000;
        return x & 0xfff;
    } else {
        *iPtr = -(-x & 0x7ffff000);
        return -(-x & 0xfff);
    }
}
