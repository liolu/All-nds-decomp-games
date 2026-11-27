/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_AddScaledVec from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef signed short s16;
struct ScaledVecSource {
    int x;
    int y;
    int z;
    s16 scale;
};
struct RigOffsetPair {
    int reserved0[2];
    int originX;
    int originY;
    int originZ;
    int offsetX;
    int offsetY;
    int offsetZ;
};
extern void func_0209dcac(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
extern void func_0209dcac(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
void func_0209dcac(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c) {
    c[0] = c[0] + (a->scale * (a->x - b->originX - b->offsetX) >> 12);
    c[1] = c[1] + (a->scale * (a->y - b->originY - b->offsetY) >> 12);
    c[2] = c[2] + (a->scale * (a->z - b->originZ - b->offsetZ) >> 12);
}
