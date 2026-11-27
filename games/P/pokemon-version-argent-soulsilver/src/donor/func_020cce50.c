/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VEC_Fx16DotProduct from https://github.com/Project-Holon/aletheia src/game/arm9/fx_vec.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
extern fx32 func_020cce50(const VecFx16 *a, const VecFx16 *b);
fx32 func_020cce50(const VecFx16 *a, const VecFx16 *b) {
    fx32 dotXY, dotZ;

    dotXY = (a->x * b->x) + (a->y * b->y);
    dotZ  = (a->z * b->z) + (1 << 11);
    return (fx32) (((fx64) dotXY + dotZ) >> 12);
}
