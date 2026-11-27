/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203d570 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0203/func_0203d570.c (license: MIT), reused
 * by tools/donor_match.py */
struct V2 {
    int x;
    int y;
};
int func_02010378(struct V2 *a, struct V2 *b) {
    return (int) (((long long) a->x * b->x + 0x800) >> 12) + (int) (((long long) a->y * b->y + 0x800) >> 12);
}
