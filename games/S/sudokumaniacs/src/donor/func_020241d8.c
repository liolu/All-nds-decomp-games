/* compiler: 1.2/sp2p3  */
/* func_020139c8 from projets/code-lyoko/src/auto/func_020139c8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201ca9c(M2C_UNK);
extern M2C_UNK func_0201d600(s32 *, M2C_UNK);
extern M2C_UNK func_0201d638(s32 *, M2C_UNK);
extern M2C_UNK func_0201d65c();
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern M2C_UNK func_0201e414(M2C_UNK);
extern s32 func_0201f7e4(M2C_UNK, s32 *, M2C_UNK);
extern s32 func_0201f898(M2C_UNK, M2C_UNK);
s32 func_020241d8(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 2)) {
        (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) | 2);
        if (func_0201f898(0xB, 1) == 0) {
            do {
                func_0201e414(0x64);
            } while (func_0201f898(0xB, 1) == 0);
        }
        func_020241d8(arg0, ((void *) 0), 1);
    }
    func_0201d638((*(s32 **) ((s8 *) (arg0) + (0))), 0x60);
    func_0201d65c();
loop_6:
    (*(s32 **) ((s8 *) (arg0) + (4)))             = arg1;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) | 0x20);
    do {

    } while (func_0201f7e4(0xB, arg1, 1) < 0);
    if (arg1 == ((void *) 0)) {
        temp_r10 = (*(s32 **) ((s8 *) (arg0) + (0)));
        do {

        } while (func_0201f7e4(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = func_0201e3b0();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x20) {
        do {
            func_0201ca9c(0);
        } while ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x20);
    }
    func_0201e3c4(temp_r10_2);
    func_0201d600((*(s32 **) ((s8 *) (arg0) + (0))), 0x60);
    temp_r0 = *(*(s32 **) ((s8 *) (arg0) + (0)));
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
