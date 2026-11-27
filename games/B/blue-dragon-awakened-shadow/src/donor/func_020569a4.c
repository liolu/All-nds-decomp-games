/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204c384 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204c384.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
extern void *func_02059234(void);
extern s32 func_0205785c(s32);
s32 func_020569a4(s32 *a0, u32 a1) {
    if (*(u8 *) ((u8 *) func_02059234() + 0x1a6) != 0) {
        if (*(s32 *) ((u8 *) func_02059234() + 0x1a0) == 4) {
            return 1;
        }
    }
    u32 i;
    for (i = 0; i < a1; i++) {
        if (func_0205785c(a0[i]) == 0) {
            return 0;
        }
        if (*(u8 *) ((u8 *) func_02059234() + 0x1a6) != 0) {
            if (*(s32 *) ((u8 *) func_02059234() + 0x1a0) == 1) {
                return 1;
            }
        }
    }
    return 1;
}
