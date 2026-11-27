/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020427c4 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_020427c4.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned long long u64;
extern u64 OS_GetTick(void);
u64 current_time(void) {
    return OS_GetTick() * 64ULL / 0x82ea;
}
