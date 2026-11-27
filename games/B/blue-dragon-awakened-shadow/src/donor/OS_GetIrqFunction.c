/* compiler: 2.0/sp1p5  */
/* OS_GetIrqFunction from projets/heroes-of-mana/src/auto/OS_GetIrqFunction.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK OSi_IrqCallbackInfo;
extern s32 SDK_AUTOLOAD_DTCM_START;
s32 OS_GetIrqFunction(u32 arg0) {
    s32 var_r1;
    u8 *var_r2;
    u32 var_r0;

    var_r0 = arg0;
    var_r2 = (u8 *) &SDK_AUTOLOAD_DTCM_START;
    var_r1 = 0;
loop_1:
    if (var_r0 & 1) {
        if ((var_r1 >= 8) && (var_r1 <= 0xB)) {
            return *((M2C_UNK *) ((s8 *) &OSi_IrqCallbackInfo + ((var_r1 - 8) * 0xC)));
        }
        if ((var_r1 >= 3) && (var_r1 <= 6)) {
            return *((M2C_UNK *) ((s8 *) &OSi_IrqCallbackInfo + ((var_r1 + 1) * 0xC)));
        }
        return *(s32 *) var_r2;
    }
    var_r1 += 1;
    var_r0 = var_r0 >> 1;
    var_r2 += 4;
    if (var_r1 >= 0x16) {
        return 0;
    }
    goto loop_1;
}
