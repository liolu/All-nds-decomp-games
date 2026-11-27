/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d9714 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/math/calls/func_020d9714.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef struct MATHSHA1Context {
    u32 data[0x68 / 4];
} MATHSHA1Context;
typedef struct MATHiHMACFuncs {
    u32 dlength;
    u32 blength;
    void *context;
    void *hash_buf;
    void (*HashReset)(void *context);
    void (*HashSetSource)(void *context, const void *input, u32 length);
    void (*HashGetDigest)(void *context, void *digest);
} MATHiHMACFuncs;
extern const MATHiHMACFuncs data_0210e1ac;
extern void func_020d9374(void *context);
extern void func_020d93c4(void *context, const void *input, u32 length);
extern void func_020d9518(void *context, void *digest);
extern void func_020d97a8(void *digest, const void *bin_ptr, u32 bin_len, const void *key_ptr, u32 key_len,
                          MATHiHMACFuncs *funcs);
void func_020d9714(void *digest, const void *bin_ptr, u32 bin_len, const void *key_ptr, u32 key_len) {
    MATHSHA1Context context;
    unsigned char hash_buf[20];
    MATHiHMACFuncs hash2funcs = data_0210e1ac;

    hash2funcs.context       = &context;
    hash2funcs.hash_buf      = hash_buf;
    hash2funcs.HashReset     = (void (*)(void *)) func_020d9374;
    hash2funcs.HashSetSource = (void (*)(void *, const void *, u32)) func_020d93c4;
    hash2funcs.HashGetDigest = (void (*)(void *, void *)) func_020d9518;
    func_020d97a8(digest, bin_ptr, bin_len, key_ptr, key_len, &hash2funcs);
}
