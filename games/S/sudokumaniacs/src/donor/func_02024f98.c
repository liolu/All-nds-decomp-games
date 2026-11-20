/* compiler: 1.2/sp2p3  */
/* func_0201ee94 from projets/code-lyoko/src/auto/func_0201ee94.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201f6b4();
extern s32 func_0201f898(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0201f8c0(M2C_UNK, M2C_UNK *);
extern M2C_UNK func_02024940(M2C_UNK);
extern M2C_UNK func_02024c8c();
extern M2C_UNK func_02024dcc();
extern M2C_UNK func_02025168(M2C_UNK *);
extern s32 data_020406e0;
extern s32 data_020406e4;
extern s32 data_020406e8;
extern M2C_UNK data_020407c0;
extern M2C_UNK func_02024ccc;
extern M2C_UNK func_02024d10;
extern M2C_UNK func_02024d90;
void func_02024f98(void) {
    if (data_020406e0 != 0) {
        return;
    }
    data_020406e0 = 1;
    func_02024c8c();
    data_020406e4 = 0;
    func_0201f6b4();
    do {

    } while (func_0201f898(0xD, 1) == 0);
    func_0201f8c0(0xD, &func_02024d90);
    func_02024dcc();
    func_0201f8c0(0xD, ((void *) 0));
    func_0201f8c0(0xD, &func_02024d10);
    data_020406e8 = 0;
    func_02025168(&data_020407c0);
    func_0201f8c0(0x11, &func_02024ccc);
    func_02024940(0);
}
