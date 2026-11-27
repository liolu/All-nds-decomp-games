/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206f530 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_jnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 fx32;
typedef s16 fx16;
typedef struct UnkResJntAnm {
    u8 anmHeader[4];
    u16 numFrame;
    u16 numNode;
    u32 flag;
    u32 ofsRot3;
    u32 ofsRot9;
    u16 ofsTag[1];
} UnkResJntAnm;
typedef struct UnkScale32 {
    fx32 s;
    fx32 inv;
} UnkScale32;
typedef struct UnkScale16 {
    fx16 s;
    fx16 inv;
} UnkScale16;
extern void getScaleDataEx_(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res);
#pragma opt_propagation reset
void getScaleDataEx_(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res) {
    const void *data;
    u32 f;
    u32 info;
    u32 next;
    fx32 mul;
    int shift;
    fx32 s0, inv0, s1, inv1;

    f    = (u32) (frame >> 12);
    data = (u8 *) res + p[1];
    info = p[0];

    if (res->numFrame - 1 == frame >> 12) {
        if (info & 0xc0000000) {
            if (info & 0x40000000) {
                f = (f & 1) + (f >> 1);
            } else {
                f = (f & 3) + (f >> 2);
            }
        }

        if (res->flag & 2) {
            next = 0;
            goto step1;
        }

        if (info & 0x20000000) {
            const UnkScale16 *d = (const UnkScale16 *) data;
            out[0]              = d[f].s;
            out[1]              = d[f].inv;
        } else {
            const UnkScale32 *d = (const UnkScale32 *) data;
            out[0]              = d[f].s;
            out[1]              = d[f].inv;
        }
        return;
    }

    if (info & 0xc0000000) {
        u32 lastInterp = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (f >= lastInterp) {
                f    = lastInterp >> 1;
                next = f + 1;
                goto step1;
            }
            f >>= 1;
            next = f + 1;
            frame &= 0x1fff;
            mul   = 2;
            shift = 1;
        } else {
            if (f >= lastInterp) {
                f    = (f & 3) + (f >> 2);
                next = f + 1;
                goto step1;
            }
            f >>= 2;
            next = f + 1;
            frame &= 0x3fff;
            mul   = 4;
            shift = 2;
        }
    } else {
        next = f + 1;
    step1:
        frame &= 0xfff;
        mul   = 1;
        shift = 0;
    }

    if (info & 0x20000000) {
        const UnkScale16 *d = (const UnkScale16 *) data;
        s0                  = d[f].s;
        inv0                = d[f].inv;
        s1                  = d[next].s;
        inv1                = d[next].inv;
    } else {
        const UnkScale32 *d = (const UnkScale32 *) data;
        s0                  = d[f].s;
        inv0                = d[f].inv;
        s1                  = d[next].s;
        inv1                = d[next].inv;
    }
    out[0] = (fx32) (s0 * mul + (((s1 - s0) * frame) >> 12)) >> shift;
    out[1] = (fx32) (inv0 * mul + (((inv1 - inv0) * frame) >> 12)) >> shift;
}
