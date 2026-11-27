/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_CalcRotMtx from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef union MtxFx43 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
extern void func_0209bf8c(s32 sn, s32 cs, MtxFx43 *m);
extern void func_0209bf8c(s32 sn, s32 cs, MtxFx43 *m);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_0209bf8c(s32 sn, s32 cs, MtxFx43 *m) {
    s32 d = FX_Mul(0x1000 - cs, 0x555);
    s32 e = FX_Mul(sn, 0x93D);
    s32 p;
    s32 cs2;

    p = d;
    p = p + e;

    m->a[0] = d + cs;
    m->a[3] = p;
    m->a[6] = d - e;
    m->a[9] = 0;

    cs2      = cs;
    m->a[1]  = d - e;
    m->a[4]  = d + cs2;
    m->a[7]  = d + e;
    m->a[10] = 0;

    m->a[2]  = d + e;
    m->a[5]  = d - e;
    m->a[8]  = d + cs2;
    m->a[11] = 0;
}
