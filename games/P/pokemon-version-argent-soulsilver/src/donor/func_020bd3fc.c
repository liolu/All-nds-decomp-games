/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dCharCanvasInitForVRAM from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_font.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
struct Pen {
    void *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved0d[3];
    int param;
    const void *vtable;
};
typedef union {
    u32 raw;
    struct {
        u32 w : 8;
        u32 h : 8;
        u32 rest : 16;
    };
} Param;
extern void func_020bd284(struct Pen *p, void *charBase, int areaWidth, int areaHeight, int dstBpp, const void *vtable,
                          int param);
extern void func_020bd3fc(void *pCC, void *charBase, int areaWidth, int areaHeight, int colorMode);
extern const u8 data_02109438[4][4][2];
extern const u8 data_0210942c[];
void func_020bd284(struct Pen *p, void *charBase, int areaWidth, int areaHeight, int dstBpp, const void *vtable, int param);
// clang-format off
static inline u32 MATH_CountLeadingZeros(u32 x)
{
    asm { clz x, x }
    return x;
}
// clang-format on
inline static int MATH_ILog2(u32 x) {
    return (int) (31 - MATH_CountLeadingZeros(x));
}
inline static int SizeToShift(int size) {
    return (size >= 8) ? 3 : MATH_ILog2((u32) size);
}
void func_020bd3fc(void *pCC, void *charBase, int areaWidth, int areaHeight, int colorMode) {
    Param param;
    const int shiftW = SizeToShift(areaWidth);
    const int shiftH = SizeToShift(areaHeight);
    const u8 *p      = data_02109438[shiftH][shiftW];

    param.w = p[0];
    param.h = p[1];
    func_020bd284((struct Pen *) pCC, charBase, areaWidth, areaHeight, colorMode, data_0210942c, param.raw);
}
