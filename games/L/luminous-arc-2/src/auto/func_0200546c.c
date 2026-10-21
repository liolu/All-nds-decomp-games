/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200546c from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_0200546c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_021478e0;
extern OSIntrMode func_02006be0(void);
extern OSIntrMode func_02006bf4(OSIntrMode mode);
u32 func_0200546c(void) {
    OSIntrMode interruptMode = func_02006be0();
    u32 count;

    if (data_021478e0.rescheduleCount < (u32) (0 - 1)) {
        count = data_021478e0.rescheduleCount++;
    }
    (void) func_02006bf4(interruptMode);

    return count;
}
