/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d21fc from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_020d21fc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_021e169c;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode mode);
u32 func_020d21fc(void) {
    OSIntrMode interruptMode = _Z20DisableIRQInterruptsv();
    u32 count;

    if (data_021e169c.rescheduleCount < (u32) (0 - 1)) {
        count = data_021e169c.rescheduleCount++;
    }
    (void) _Z20SetIRQInterruptStatei(interruptMode);

    return count;
}
