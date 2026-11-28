/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203405c from projets/code-lyoko/src/donor/func_0203405c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_02008934();
extern s32 data_020ea12c;
extern u16 data_020dfef8;
extern BOOL NNSi_G2dIsStackEmpty(void);
extern void NNSi_G2dMtxPop(void);
extern void RestoreRndMtxStackStateNotSR_(void);
inline void RestoreRndMtxStackStateNotSR_(void) {
    data_020dfef8 = 0xFFFE;
}
inline BOOL NNSi_G2dIsStackEmpty(void) {
    return (BOOL) (data_020ea12c <= 0);
}
inline void NNSi_G2dMtxPop(void) {
    if (!NNSi_G2dIsStackEmpty()) {
        data_020ea12c--;

        {
            if (data_020dfef8 > data_020ea12c) {
                ((void) 0);

                RestoreRndMtxStackStateNotSR_();
            }
        }
    } else {
        ((void) 0);
    }
}
void func_02008934() {
    ((void) 0);
    NNSi_G2dMtxPop();
}
