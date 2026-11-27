/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d8ad8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkDigestKey {
    const void *key;
    u32 size;
} UnkDigestKey;
extern UnkDigestKey data_02110cc0;
extern void func_020d9714(void *digest, const void *src, u32 size, const void *key, u32 keySize);
extern void func_020d4994(void *dest, u8 value, u32 count);
extern void func_020d4a50(const void *src, void *dest, u32 count);
extern UnkDigestKey data_02110cc0;
BOOL func_020d8ad8(const u8 *digest, void *src, u32 size) {
    s32 i;
    u8 hash[20];
    u8 key[64];

    func_020d4994(hash, 0, sizeof(hash));
    func_020d4a50(data_02110cc0.key, key, data_02110cc0.size);
    func_020d9714(hash, src, size, key, data_02110cc0.size);

    for (i = 0; i < sizeof(hash); i += sizeof(u32)) {
        if (*(u32 *) (hash + i) != *(u32 *) (digest + i)) {
            break;
        }
    }
    return i == sizeof(hash);
}
