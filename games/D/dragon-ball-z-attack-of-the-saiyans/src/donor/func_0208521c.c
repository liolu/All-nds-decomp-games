/* compiler: 2.0/sp1p5  */
/* OSi_CommonCallback from projets/blue-dragon-awakened-shadow/src/auto/OSi_CommonCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02085398();
extern s16 data_020d8954;
void func_0208521c(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020d8954 = 1;
        return;
    }
    func_02085398();
}
