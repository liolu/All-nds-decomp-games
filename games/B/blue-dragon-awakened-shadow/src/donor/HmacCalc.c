/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205f570 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/math/math_hmac.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkHmacParam {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
    void (*unk_10)(void *context);
    void (*unk_14)(void *context, const void *data, u32 len);
    void (*unk_18)(void *context, void *digest);
} UnkHmacParam;
extern void HmacCalc(u8 *digest, const void *data, u32 dataLen, const u8 *key, s32 keyLen, UnkHmacParam *param);
void HmacCalc(u8 *digest, const void *data, u32 dataLen, const u8 *key, s32 keyLen, UnkHmacParam *param) {
    u8 keyHash[64];
    u8 ipad[64];
    u8 opad[64];
    s32 i;

    if (digest == 0 || data == 0 || dataLen == 0 || key == 0 || keyLen == 0 || param == 0) {
        return;
    }

    if (keyLen > param->unk_04) {
        param->unk_10(param->unk_08);
        param->unk_14(param->unk_08, key, keyLen);
        param->unk_18(param->unk_08, keyHash);
        keyLen = param->unk_00;
        key    = keyHash;
    }

    for (i = 0; i < keyLen; i++) {
        ipad[i] = key[i] ^ 0x36;
    }
    for (; i < param->unk_04; i++) {
        ipad[i] = 0x36;
    }
    param->unk_10(param->unk_08);
    param->unk_14(param->unk_08, ipad, param->unk_04);
    param->unk_14(param->unk_08, data, dataLen);
    param->unk_18(param->unk_08, param->unk_0c);

    for (i = 0; i < keyLen; i++) {
        opad[i] = key[i] ^ 0x5C;
    }
    for (; i < param->unk_04; i++) {
        opad[i] = 0x5C;
    }
    param->unk_10(param->unk_08);
    param->unk_14(param->unk_08, opad, param->unk_04);
    param->unk_14(param->unk_08, param->unk_0c, param->unk_00);
    param->unk_18(param->unk_08, digest);
}
