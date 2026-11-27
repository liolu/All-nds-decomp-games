/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207159c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_si3d.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef long long s64;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
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
    fx32 m[4][3];
} UnkMtxFx43;
typedef struct {
    u32 cmd;
    u32 mtxMode;
    UnkMtxFx43 m;
    u32 mtxMode2;
} UnkTexMtxCmd43;
extern void NNS_G3dGeBufferOP_N(u32 op, const void *args, u32 num);
void NNSi_G3dSendTexSRTSi3d(const UnkMatAnmResult *anm) {
    UnkTexMtxCmd43 buf;

    if (anm->flag & 8) {
        buf.cmd = 0x101710;
    } else {
        buf.cmd = 0x101910;
    }
    buf.mtxMode   = 3;
    buf.m.m[3][2] = 0;
    buf.m.m[2][2] = 0;
    buf.m.m[2][1] = 0;
    buf.m.m[2][0] = 0;
    buf.m.m[1][2] = 0;
    buf.m.m[1][0] = 0;
    buf.m.m[0][2] = 0;
    buf.m.m[0][1] = 0;
    buf.mtxMode2  = 2;

    if (anm->flag & 4) {
        buf.m.m[3][0] = 0;
        buf.m.m[3][1] = 0;
        if (anm->flag & 1) {
            buf.m.m[0][0] = 0x1000;
            buf.m.m[1][1] = 0x1000;
        } else {
            buf.m.m[0][0] = anm->scaleS;
            buf.m.m[1][1] = anm->scaleT;
        }
    } else if (anm->flag & 1) {
        buf.m.m[3][0] = -(anm->transS << 4) * anm->origW;
        buf.m.m[3][1] = -(anm->transT << 4) * anm->origH;
        buf.m.m[0][0] = 0x1000;
        buf.m.m[1][1] = 0x1000;
    } else {
        buf.m.m[3][0] = anm->origW * -((fx32) (((s64) (anm->scaleS) * (anm->transS)) >> 8));
        buf.m.m[3][1] = anm->origH * -((fx32) (((s64) (anm->scaleT) * (anm->transT)) >> 8));
        buf.m.m[0][0] = anm->scaleS;
        buf.m.m[1][1] = anm->scaleT;
    }

    if (anm->magW != 0x1000) {
        buf.m.m[0][0] = ((fx32) (((s64) (anm->magW) * (buf.m.m[0][0])) >> 12));
        buf.m.m[3][0] = ((fx32) (((s64) (anm->magW) * (buf.m.m[3][0])) >> 12));
    }
    if (anm->magH != 0x1000) {
        buf.m.m[1][1] = ((fx32) (((s64) (anm->magH) * (buf.m.m[1][1])) >> 12));
        buf.m.m[3][1] = ((fx32) (((s64) (anm->magH) * (buf.m.m[3][1])) >> 12));
    }

    NNS_G3dGeBufferOP_N(buf.cmd, (u32 *) &buf + 1, 0xe);
}
