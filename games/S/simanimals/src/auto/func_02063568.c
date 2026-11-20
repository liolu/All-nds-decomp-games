/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02063568 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_02063568.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0208e5c8;
extern OSIntrMode func_02064a3c(void);
extern OSIntrMode func_02064a50(OSIntrMode mode);
u32 func_02063568(void) {
    OSIntrMode interruptMode = func_02064a3c();
    u32 count;

    if (data_0208e5c8.rescheduleCount < (u32) (0 - 1)) {
        count = data_0208e5c8.rescheduleCount++;
    }
    (void) func_02064a50(interruptMode);

    return count;
}
