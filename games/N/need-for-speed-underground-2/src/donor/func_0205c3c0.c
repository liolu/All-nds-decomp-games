/* compiler: 1.2/sp2p3  */
/* func_020654cc from projets/madagascar/src/auto/func_020654cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 data_0217b098;
extern s32 data_0217b09c;
void func_0205c3c0(s32 arg0) {
    if (data_0217b09c == 0) {
        data_0217b09c = arg0;
        data_0217b098 = arg0;
    } else {
        *(M2C_UNK *) data_0217b09c = arg0;
        data_0217b09c              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
}
