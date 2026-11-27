/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02071380 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_si3d.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} UnkVecFx32;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
typedef struct {
    fx32 m[3][3];
} UnkMtxFx33;
typedef struct {
    u32 flag;
    UnkVecFx32 scale;
    UnkVecFx32 scaleEx0;
    UnkVecFx32 scaleEx1;
    UnkMtxFx33 rot;
    UnkVecFx32 trans;
} UnkJntAnmResult;
typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origW;
    u16 origH;
    fx32 magW;
    fx32 magH;
} UnkMatAnmResult;
typedef struct {
    u8 unk_00[0xc4];
    u32 isScaleCacheOne[8];
} UnkG3dRS;
typedef struct {
    UnkVecFx32 s;
    UnkVecFx32 inv;
} UnkScaleCache;
extern UnkG3dRS *NNS_G3dRS;
typedef struct {
    UnkMatAnmResult matCache[64];
    UnkScaleCache scaleCache[64];
    u8 evpCache[64][0x64];
} UnkG3dRSOnGlb;
extern UnkG3dRSOnGlb NNS_G3dRSOnGlb;
void NNSi_G3dGetJointScaleSi3d(UnkJntAnmResult *result, const UnkVecFx32 *p, const u8 *data, u32 srtflag) {
    u32 nodeID   = data[1];
    u32 parentID = data[2];

    if (srtflag & 4) {
        result->flag |= 1;
        if (NNS_G3dRS->isScaleCacheOne[parentID >> 5] & (1 << (parentID & 31))) {
            NNS_G3dRS->isScaleCacheOne[nodeID >> 5] |= 1 << (nodeID & 31);
            result->flag |= 0x18;
        } else {
            MIi_CpuCopy32(&NNS_G3dRSOnGlb.scaleCache[parentID], &NNS_G3dRSOnGlb.scaleCache[nodeID], sizeof(UnkScaleCache));
            MIi_CpuCopy32(&NNS_G3dRSOnGlb.scaleCache[parentID], &result->scaleEx0, sizeof(UnkScaleCache));
        }
    } else {
        result->scale.x = p->x;
        result->scale.y = p->y;
        result->scale.z = p->z;
        if (NNS_G3dRS->isScaleCacheOne[parentID >> 5] & (1 << (parentID & 31))) {
            MIi_CpuCopy32(p, &NNS_G3dRSOnGlb.scaleCache[nodeID], sizeof(UnkScaleCache));
            NNS_G3dRS->isScaleCacheOne[nodeID >> 5] &= ~(1 << (nodeID & 31));
            result->flag |= 0x18;
        } else {
            NNS_G3dRS->isScaleCacheOne[nodeID >> 5] &= ~(1 << (nodeID & 31));
            NNS_G3dRSOnGlb.scaleCache[nodeID].s.x =
                ((fx32) (((s64) (p[0].x) * (NNS_G3dRSOnGlb.scaleCache[parentID].s.x)) >> 12));
            NNS_G3dRSOnGlb.scaleCache[nodeID].s.y =
                ((fx32) (((s64) (p[0].y) * (NNS_G3dRSOnGlb.scaleCache[parentID].s.y)) >> 12));
            NNS_G3dRSOnGlb.scaleCache[nodeID].s.z =
                ((fx32) (((s64) (p[0].z) * (NNS_G3dRSOnGlb.scaleCache[parentID].s.z)) >> 12));
            NNS_G3dRSOnGlb.scaleCache[nodeID].inv.x =
                ((fx32) (((s64) (p[1].x) * (NNS_G3dRSOnGlb.scaleCache[parentID].inv.x)) >> 12));
            NNS_G3dRSOnGlb.scaleCache[nodeID].inv.y =
                ((fx32) (((s64) (p[1].y) * (NNS_G3dRSOnGlb.scaleCache[parentID].inv.y)) >> 12));
            NNS_G3dRSOnGlb.scaleCache[nodeID].inv.z =
                ((fx32) (((s64) (p[1].z) * (NNS_G3dRSOnGlb.scaleCache[parentID].inv.z)) >> 12));
            MIi_CpuCopy32(&NNS_G3dRSOnGlb.scaleCache[parentID], &result->scaleEx0, sizeof(UnkScaleCache));
        }
    }
}
