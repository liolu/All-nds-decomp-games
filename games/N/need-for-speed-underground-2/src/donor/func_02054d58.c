/* compiler: 1.2/sp2p3  */
/* func_0205a858 from projets/club-house-games/src/auto/func_0205a858.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern s32 data_02179e20;
s32 func_02054d58(s32 arg0) {
    if (arg0 & data_02179e20) {
        return 0;
    }
    data_02179e20 |= arg0;
    return 1;
}
