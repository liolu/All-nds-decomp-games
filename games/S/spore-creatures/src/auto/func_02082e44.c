/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206e9f8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_jnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 fx32;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 unk_04;
    u16 ofsEntry;
} NNSG3dResDict;
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
typedef struct NNSG3dAnmObj NNSG3dAnmObj;
typedef void (*UnkAnmFunc)(void *result, NNSG3dAnmObj *obj, u32 idx);
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
extern void func_020b7528(u16 value, void *dest, u32 size);
typedef struct UnkResJntAnm {
    u8 anmHeader[4];
    u16 numFrame;
    u16 numNode;
    u32 flag;
    u32 ofsRot3;
    u32 ofsRot9;
    u16 ofsTag[1];
} UnkResJntAnm;
extern UnkAnmFunc data_020dfc60;
void func_02082e44(NNSG3dAnmObj *obj, const UnkResJntAnm *res, const NNSG3dResMdl *mdl) {
    u32 i;

    obj->resAnm  = (void *) res;
    obj->funcAnm = data_020dfc60;
    func_020b7528(0, obj->mapData, (obj->numMapData = mdl->info.numNode) * 2);

    {
        const u16 *ofsTag = res->ofsTag;
        for (i = 0; i < res->numNode; i++) {
            obj->mapData[i] = (*(const u32 *) ((u8 *) res + ofsTag[i]) >> 24) | 0x100;
        }
    }
}
