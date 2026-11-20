/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* WIPE_SetBrightness from https://github.com/Project-Holon/aletheia src/game/arm9/wipe.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_02045054(vu16 *reg, int brightness);
extern void func_02008d08(u32 which, int brightness);
void func_02008d08(u32 which, int brightness) {
    if (which == 0) {
        func_02045054((volatile u16 *) 0x0400006C, brightness);
    } else {
        func_02045054((volatile u16 *) 0x0400106C, brightness);
    }
}
