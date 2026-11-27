/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* VEC_Fx16Add from https://github.com/Project-Holon/aletheia src/game/arm9/fx_vec.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef signed short s16;
typedef s16 fx16;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
extern void func_020ccde0(const VecFx16 *a, const VecFx16 *b, VecFx16 *ab);
void func_020ccde0(const VecFx16 *a, const VecFx16 *b, VecFx16 *ab) {
    ab->x = (fx16) (a->x + b->x);
    ab->y = (fx16) (a->y + b->y);
    ab->z = (fx16) (a->z + b->z);
}
