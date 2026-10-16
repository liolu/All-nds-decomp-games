/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bb228 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkDigestKey {
    const void *key;
    u32 size;
} UnkDigestKey;
extern UnkDigestKey data_020e0338;
extern void func_020bf788(void *digest, const void *src, u32 size, const void *key, u32 keySize);
extern void func_020b76ac(void *dest, u8 value, u32 count);
extern void func_020b7740(const void *src, void *dest, u32 count);
extern UnkDigestKey data_020e0338;
BOOL func_020bb228(const u8 *digest, void *src, u32 size) {
    s32 i;
    u8 hash[20];
    u8 key[64];

    func_020b76ac(hash, 0, sizeof(hash));
    func_020b7740(data_020e0338.key, key, data_020e0338.size);
    func_020bf788(hash, src, size, key, data_020e0338.size);

    for (i = 0; i < sizeof(hash); i += sizeof(u32)) {
        if (*(u32 *) (hash + i) != *(u32 *) (digest + i)) {
            break;
        }
    }
    return i == sizeof(hash);
}
