/* compiler: 1.2/sp2p3  */
/* func_02011d00 from projets/code-lyoko/src/auto/func_02011d00.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0201e408();
extern M2C_UNK func_0201f6c0();
extern s32 data_0203fd84;
void func_02022e04(void) {
    if (data_0203fd84 == 0) {
        return;
    }
    do {
        if (func_0201e408() == 0x12) {
            func_0201f6c0();
        }
    } while (data_0203fd84 != 0);
}
