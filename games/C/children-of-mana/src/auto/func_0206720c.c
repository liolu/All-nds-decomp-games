/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G2dScale from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Renderer.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
extern const u16(*ctrdgi_fl_maxtime);
extern fx32 func_02055e58(fx32 denom);
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
        fx32 _20, _21;
    };
    fx32 m[3][2];
    fx32 a[6];
} MtxFx32;
extern void func_0206720c(fx32 x, fx32 y, fx32 z);
extern void NNSi_G2dSetScale(MtxFx32 *m, fx32 sx, fx32 sy);
extern void func_02068c78(const MtxFx32 *a, const MtxFx32 *b, MtxFx32 *ab);
inline void NNSi_G2dSetScale(MtxFx32 *m, fx32 sx, fx32 sy) {
    ((void) 0);

    m->_00 = sx;
    m->_01 = 0;
    m->_10 = 0;
    m->_11 = sy;
    m->_20 = 0;
    m->_21 = 0;
}
inline void NNSi_G2dSetScaleFor2DHW(MtxFx32 *m, fx32 sx, fx32 sy) {
    ((void) 0);

    m->_00 = func_02055e58(sx);
    m->_01 = 0;
    m->_10 = 0;
    m->_11 = func_02055e58(sy);
    m->_20 = 0;
    m->_21 = 0;
}
extern MtxFx32 data_0211f4ac[32];
extern MtxFx32 data_0211f7ac[32];
extern s32 data_0211f328;
extern u16 data_020ff0d4;
extern BOOL data_0211f320;
extern void NNSi_G2dScale(fx32 sx, fx32 sy);
extern u16 NNSi_G2dGetMtxStackPos(void);
extern void NNSi_G2dSetRndMtxStackSRTransformed(void);
extern BOOL NNSi_G2dIsRndCurrentMtxSRTransformed(void);
inline void NNSi_G2dSetRndMtxStackSRTransformed(void) {
    ((void) 0);

    ((void) 0);

    data_020ff0d4 = NNSi_G2dGetMtxStackPos();
}
inline BOOL NNSi_G2dIsRndCurrentMtxSRTransformed(void) {
    return (BOOL) (!data_0211f320 && data_020ff0d4 != 0xFFFE);
}
inline void NNSi_G2dScale(fx32 sx, fx32 sy) {
    ((void) 0);

    {
        MtxFx32 temp;
        NNSi_G2dSetScale(&temp, sx, sy);
        func_02068c78(&temp, &data_0211f4ac[data_0211f328], &data_0211f4ac[data_0211f328]);
        NNSi_G2dSetScaleFor2DHW(&temp, sx, sy);
        func_02068c78(&temp, &data_0211f7ac[data_0211f328], &data_0211f7ac[data_0211f328]);
    }
}
inline u16 NNSi_G2dGetMtxStackPos(void) {

    return (u16) (data_0211f328);
}
typedef enum MCMRndMtxStateType {
    MCM_MTX_NOT_SR = 0,
    MCM_MTX_SR_NOT_CACHELOADED,
    MCM_MTX_SR_NOT_CACHELOADED_STACKCHANGED,
    MCM_MTX_SR_CACHELOADED
} MCMRndMtxStateType;
typedef struct MCMMtxState {
    u16 mtxCacheIdx;
    u16 groupID;
    u16 stateType;
    u16 pad16;
} MCMMtxState;
inline void SetMtxStateGroupID_(MCMMtxState *pMtxState, u16 groupID) {
    pMtxState->groupID = groupID;
}
extern MCMMtxState data_0211f3ac[32];
extern u16 data_0211f31c;
inline MCMMtxState *GetCuurentMtxState_() {
    return &data_0211f3ac[NNSi_G2dGetMtxStackPos()];
}
inline u16 GetNewGroupID_(void) {
    return data_0211f31c++;
}
inline void NNSi_G2dMCMSetCurrentMtxSRChanged(void) {
    MCMMtxState *pCurrMtxState = GetCuurentMtxState_();

    switch (pCurrMtxState->stateType) {
        case MCM_MTX_SR_NOT_CACHELOADED:
            return;
        case MCM_MTX_NOT_SR:
        case MCM_MTX_SR_NOT_CACHELOADED_STACKCHANGED:
        case MCM_MTX_SR_CACHELOADED: {
            SetMtxStateGroupID_(pCurrMtxState, GetNewGroupID_());

            pCurrMtxState->stateType = MCM_MTX_SR_NOT_CACHELOADED;

            ((void) 0);
        } break;
    }
}
void func_0206720c(fx32 x, fx32 y, fx32 z) {

#pragma unused(z)
#line 734
    ((void) 0);
    NNSi_G2dScale(x, y);

    if (!NNSi_G2dIsRndCurrentMtxSRTransformed()) {
        ((void) 0);
        NNSi_G2dSetRndMtxStackSRTransformed();
    }

    NNSi_G2dMCMSetCurrentMtxSRChanged();
}
