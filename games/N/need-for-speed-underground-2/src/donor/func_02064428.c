/* compiler: 1.2/sp2p3  */
/* func_020524fc from projets/children-of-mana/src/auto/func_020524fc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02064170();
extern M2C_UNK func_0206426c();
extern M2C_UNK func_0205ca74();
extern s32 func_0205cc58(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205cc80(M2C_UNK, M2C_UNK *);
extern s32 data_0217e228;
extern s32 data_0217e22c;
extern M2C_UNK func_020641d0;
extern M2C_UNK func_02064230;
void func_02064428(void) {
    if (data_0217e228 != 0) {
        return;
    }
    data_0217e228 = 1;
    func_02064170();
    func_0205ca74();
    do {

    } while (func_0205cc58(0xD, 1) == 0);
    func_0205cc80(0xD, &func_02064230);
    func_0206426c();
    func_0205cc80(0xD, ((void *) 0));
    func_0205cc80(0xD, &func_020641d0);
    data_0217e22c = 0;
}
