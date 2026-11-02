/* compiler: 2.0/sp1p5  */
/* func_020400c4 from projets/battle-of-giants-dinosaurs/src/auto/func_020400c4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02095354();
extern s16 data_020c9480;
void func_020950ac(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020c9480 = 1;
        return;
    }
    func_02095354();
}
