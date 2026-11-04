/* compiler: 1.2/sp2p3  */
/* func_02074100 from projets/children-of-mana/src/auto/func_02074100.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02054e34(M2C_UNK, M2C_UNK);
extern void func_02055000(M2C_UNK);
extern void func_020574fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02055140(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if ((*(u8 *) ((s8 *) (arg0) + (0x2C))) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_02055000(arg0);
        return;
    }
    func_020574fc(arg0 + 0x1C, 0, arg1);
    func_02054e34(arg0, 0);
    (*(u8 *) ((s8 *) (arg0) + (0x2C))) = 2U;
}
