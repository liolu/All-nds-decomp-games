/* compiler: 2.0/sp1p5  */
/* CARDi_TryWaitAsync from projets/blue-dragon-awakened-shadow/src/auto/CARDi_TryWaitAsync.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020da680;
s32 func_02088de4(void) {
    if (!((*(s32 *) ((s8 *) (&data_020da680) + (0x114))) & 4)) {
        return 1;
    }
    return 0;
}
