/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gsiTimeNitro from https://github.com/Project-Holon/aletheia src/game/ov009/gstimernitro.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
long time(long *timer) {
    long t = (long) ((OS_GetTick() * 64) / 0x01FF6210ULL);
    if (timer != 0) {
        *timer = t;
    }
    return t;
}
