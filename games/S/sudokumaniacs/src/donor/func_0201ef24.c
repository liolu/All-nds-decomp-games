/* compiler: 1.2/sp2p3  */
/* func_020637ec from projets/children-of-mana/src/auto/func_020637ec.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201e414(M2C_UNK);
extern s32 func_0201f898(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0201f8c0(M2C_UNK, M2C_UNK *);
extern s32 func_0201ee50();
extern M2C_UNK func_0201ef90;
void func_0201ef24(void) {
    func_0201f8c0(7, &func_0201ef90);
    if (func_0201ee50() == 0) {
        return;
    }
    if (func_0201f898(7, 1) != 0) {
        return;
    }
    do {
        func_0201e414(0x64);
    } while (func_0201f898(7, 1) == 0);
}
