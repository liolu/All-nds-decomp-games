/* compiler: 2.0/sp1p5  */
/* FS_ConvertPathToFileID from projets/blue-dragon-awakened-shadow/src/auto/FS_ConvertPathToFileID.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207e438(M2C_UNK *);
extern s32 func_0207e460(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0207e620(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_0207e438(sp0);
    if (func_0207e460(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
