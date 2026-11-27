/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206f1e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_jnt.c (license: none),
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
extern void func_020830dc(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res);
void func_020830dc(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res) {
    const void *data;
    u32 f;
    u32 info;

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
            fx32 frac = frame & 0xfff;
            fx32 v0, v1;
            if (info & 0x20000000) {
                v0 = ((const fx16 *) data)[f];
                v1 = ((const fx16 *) data)[0];
            } else {
                v0 = ((const fx32 *) data)[f];
                v1 = ((const fx32 *) data)[0];
            }
            *out = v0 + (((v1 - v0) * frac) >> 12);
        } else {
            *out = (info & 0x20000000) ? ((const fx16 *) data)[f] : ((const fx32 *) data)[f];
        }
    } else {
        fx32 mul;
        int shift;
        fx32 v0, v1;

        if (info & 0xc0000000) {
            u32 lastInterp = (info & 0x1fff0000) >> 16;
            if (info & 0x40000000) {
                if (f >= lastInterp) {
                    f = lastInterp >> 1;
                    goto step1;
                }
                f >>= 1;
                frame &= 0x1fff;
                mul   = 2;
                shift = 1;
            } else {
                if (f >= lastInterp) {
                    f = (f & 3) + (f >> 2);
                    goto step1;
                }
                f >>= 2;
                frame &= 0x3fff;
                mul   = 4;
                shift = 2;
            }
        } else {
        step1:
            frame &= 0xfff;
            mul   = 1;
            shift = 0;
        }

        if (info & 0x20000000) {
            v0 = ((const fx16 *) data)[f];
            v1 = *((const fx16 *) data + f + 1);
        } else {
            v0 = ((const fx32 *) data)[f];
            v1 = *((const fx32 *) data + f + 1);
        }
        *out = (fx32) (v0 * mul + (((v1 - v0) * frame) >> 12)) >> shift;
    }
}
