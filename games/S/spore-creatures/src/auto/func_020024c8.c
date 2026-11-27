/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02070324 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_texsrt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
fx32 func_020024c8(const u8 *p, u32 info, u32 data, u32 frame) {
    u32 last;

    if (info & 0x20000000) {
        return (fx32) data;
    }

    p += data;
    if (info & 0xc0000000) {
        last = (u16) info;
        if (info & 0x40000000) {
            if (frame & 1) {
                if (frame > last) {
                    frame = (last >> 1) + 1;
                } else {
                    frame >>= 1;
                    goto avg2;
                }
            } else {
                frame >>= 1;
            }
        } else {
            data = frame & 3;
            if (data != 0) {
                if (frame > last) {
                    frame = data + (last >> 2);
                } else if (frame & 1) {
                    u32 idx0;
                    fx32 v0, v1;

                    if (frame & 2) {
                        frame = frame >> 2;
                        idx0  = frame + 1;
                    } else {
                        idx0  = frame >> 2;
                        frame = idx0 + 1;
                    }
                    if (info & 0x10000000) {
                        v0 = ((const fx16 *) p)[idx0];
                        v1 = ((const fx16 *) p)[frame];
                    } else {
                        v0 = ((const fx32 *) p)[idx0];
                        v1 = ((const fx32 *) p)[frame];
                    }
                    return (v0 + v0 + v0 + v1) >> 2;
                } else {
                    frame >>= 2;
                    goto avg2;
                }
            } else {
                frame >>= 2;
            }
        }
    }

    if (info & 0x10000000) {
        return ((const fx16 *) p)[frame];
    } else {
        return ((const fx32 *) p)[frame];
    }

avg2: {
    fx32 v0, v1;
    if (info & 0x10000000) {
        const fx16 *q = (const fx16 *) p + frame;
        v0            = ((const fx16 *) p)[frame];
        v1            = q[1];
    } else {
        const fx32 *q = (const fx32 *) p + frame;
        v0            = q[0];
        v1            = q[1];
    }
    return (v0 + v1) >> 1;
}
}
