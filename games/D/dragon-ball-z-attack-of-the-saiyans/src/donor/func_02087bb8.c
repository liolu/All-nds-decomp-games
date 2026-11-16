/* compiler: 2.0/sp1p5  */
/* func_0200f23c from projets/blue-dragon-awakened-shadow/src/auto/func_0200f23c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020da5c0;
s32 func_02087bb8(void) {
    if ((*(s32 *) ((s8 *) (&data_020da5c0) + (0x1C))) != 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (&data_020da5c0) + (0x1C))) = 1;
    return 1;
}
