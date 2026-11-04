/* compiler: 1.2/sp2p3  */
/* func_0205c9d8 from projets/children-of-mana/src/auto/func_0205c9d8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205b2ec();
extern s16 data_0217b088;
void func_0205b300(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0217b088 = 1;
        return;
    }
    func_0205b2ec();
}
