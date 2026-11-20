/* compiler: 2.0/sp1p5  */
/* func_0200e5e8 from projets/code-lyoko/src/auto/func_0200e5e8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02020e94;
extern M2C_UNK func_02020ec0;
s32 func_02020810(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK *arg6, M2C_UNK *arg7) {
    M2C_UNK *var_r1;
    M2C_UNK *var_r2;

    (*(volatile s32 *) ((s8 *) (arg0) + (0x28))) = arg1;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x30))) = arg3;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x3C))) = arg2;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x2C))) = (s32) (*(volatile s32 *) ((s8 *) (arg0) + (0x3C)));
    (*(volatile s32 *) ((s8 *) (arg0) + (0x38))) = arg5;
    var_r2                                       = arg6;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x40))) = arg4;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x34))) = (s32) (*(volatile s32 *) ((s8 *) (arg0) + (0x40)));
    if (var_r2 == ((void *) 0)) {
        var_r2 = &func_02020ec0;
    }
    var_r1                                   = arg7;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x48))) = var_r2;
    if (var_r1 == ((void *) 0)) {
        var_r1 = &func_02020e94;
    }
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x4C)))     = var_r1;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x50)))     = (M2C_UNK *) (*(M2C_UNK **) ((s8 *) (arg0) + (0x48)));
    (*(volatile s32 *) ((s8 *) (arg0) + (0x44))) = 0;
    (*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x1C))) | 2);
    return 1;
}
