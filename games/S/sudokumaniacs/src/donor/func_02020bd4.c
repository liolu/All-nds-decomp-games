/* compiler: 1.2/sp2p3  */
/* func_02054050 from projets/children-of-mana/src/auto/func_02054050.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201ca1c(void *);
extern s32 func_0201fa38(void *, s32);
extern void *func_02020c78(s32);
void func_02020bd4(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    u32 temp_r4;
    void *var_r6;

    var_r6  = arg0;
    temp_r5 = (*(volatile s32 *) ((s8 *) (var_r6) + (8)));
    if (var_r6 == ((void *) 0)) {
        return;
    }
loop_3:
    temp_r4                                       = func_0201e3b0();
    (*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) | 0x40);
    if ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0201ca1c(var_r6 + 0x18);
        func_0201e3c4(temp_r4);
        return;
    }
    (*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (var_r6) + (0xC))) | 8);
    func_0201e3c4(temp_r4);
    if (func_0201fa38(var_r6, (*(volatile s32 *) ((s8 *) (var_r6) + (0x10)))) == 6) {
        return;
    }
    var_r6 = func_02020c78(temp_r5);
    if (var_r6 == ((void *) 0)) {
        return;
    }
    goto loop_3;
}
