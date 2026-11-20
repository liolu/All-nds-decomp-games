/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b5560 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_020b5560.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_020f1950;
extern OSIntrMode func_020b6bd0(void);
extern OSIntrMode func_020b6be4(OSIntrMode mode);
u32 func_020b5560(void) {
    OSIntrMode interruptMode = func_020b6bd0();
    u32 count;

    if (data_020f1950.rescheduleCount < (u32) (0 - 1)) {
        count = data_020f1950.rescheduleCount++;
    }
    (void) func_020b6be4(interruptMode);

    return count;
}
