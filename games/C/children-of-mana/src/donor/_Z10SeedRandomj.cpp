/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z10SeedRandomj from https://github.com/tylzars/bakubrawlers src/Main/System/Random.cpp (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct MATHRandContext32 {
    u64 x;
    u64 mul;
    u64 add;
} MATHRandContext32;
static inline void MATH_InitRand32(MATHRandContext32 *context, u64 seed) {
    context->x   = seed;
    context->mul = 0x5D588B656C078965ULL;
    context->add = 0x269EC3ULL;
}
extern MATHRandContext32 data_021111ec;
extern void SeedRandom(u32 seed);
void SeedRandom(u32 seed) {
    MATH_InitRand32(&data_021111ec, seed);
}
