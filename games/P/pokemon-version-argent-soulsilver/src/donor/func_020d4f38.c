/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SearchLZ from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_compress_search.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern u32 func_020d4f38(const u8 *start, const u8 *cur, u32 remain, u16 *offset, u32 maxLen);
u32 func_020d4f38(const u8 *start, const u8 *cur, u32 remain, u16 *offset, u32 maxLen) {
    const u8 *s;
    const u8 *p;
    const u8 *q;
    u16 bestOff;
    u32 bestLen = 2;
    u32 len;
    int dist;
    if (remain < 3) {
        return 0;
    }
    s = cur - 0x1000;
    if (s < start) {
        s = start;
    }
    while ((dist = cur - s) >= 2) {
        p = cur;
        while (!(*p == s[0] && p[1] == s[1] && p[2] == s[2])) {
            s++;
            if ((dist = cur - s) < 2) {
                goto end;
            }
        }
        q = s + 3;
        p += 3;
        len = 3;
        while (p - cur < remain && *p == *q) {
            len++;
            p++;
            q++;
            if (len == maxLen) {
                break;
            }
        }
        if (len > bestLen) {
            bestLen = len;
            bestOff = dist;
            if (len == maxLen || len == remain) {
                break;
            }
        }
        s++;
    }
end:
    if (bestLen < 3) {
        return 0;
    }
    *offset = bestOff;
    return bestLen;
}
