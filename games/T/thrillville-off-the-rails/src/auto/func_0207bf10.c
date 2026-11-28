/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206f080 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_jnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef int s32;
typedef short s16;
typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct UnkResJntAnm {
    u8 anmHeader[4];
    u16 numFrame;
    u16 numNode;
    u32 flag;
    u32 ofsRot3;
    u32 ofsRot9;
    u16 ofsTag[1];
} UnkResJntAnm;
extern void func_0207bf10(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res);
void func_0207bf10(fx32 *out, fx32 frame, const u32 *p, const UnkResJntAnm *res) {
    u32 b;
    u32 a;
    u32 lastInterp;
    u32 info;
    u32 idx;
    u32 f;
    const void *data;

    f    = (u32) (frame >> 12);
    data = (u8 *) res + p[1];
    info = p[0];

    if (info & 0xc0000000) {
        lastInterp = (info & 0x1fff0000) >> 16;

        if (info & 0x40000000) {
            if (f & 1) {
                if (f > lastInterp) {
                    f = (lastInterp >> 1) + 1;
                    goto direct;
                } else {
                    idx = f >> 1;
                    goto half;
                }
            } else {
                f >>= 1;
                goto direct;
            }
        } else {
            if (f & 3) {
                if (f > lastInterp) {
                    f = (lastInterp >> 2) + (f & 3);
                    goto direct;
                }
                if (f & 1) {
                    if (f & 2) {
                        b = f >> 2;
                        a = b + 1;
                    } else {
                        a = f >> 2;
                        b = a + 1;
                    }
                    if (info & 0x20000000) {
                        const fx16 *d = (const fx16 *) data;
                        fx32 t        = d[a] * 3;
                        *out          = (t + d[b]) >> 2;
                    } else {
                        const fx32 *d = (const fx32 *) data;
                        fx64 t        = (fx64) d[a] * 3;
                        *out          = (fx32) ((t + d[b]) >> 2);
                    }
                    return;
                } else {
                    idx = f >> 2;
                    goto half;
                }
            } else {
                f >>= 2;
                goto direct;
            }
        }

    half:
        if (info & 0x20000000) {
            *out = (((const fx16 *) data)[idx] + *((const fx16 *) data + idx + 1)) >> 1;
        } else {
            *out = (((const fx32 *) data)[idx] >> 1) + (*((const fx32 *) data + idx + 1) >> 1);
        }
        return;
    }

direct:
    if (info & 0x20000000) {
        *out = ((const fx16 *) data)[f];
    } else {
        *out = ((const fx32 *) data)[f];
    }
}
