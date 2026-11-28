/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetMatColAnmValue_ from projets/blue-dragon-awakened-shadow/src/donor/GetMatColAnmValue_.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} UnkResDict;
typedef struct {
    u8 category0;
    u8 revision;
    u16 category1;
    u16 numFrame;
    u16 flag;
    UnkResDict dict;
} UnkResAnm;
static inline u16 Blend2_(const u16 *p) {
    u32 c0 = p[0];
    u32 c1 = p[1];
    u32 g  = ((c0 & 0x3e0) + (c1 & 0x3e0)) >> 1;
    u32 rb = 0x7c1f & (((c0 & 0x7c1f) + (c1 & 0x7c1f)) >> 1);
    return (u16) (rb | (g & 0x3e0));
}
u16 func_0207cdfc(const UnkResAnm *anm, u32 info, u32 frame) {
    const u16 *data;
    u32 last;
    u32 idx;

    if (info & 0x20000000) {
        return (u16) info;
    }

    data = (const u16 *) ((const u8 *) anm + (u16) info);
    if (!(info & 0xc0000000)) {
        return data[frame];
    }

    last = (info & 0x1fff0000) >> 16;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > last) {
                return *(data + (last >> 1) + 1);
            }
            idx = frame >> 1;
        } else {
            return data[frame >> 1];
        }
    } else {
        idx = frame & 3;
        if (idx != 0) {
            if (frame > last) {
                return (data + (last >> 2))[idx];
            }
            if (frame & 1) {
                u32 idx0, idx1;
                u32 c0, c1;
                u32 g, rb;

                if (frame & 2) {
                    idx1 = frame >> 2;
                    idx0 = idx1 + 1;
                } else {
                    idx0 = frame >> 2;
                    idx1 = idx0 + 1;
                }
                c0 = data[idx0];
                c1 = data[idx1];
                g  = ((c0 & 0x3e0) + (c0 & 0x3e0) + (c0 & 0x3e0) + (c1 & 0x3e0)) >> 2;
                rb = 0x7c1f & (((c0 & 0x7c1f) + (c0 & 0x7c1f) + (c0 & 0x7c1f) + (c1 & 0x7c1f)) >> 2);
                return (u16) (rb | (g & 0x3e0));
            }
            idx = frame >> 2;
        } else {
            return data[frame >> 2];
        }
    }
    return Blend2_(&data[idx]);
}
