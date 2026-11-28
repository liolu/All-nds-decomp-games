/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206bcc0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_sbc.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
typedef struct {
    fx32 _00, _01, _02, _03, _10, _11, _12, _13, _20, _21, _22, _23, _30, _31, _32, _33;
} MtxFx44;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 unk_04;
    u16 ofsEntry;
} NNSG3dResDict;
typedef struct UnkResDictEntryHeader {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} UnkResDictEntryHeader;
static inline void *GetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    UnkResDictEntryHeader *p = (UnkResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
    return (void *) ((u8 *) &p->data[0] + p->sizeUnit * idx);
}
typedef struct NNSG3dResMdlInfo {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 unk_06;
    u8 unk_07;
    fx32 posScale;
    fx32 invPosScale;
    u8 unk_10[0x2c - 0x10];
} NNSG3dResMdlInfo;
typedef struct NNSG3dResMdl {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResDict nodeInfo;
} NNSG3dResMdl;
typedef struct NNSG3dResMat {
    u16 unk_00;
    u16 unk_02;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResMatData {
    u16 itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 unk_18;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
    u8 texMtx[4];
} NNSG3dResMatData;
typedef struct NNSG3dResShp {
    NNSG3dResDict dict;
} NNSG3dResShp;
typedef struct NNSG3dMatAnmResult {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 rotSin;
    fx16 rotCos;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dMatAnmResult;
typedef struct NNSG3dJntAnmResult {
    u32 flag;
    VecFx32 scale;
    VecFx32 scaleEx0;
    VecFx32 scaleEx1;
    MtxFx33 rot;
    VecFx32 trans;
} NNSG3dJntAnmResult;
typedef struct NNSG3dVisAnmResult {
    BOOL isVisible;
} NNSG3dVisAnmResult;
typedef struct NNSG3dAnmObj NNSG3dAnmObj;
typedef BOOL (*UnkBlendFunc)(void *result, NNSG3dAnmObj *obj, u32 idx);
struct NNSG3dAnmObj {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    void *funcAnm;
    NNSG3dAnmObj *next;
    void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
};
typedef struct NNSG3dRS NNSG3dRS;
typedef void (*UnkSbcCallback)(NNSG3dRS *rs);
typedef struct NNSG3dRenderObj {
    u32 flag;
    NNSG3dResMdl *resMdl;
    NNSG3dAnmObj *anmMat;
    UnkBlendFunc funcBlendMat;
    NNSG3dAnmObj *anmJnt;
    UnkBlendFunc funcBlendJnt;
    NNSG3dAnmObj *anmVis;
    UnkBlendFunc funcBlendVis;
    UnkSbcCallback cbFunc;
    u8 cbCmd;
    u8 cbTiming;
    u16 unk_26;
    UnkSbcCallback cbInitFunc;
    void *unk_2c;
    u8 *ptrUserSbc;
    NNSG3dJntAnmResult *recJntAnm;
    NNSG3dMatAnmResult *recMatAnm;
    u32 hintMatAnmExist[2];
    u32 hintJntAnmExist[2];
    u32 hintVisAnmExist[2];
} NNSG3dRenderObj;
typedef void (*UnkJntScaleFunc)(NNSG3dJntAnmResult *r, const void *p, const u8 *cmd, u32 flag);
typedef void (*UnkJntMtxFunc)(const NNSG3dJntAnmResult *r);
typedef void (*UnkTexMtxFunc)(NNSG3dMatAnmResult *r);
struct NNSG3dRS {
    u8 *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    UnkSbcCallback cbVecFunc[32];
    u8 cbVecTiming[32];
    u8 currentNode;
    u8 currentMat;
    u8 currentNodeDesc;
    u8 unk_af;
    NNSG3dMatAnmResult *pMatAnmResult;
    NNSG3dJntAnmResult *pJntAnmResult;
    NNSG3dVisAnmResult *pVisAnmResult;
    u32 isMatCached[4];
    u32 isScaleCacheOne[2];
    NNSG3dResDict *pResNodeInfo;
    NNSG3dResMat *pResMat;
    NNSG3dResShp *pResShp;
    fx32 posScale;
    fx32 invPosScale;
    UnkJntScaleFunc funcJntScale;
    UnkJntMtxFunc funcJntMtx;
    UnkTexMtxFunc funcTexMtx;
    NNSG3dMatAnmResult tmpMatAnmResult;
    NNSG3dJntAnmResult tmpJntAnmResult;
    NNSG3dVisAnmResult tmpVisAnmResult;
};
typedef struct NNSG3dGlb {
    u32 unk_000[2];
    MtxFx44 projMtx;
    u32 unk_048;
    MtxFx43 cameraMtx;
    u8 unk_07c[0x94 - 0x7c];
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u8 unk_0a0[0xbc - 0xa0];
    MtxFx33 prmBaseRot;
    VecFx32 unk_0e0;
    u8 unk_0ec[0xfc - 0xec];
    u32 flag;
} NNSG3dGlb;
typedef struct UnkScaleCache {
    VecFx32 s;
    VecFx32 inv;
} UnkScaleCache;
typedef struct UnkEvpCache {
    MtxFx44 m;
    MtxFx33 n;
} UnkEvpCache;
typedef struct UnkG3dRSOnGlb {
    NNSG3dMatAnmResult matCache[64];
    UnkScaleCache scaleCache[64];
    UnkEvpCache evpCache[64];
} UnkG3dRSOnGlb;
static inline NNSG3dResMatData *GetMatDataByIdx(const NNSG3dResMat *mat, u32 idx) {
    const u32 *p = (const u32 *) GetResDataByIdx(&mat->dict, idx);
    return (NNSG3dResMatData *) ((u8 *) mat + *p);
}
static inline u32 CheckCallBack(NNSG3dRS *rs, u32 cmd) {
    return rs->cbVecFunc[cmd] ? rs->cbVecTiming[cmd] : 0;
}
static inline BOOL CallBackCheck_A(NNSG3dRS *rs, u32 cmd, u32 *pTiming) {
    *pTiming = CheckCallBack(rs, cmd);
    if (*pTiming == 1) {
        rs->flag &= ~0x40;
        rs->cbVecFunc[cmd](rs);
        *pTiming = CheckCallBack(rs, cmd);
        return rs->flag & 0x40;
    }
    return 0;
}
static inline BOOL CallBackCheck_B(NNSG3dRS *rs, u32 cmd, u32 *pTiming) {
    if (*pTiming == 2) {
        rs->flag &= ~0x40;
        rs->cbVecFunc[cmd](rs);
        *pTiming = CheckCallBack(rs, cmd);
        return rs->flag & 0x40;
    }
    return 0;
}
static inline BOOL CallBackCheck_C(NNSG3dRS *rs, u32 cmd, u32 timing) {
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cbVecFunc[cmd](rs);
        return rs->flag & 0x40;
    }
    return 0;
}
extern void func_02076534(u32 op, const void *args, u32 num);
extern UnkG3dRSOnGlb data_020f45a4;
extern NNSG3dGlb data_020f433c;
extern void func_020775f0(NNSG3dRS *rs, u32 opt, const NNSG3dResMatData *mat, u32 idxMat);
extern const u32 data_020de5f0[8];
void func_020775f0(NNSG3dRS *rs, u32 opt, const NNSG3dResMatData *mat, u32 idxMat) {
    u32 timing;
    BOOL cbFlag;
    NNSG3dMatAnmResult *pResult;

    rs->currentMat = idxMat;
    rs->flag |= 8;
    rs->pMatAnmResult = &rs->tmpMatAnmResult;

    cbFlag = CallBackCheck_A(rs, 4, &timing);
    if (!cbFlag) {
        NNSG3dMatAnmResult *matCache = rs->pRenderObj->recMatAnm;

        if (matCache && !(rs->flag & 0x80)) {
            pResult = &matCache[idxMat];
        } else if ((opt == 0x20 || opt == 0x40) && (rs->isMatCached[idxMat >> 5] & (1 << (idxMat & 0x1f)))) {
            if (matCache) {
                pResult = &matCache[idxMat];
            } else {
                pResult = &data_020f45a4.matCache[idxMat];
            }
        } else {
            NNSG3dRenderObj *obj;

            if (matCache) {
                rs->isMatCached[idxMat >> 5] |= 1 << (idxMat & 0x1f);
                pResult = &rs->pRenderObj->recMatAnm[idxMat];
            } else if (opt == 0x40) {
                rs->isMatCached[idxMat >> 5] |= 1 << (idxMat & 0x1f);
                pResult = &data_020f45a4.matCache[idxMat];
            } else {
                pResult = &rs->tmpMatAnmResult;
            }

            pResult->flag = 0;
            if (GetMatDataByIdx(rs->pResMat, idxMat)->flag & 0x20) {
                pResult->flag |= 0x20;
            }

            {
                u32 mask              = data_020de5f0[(mat->flag >> 6) & 7];
                pResult->prmMatColor0 = (data_020f433c.prmMatColor0 & ~mask) | (mat->diffAmb & mask);
            }
            {
                u32 mask              = data_020de5f0[(mat->flag >> 9) & 7];
                pResult->prmMatColor1 = (data_020f433c.prmMatColor1 & ~mask) | (mat->specEmi & mask);
            }
            pResult->prmPolygonAttr =
                (data_020f433c.prmPolygonAttr & ~mat->polyAttrMask) | (mat->polyAttr & mat->polyAttrMask);
            pResult->prmTexImage = mat->texImageParam;
            pResult->prmTexPltt  = mat->texPlttBase;

            if (mat->flag & 1) {
                const fx32 *p = (const fx32 *) mat->texMtx;

                if (!(mat->flag & 2)) {
                    pResult->scaleS = *p++;
                    pResult->scaleT = *p++;
                } else {
                    pResult->flag |= 1;
                }

                if (!(mat->flag & 4)) {
                    pResult->rotSin = ((const fx16 *) p)[0];
                    pResult->rotCos = ((const fx16 *) p)[1];
                    p++;
                } else {
                    pResult->flag |= 2;
                }

                if (!(mat->flag & 8)) {
                    pResult->transS = p[0];
                    pResult->transT = p[1];
                } else {
                    pResult->flag |= 4;
                }
                pResult->flag |= 8;
            }

            obj = rs->pRenderObj;
            if (obj->anmMat && (obj->hintMatAnmExist[idxMat >> 5] & (1 << (idxMat & 0x1f)))) {
                obj->funcBlendMat(pResult, obj->anmMat, idxMat);
            }

            if (pResult->flag & 0x18) {
                pResult->origWidth  = mat->origWidth;
                pResult->origHeight = mat->origHeight;
                pResult->magW       = mat->magW;
                pResult->magH       = mat->magH;
            }
        }
        rs->pMatAnmResult = pResult;
    }

    cbFlag = CallBackCheck_B(rs, 4, &timing);
    if (!cbFlag) {
        NNSG3dMatAnmResult *r = rs->pMatAnmResult;
        if (r->prmPolygonAttr & 0x1f0000) {
            if (r->flag & 0x20) {
                r->prmPolygonAttr &= ~0x1f0000;
            }
            rs->flag &= ~2;
            if (!(rs->flag & 0x100)) {
                u32 cmd[7];
                cmd[0] = 0x293130;
                cmd[1] = r->prmMatColor0;
                cmd[2] = r->prmMatColor1;
                cmd[3] = r->prmPolygonAttr;
                cmd[4] = 0x2b2a;
                cmd[5] = r->prmTexImage;
                cmd[6] = r->prmTexPltt;
                func_02076534(cmd[0], &cmd[1], 6);
                if (r->flag & 0x18) {
                    rs->funcTexMtx(r);
                }
            }
        } else {
            rs->flag |= 2;
        }
    }
    CallBackCheck_C(rs, 4, timing);
}
