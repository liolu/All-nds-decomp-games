/* compiler: 1.2/sp2p3  */
/* func_02054454 from projets/children-of-mana/src/auto/func_02054454.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern void func_0201ca9c(s32);
extern s32 func_02020b8c(void *);
s32 func_02020fc8(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;
    u32 temp_r4;

    var_r5  = 0;
    temp_r4 = func_0201e3b0();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            (*(volatile s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) | 4);
            do {
                func_0201ca9c(arg0 + 0x18);
            } while (!((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 0x40));
        } else {
            do {
                func_0201ca9c(arg0 + 0x18);
                if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    func_0201e3c4(temp_r4);
    if (var_r5 != 0) {
        return func_02020b8c((void *) arg0);
    }
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        return 1;
    }
    return 0;
}
