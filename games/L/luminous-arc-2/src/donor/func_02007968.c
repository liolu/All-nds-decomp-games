/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MI_InitUncompContextLZ from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/auto/MI_InitUncompContextLZ.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef struct {
    u8 *destp;
    s32 destCount;
    u32 length;
    u16 destTmp;
    u8 destTmpCnt;
    u8 flags;
    u8 flagIndex;
    u8 lengthFlg;
    u8 exFormat;
    u8 _padding[1];
} MIUncompContextLZ;
typedef struct {
    u32 compParam : 4;
    u32 compType : 4;
    u32 destSize : 24;
} MICompressionHeader;
void func_02007968(MIUncompContextLZ *context, u8 *dest, const MICompressionHeader *header) {
    context->destp      = dest;
    context->destCount  = (s32) header->destSize;
    context->flags      = 0;
    context->flagIndex  = 0;
    context->length     = 0;
    context->lengthFlg  = 3;
    context->destTmp    = 0;
    context->destTmpCnt = 0;
    context->exFormat   = (u8) ((header->compParam == 0) ? 0U : 1U);
}
