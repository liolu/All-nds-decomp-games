/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dIdentity from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
        fx32 _20, _21;
    };
    fx32 m[3][2];
    fx32 a[6];
} MtxFx32;
extern MtxFx32 data_0211f4ac[32];
extern MtxFx32 data_0211f7ac[32];
extern fx32 data_0211f32c[32];
extern s32 data_0211f328;
extern BOOL data_0211f320;
extern void func_02068bb0(void);
void func_02068bb0(void) {
    if (data_0211f320) {
        data_0211f4ac[data_0211f328]._20 = 0;
        data_0211f4ac[data_0211f328]._21 = 0;
    } else {
        MtxFx32 *pMtxCurr = &data_0211f4ac[data_0211f328];

        pMtxCurr->_00 = ((fx32) 0x0000000000001000L);
        pMtxCurr->_01 = 0;
        pMtxCurr->_10 = 0;
        pMtxCurr->_11 = ((fx32) 0x0000000000001000L);
        pMtxCurr->_20 = 0;
        pMtxCurr->_21 = 0;

        data_0211f7ac[data_0211f328] = *pMtxCurr;
    }

    data_0211f32c[data_0211f328] = 0;
}
