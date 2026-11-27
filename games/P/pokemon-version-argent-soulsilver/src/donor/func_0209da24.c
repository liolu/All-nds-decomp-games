/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_LerpVec from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
struct LerpSource {
    fx32 x;
    fx32 y;
    fx32 z;
    short w;
};
struct LerpDest {
    fx32 reserved0;
    fx32 reserved1;
    fx32 x;
    fx32 y;
    fx32 z;
};
extern void func_0209da24(struct LerpSource *a, struct LerpDest *b);
extern void func_0209da24(struct LerpSource *a, struct LerpDest *b);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_0209da24(struct LerpSource *a, struct LerpDest *b) {
    b->x = b->x + FX_Mul(a->w, a->x - b->x);
    b->y = b->y + FX_Mul(a->w, a->y - b->y);
    b->z = b->z + FX_Mul(a->w, a->z - b->z);
}
