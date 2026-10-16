/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004fe0 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_02004fe0.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_020d0c40;
extern OSIntrMode func_020066e0(void);
extern OSIntrMode func_020066f4(OSIntrMode mode);
u32 func_02004fe0(void) {
    OSIntrMode interruptMode = func_020066e0();
    u32 count;

    if (data_020d0c40.rescheduleCount < (u32) (0 - 1)) {
        count = data_020d0c40.rescheduleCount++;
    }
    (void) func_020066f4(interruptMode);

    return count;
}
