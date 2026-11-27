/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dPopMtx from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
extern void func_020a4e24();
extern s32 data_02128388;
extern u16 data_020f9248;
extern BOOL NNSi_G2dIsStackEmpty(void);
extern void NNSi_G2dMtxPop(void);
extern void RestoreRndMtxStackStateNotSR_(void);
inline void RestoreRndMtxStackStateNotSR_(void) {
    data_020f9248 = 0xFFFE;
}
inline BOOL NNSi_G2dIsStackEmpty(void) {
    return (BOOL) (data_02128388 <= 0);
}
inline void NNSi_G2dMtxPop(void) {
    if (!NNSi_G2dIsStackEmpty()) {
        data_02128388--;

        {
            if (data_020f9248 > data_02128388) {
                ((void) 0);

                RestoreRndMtxStackStateNotSR_();
            }
        }
    } else {
        ((void) 0);
    }
}
void func_020a4e24() {
    ((void) 0);
    NNSi_G2dMtxPop();
}
