/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATH_CalcSHA1 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/math/dgt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct DGTHash2Context {
    unsigned long Intermediate_Hash[5];
    unsigned long Length_Low;
    unsigned long Length_High;
    int Message_Block_Index;
    unsigned char Message_Block[64];
    int Computed;
    int Corrupted;
} DGTHash2Context;
extern void func_020d9374(DGTHash2Context *ctx);
extern void func_020d93c4(DGTHash2Context *ctx, unsigned char *, unsigned long);
extern void func_020d9518(DGTHash2Context *ctx, unsigned char digest[20]);
typedef DGTHash2Context MATHSHA1Context;
extern void func_020e3798(void *digest, const void *data, u32 dataLength);
static inline void MATH_SHA1Init(MATHSHA1Context *context) {
    func_020d9374(context);
}
static inline void MATH_SHA1Update(MATHSHA1Context *context, const void *input, u32 length) {
    func_020d93c4(context, (u8 *) input, length);
}
static inline void MATH_SHA1GetHash(MATHSHA1Context *context, void *digest) {
    func_020d9518(context, (u8 *) digest);
}
void func_020e3798(void *digest, const void *data, u32 dataLength) {
    MATHSHA1Context context;

    MATH_SHA1Init(&context);
    MATH_SHA1Update(&context, data, dataLength);
    MATH_SHA1GetHash(&context, digest);
}
