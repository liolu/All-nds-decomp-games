/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* nextlongrand from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
long nextlongrand(long seed) {
    unsigned

        long lo,
        hi;
    lo = 16807 * (unsigned long) (seed & 0xFFFF);
    hi = 16807 * ((unsigned long) seed >> 16);
    lo += (hi & 0x7FFF) << 16;

    if (lo > 2147483647L) {
        lo &= 2147483647L;
        ++lo;
    }
    lo += hi >> 15;

    if (lo > 2147483647L) {
        lo &= 2147483647L;
        ++lo;
    }

    return (long) lo;
}
