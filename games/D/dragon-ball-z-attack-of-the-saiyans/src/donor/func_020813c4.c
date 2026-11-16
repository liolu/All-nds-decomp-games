/* compiler: 2.0/sp1p5  */
/* GX_SetBankForLCDC from projets/blue-dragon-awakened-shadow/src/auto/GX_SetBankForLCDC.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080ac0();
extern u16 data_020d8544;
void func_020813c4(s32 arg0) {
    data_020d8544 |= arg0;
    func_02080ac0(arg0);
}
