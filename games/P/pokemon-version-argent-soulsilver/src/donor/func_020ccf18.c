/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VEC_Fx16CrossProduct from https://github.com/Project-Holon/aletheia src/game/arm9/fx_vec.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef s16 fx16;
typedef s32 fx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
extern void func_020ccf18(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb);
void func_020ccf18(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb) {
    fx32 x, y, z;

    x      = (a->y * b->z - a->z * b->y + (1 << 11)) >> 12;
    y      = (a->z * b->x - a->x * b->z + (1 << 11)) >> 12;
    z      = (a->x * b->y - a->y * b->x + (1 << 11)) >> 12;
    axb->x = (fx16) x;
    axb->y = (fx16) y;
    axb->z = (fx16) z;
}
