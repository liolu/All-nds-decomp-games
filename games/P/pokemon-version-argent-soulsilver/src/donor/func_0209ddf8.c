/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SPL_EMITTER_AddVec from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
struct RandomVecRange {
    s16 x;
    s16 y;
    s16 z;
    u16 interval;
};
extern void func_0209ddf8(struct RandomVecRange *o, void *s, int *dst);
extern void func_0209ddf8(struct RandomVecRange *o, void *s, int *dst);
void func_0209ddf8(struct RandomVecRange *o, void *s, int *dst) {
    dst[0] = dst[0] + o->x;
    dst[1] = dst[1] + o->y;
    dst[2] = dst[2] + o->z;
}
