/* compiler: 1.2/sp2p3  */
/* func_0205ca1c from projets/children-of-mana/src/auto/func_0205ca1c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201f6b4();
extern s32 func_0201f898(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0201f8c0(M2C_UNK, M2C_UNK *);
extern u16 data_0203e0ac;
extern M2C_UNK func_0201e448;
void func_0201e48c(void) {
    if (data_0203e0ac != 0) {
        return;
    }
    data_0203e0ac = 1;
    func_0201f6b4();
    do {

    } while (func_0201f898(0xC, 1) == 0);
    func_0201f8c0(0xC, &func_0201e448);
}
