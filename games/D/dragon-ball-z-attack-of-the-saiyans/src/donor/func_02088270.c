/* compiler: 2.0/sp1p5  */
/* PMi_SetAmp from projets/blue-dragon-awakened-shadow/src/auto/PMi_SetAmp.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02087ffc(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_02088870(void);
s32 func_02088270(s32 arg0) {
    if (func_02088870() == 0) {
        return 0;
    }
    return func_02087ffc(0x10, (s32) (u16) arg0, 0);
}
