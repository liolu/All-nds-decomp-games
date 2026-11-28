/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206f6c4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_jnt_rot.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef long fx32;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} UnkVecFx32;
extern void func_020148fc(const UnkVecFx32 *src, UnkVecFx32 *dst);
typedef struct {
    fx32 m[3][3];
} UnkMtxFx33;
typedef struct {
    u32 info;
    u32 offset;
} UnkJntAnmRInfo;
typedef struct {
    u8 category0;
    u8 revision;
    u16 category1;
    u16 numFrame;
    u16 numNode;
    u32 flag;
    u32 ofsRot3;
    u32 ofsRot5;
} UnkResJntAnm;
extern BOOL func_0207cc90(UnkMtxFx33 *rot, const fx16 *pivotData, const fx16 *rot5Data, u32 info);
static inline void CalcRow2_(UnkMtxFx33 *m) {
    fx32 x = (m->m[0][1] * m->m[1][2] - m->m[0][2] * m->m[1][1]) >> 12;
    fx32 y = (m->m[0][2] * m->m[1][0] - m->m[0][0] * m->m[1][2]) >> 12;
    fx32 z = (m->m[0][0] * m->m[1][1] - m->m[0][1] * m->m[1][0]) >> 12;

    m->m[2][0] = x;
    m->m[2][1] = y;
    m->m[2][2] = z;
}
void func_0207c554(UnkMtxFx33 *rot, fx32 frame, const UnkJntAnmRInfo *rinfo, const UnkResJntAnm *anm) {
    u32 info;
    u32 ofsRot5;
    u32 frameIdx;
    u32 ofsRot3;
    const u16 *data;
    u32 idx;
    BOOL notDone;
    UnkMtxFx33 tmpA;
    UnkMtxFx33 tmpB;

    info     = rinfo->info;
    frameIdx = frame >> 12;
    data     = (const u16 *) ((const u8 *) anm + rinfo->offset);
    ofsRot3  = anm->ofsRot3;
    ofsRot5  = anm->ofsRot5;

    if (info & 0xc0000000) {
        u32 last = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (frameIdx & 1) {
                if (frameIdx > last) {
                    frameIdx = (last >> 1) + 1;
                    goto single;
                }
                idx = frameIdx >> 1;
                goto avg2;
            }
            frameIdx >>= 1;
            goto single;
        } else {
            u32 rem = frameIdx & 3;
            if (rem != 0) {
                if (frameIdx > last) {
                    frameIdx = rem + (last >> 2);
                    goto single;
                }
                if (frameIdx & 1) {
                    u32 idx0;
                    BOOL notDone3 = 0;
                    if (frameIdx & 2) {
                        idx  = frameIdx >> 2;
                        idx0 = idx + 1;
                    } else {
                        idx0 = frameIdx >> 2;
                        idx  = idx0 + 1;
                    }
                    notDone3 |= func_0207cc90(rot, (const fx16 *) ((const u8 *) anm + ofsRot3),
                                              (const fx16 *) ((const u8 *) anm + ofsRot5), data[idx0]);
                    notDone3 |= func_0207cc90(&tmpA, (const fx16 *) ((const u8 *) anm + ofsRot3),
                                              (const fx16 *) ((const u8 *) anm + ofsRot5), data[idx]);

                    rot->m[0][0] = rot->m[0][0] * 3 + tmpA.m[0][0];
                    rot->m[0][1] = rot->m[0][1] * 3 + tmpA.m[0][1];
                    rot->m[0][2] = rot->m[0][2] * 3 + tmpA.m[0][2];
                    rot->m[1][0] = rot->m[1][0] * 3 + tmpA.m[1][0];
                    rot->m[1][1] = rot->m[1][1] * 3 + tmpA.m[1][1];
                    rot->m[1][2] = rot->m[1][2] * 3 + tmpA.m[1][2];
                    func_020148fc((UnkVecFx32 *) &rot->m[0][0], (UnkVecFx32 *) &rot->m[0][0]);
                    func_020148fc((UnkVecFx32 *) &rot->m[1][0], (UnkVecFx32 *) &rot->m[1][0]);

                    if (!notDone3) {
                        rot->m[2][0] = rot->m[2][0] * 3 + tmpA.m[2][0];
                        rot->m[2][1] = rot->m[2][1] * 3 + tmpA.m[2][1];
                        rot->m[2][2] = rot->m[2][2] * 3 + tmpA.m[2][2];
                        func_020148fc((UnkVecFx32 *) &rot->m[2][0], (UnkVecFx32 *) &rot->m[2][0]);
                    } else {
                        CalcRow2_(rot);
                    }
                    return;
                }
                idx = frameIdx >> 2;
                goto avg2;
            } else {
                frameIdx >>= 2;
                goto single;
            }
        }
    }

    goto single;

avg2:
    notDone = 0;
    notDone |= func_0207cc90(rot, (const fx16 *) ((const u8 *) anm + ofsRot3), (const fx16 *) ((const u8 *) anm + ofsRot5),
                             data[idx]);
    notDone |= func_0207cc90(&tmpB, (const fx16 *) ((const u8 *) anm + ofsRot3), (const fx16 *) ((const u8 *) anm + ofsRot5),
                             *(data + idx + 1));

    rot->m[0][0] += tmpB.m[0][0];
    rot->m[0][1] += tmpB.m[0][1];
    rot->m[0][2] += tmpB.m[0][2];
    rot->m[1][0] += tmpB.m[1][0];
    rot->m[1][1] += tmpB.m[1][1];
    rot->m[1][2] += tmpB.m[1][2];
    func_020148fc((UnkVecFx32 *) &rot->m[0][0], (UnkVecFx32 *) &rot->m[0][0]);
    func_020148fc((UnkVecFx32 *) &rot->m[1][0], (UnkVecFx32 *) &rot->m[1][0]);

    if (!notDone) {
        rot->m[2][0] += tmpB.m[2][0];
        rot->m[2][1] += tmpB.m[2][1];
        rot->m[2][2] += tmpB.m[2][2];
        func_020148fc((UnkVecFx32 *) &rot->m[2][0], (UnkVecFx32 *) &rot->m[2][0]);
    } else {
        CalcRow2_(rot);
    }
    return;

single:
    if (func_0207cc90(rot, (const fx16 *) ((const u8 *) anm + ofsRot3), (const fx16 *) ((const u8 *) anm + ofsRot5),
                      data[frameIdx])) {
        CalcRow2_(rot);
    }
}
BOOL func_0207cc90(UnkMtxFx33 *rot, const fx16 *pivotData, const fx16 *rot5Data, u32 info);
