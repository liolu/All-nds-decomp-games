/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02011810 from https://github.com/watamelonman/smtsj-decomp libs/NitroSDK/sdk_020116a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int (*Unk116a8_Compare)(const void *key, const void *record);
extern void *func_02017630(const void *key, const void *base, u32 count, u32 size, Unk116a8_Compare compare);
void *func_02017630(const void *key, const void *base, u32 count, u32 size, Unk116a8_Compare compare) {
    u32 low;
    u32 high;
    u32 middle;
    u32 offset;
    int result;

    if (key == 0 || base == 0 || count == 0 || size == 0 || compare == 0) {
        return 0;
    }
    result = compare(key, base);
    if (result == 0) {
        return (void *) base;
    }
    if (result < 0) {
        return 0;
    }
    low  = 1;
    high = count - 1;
    while (low <= high) {
        middle = (low + high) / 2;
        offset = size * middle;
        result = compare(key, (const u8 *) base + offset);
        if (result == 0) {
            return (void *) ((const u8 *) base + offset);
        }
        if (result < 0) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }
    return 0;
}
