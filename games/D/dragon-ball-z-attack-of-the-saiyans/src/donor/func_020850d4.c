/* compiler: 2.0/sp1p5  */
/* OS_InitVAlarm from projets/blue-dragon-awakened-shadow/src/auto/OS_InitVAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020839c4(M2C_UNK);
extern M2C_UNK data_020d8940;
void func_020850d4(void) {
    if ((*(u16 *) ((s8 *) (&data_020d8940) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_020d8940) + (0)))    = 1U;
    (*(s32 *) ((s8 *) (&data_020d8940) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_020d8940) + (0x10))) = 0;
    func_020839c4(4);
    (*(s32 *) ((s8 *) (&data_020d8940) + (8))) = 0;
    (*(s32 *) ((s8 *) (&data_020d8940) + (4))) = 0;
}
