/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SPL_EMITTER_SetRotMtx from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef signed int s32;
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
extern void func_0209bf4c(s32 sn, s32 cs, MtxFx43 *m);
extern void func_0209bf4c(s32 sn, s32 cs, MtxFx43 *m);
void func_0209bf4c(s32 sn, s32 cs, MtxFx43 *m) {
    m->a[0]  = cs;
    m->a[3]  = 0;
    m->a[6]  = sn;
    m->a[9]  = 0;
    m->a[1]  = 0;
    m->a[4]  = 0x1000;
    m->a[7]  = 0;
    m->a[10] = 0;
    m->a[2]  = -sn;
    m->a[5]  = 0;
    m->a[8]  = cs;
    m->a[11] = 0;
}
