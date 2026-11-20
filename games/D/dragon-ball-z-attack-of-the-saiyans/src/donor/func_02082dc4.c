/* compiler: 2.0/sp1p5  */
/* MI_DmaCopy16 from projets/blue-dragon-awakened-shadow/src/auto/MI_DmaCopy16.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208311c(s32, M2C_UNK, s32, M2C_UNK);
extern void func_01ffb77c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3);
void func_02082dc4(s32 param_1, M2C_UNK param_2, M2C_UNK param_3, u32 param_4) {
    volatile u32 *ctrl;

    if (param_4 == 0) {
        return;
    }
    func_0208311c(param_1, param_2, param_4, 0);
    ctrl = (volatile u32 *) (0x040000B0 + (((param_1 * 3) + 2) * 4));
    while (*ctrl & 0x80000000) {
    }
    func_01ffb77c(param_1, param_2, param_3, (param_4 >> 1) | 0x80000000);
    while (*ctrl & 0x80000000) {
    }
}
