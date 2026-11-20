/* compiler: 1.2/sp2p3  */
/* func_020524fc from projets/children-of-mana/src/auto/func_020524fc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02058ea8();
extern M2C_UNK func_02058fa4();
extern M2C_UNK func_0204be7c();
extern s32 func_0204c060(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0204c088(M2C_UNK, M2C_UNK *);
extern s32 data_0206efdc;
extern s32 data_0206efe0;
extern M2C_UNK func_02058f08;
extern M2C_UNK func_02058f68;
void func_02059160(void) {
    if (data_0206efdc != 0) {
        return;
    }
    data_0206efdc = 1;
    func_02058ea8();
    func_0204be7c();
    do {

    } while (func_0204c060(0xD, 1) == 0);
    func_0204c088(0xD, &func_02058f68);
    func_02058fa4();
    func_0204c088(0xD, ((void *) 0));
    func_0204c088(0xD, &func_02058f08);
    data_0206efe0 = 0;
}
