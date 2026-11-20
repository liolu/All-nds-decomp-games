/* compiler: 2.0/sp1p5  */
/* FSi_ExecuteSyncCommand from projets/blue-dragon-awakened-shadow/src/auto/FSi_ExecuteSyncCommand.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207cee4(void *, s32);
extern s32 func_0207cf40(void *, s32);
extern s32 func_0207db1c(s32);
extern M2C_UNK func_0207dd30();
s32 func_0207ddc4(void *arg0) {
    func_0207cee4(arg0, func_0207cf40(arg0, (*(s32 *) ((s8 *) (arg0) + (0x10)))));
    if (func_0207db1c((*(s32 *) ((s8 *) (arg0) + (8)))) != 0) {
        func_0207dd30();
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        return 1;
    }
    return 0;
}
