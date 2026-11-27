/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MicStartAutoSampling from https://github.com/Project-Holon/aletheia src/game/arm9/mic.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int BOOL;
typedef u32 uptr;
extern BOOL func_020dabd0(void *buf, u32 size, u32 span, u8 flags);
extern int func_020d66c4(int fifotag, u32 data, BOOL err);
extern BOOL func_020dabd0(void *buf, u32 size, u32 span, u8 flags);
BOOL func_020dabd0(void *buf, u32 size, u32 span, u8 flags) {
    if (func_020d66c4(9, 0x02000000 | 0x4100 | flags, 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x10000 | ((uptr) buf >> 16), 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x20000 | ((uptr) buf & 0xffff), 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x30000 | (size >> 16), 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x40000 | (size & 0xffff), 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x50000 | (span >> 16), 0) < 0) {
        return 0;
    }
    if (func_020d66c4(9, 0x01000000 | 0x60000 | (span & 0xffff), 0) < 0) {
        return 0;
    }
    return 1;
}
