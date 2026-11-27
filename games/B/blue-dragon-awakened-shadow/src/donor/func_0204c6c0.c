/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Base64Encode from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/net_common.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern int func_0204c6c0(const u8 *src, u32 len, char *dest, u32 destSize);
extern signed char *data_020f9950;
int func_0204c6c0(const u8 *src, u32 len, char *dest, u32 destSize) {
    int count;
    const u8 *next, *end;
    char *nextOut;
    char *out;

    struct {
        u8 first, second, third;
    } in;

    u32 outLen = (len / 3) * 4 + (len % 3 ? 4 : 0);
    if (!dest) {
        return outLen;
    }
    if (destSize < outLen) {
        return -1;
    }
    next    = src;
    end     = src + len;
    nextOut = dest;
    while (next != end) {
        int rem  = end - next;
        int bits = rem * 8;
        count    = bits / 6 + (bits % 6 != 0);
        if (rem >= 3) {
            rem = 3;
        }
        MI_CpuFill8((void *) &in, 0, 3);
        out = nextOut;
        MI_CpuCopy8(next, (void *) &in, rem);
        out[0] = data_020f9950[in.first >> 2];
        if (count < 2) {
            out[1] = '*';
        } else {
            int a = in.first, b = in.second;
            out[1] = data_020f9950[((a << 4) & 63) | (b >> 4)];
        }
        if (count < 3) {
            out[2] = '*';
        } else {
            int a = in.second, b = in.third;
            out[2] = data_020f9950[((a << 2) & 63) | (b >> 6)];
        }
        if (count < 4) {
            out[3] = '*';
        } else {
            int a  = in.third;
            out[3] = data_020f9950[a & 63];
        }
        next += rem;
        nextOut += 4;
    }
    return nextOut - dest;
}
