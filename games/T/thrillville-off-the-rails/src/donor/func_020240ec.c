/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_GetVFrame from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef u32 OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
extern s32 data_020ec6b8;
extern s32 data_020ec6b4;
extern s32 func_020240ec(s32 vcount);
s32 func_020240ec(s32 vcount) {
    OSIntrMode enabled = func_02024624();

    if (vcount < data_020ec6b4) {
        data_020ec6b8++;
    }

    data_020ec6b4 = vcount;

    (void) func_02024638(enabled);
    return data_020ec6b8;
}
