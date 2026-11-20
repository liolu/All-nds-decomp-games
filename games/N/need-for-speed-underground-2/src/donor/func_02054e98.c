/* compiler: 1.2/sp2p3  */
/* func_0205a2d0 from projets/madagascar/src/auto/func_0205a2d0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205456c(s32, void *);
extern M2C_UNK func_02056a04();
extern M2C_UNK data_02179e44;
void func_02054e98(void *arg0) {
    void *temp_r1;

    if ((*(s32 *) ((s8 *) (arg0) + (8))) == 0) {
        return;
    }
    func_02056a04();
    temp_r1 = (*(void **) ((s8 *) (arg0) + (0xC)));
    if (temp_r1 != ((void *) 0)) {
        (*(s32 *) ((s8 *) (temp_r1) + (8))) = 0;
        return;
    }
    func_0205456c(((*(s32 *) ((s8 *) (arg0) + (0x10))) * 0x1C) + (s32) &data_02179e44 + 0xC, arg0);
}
