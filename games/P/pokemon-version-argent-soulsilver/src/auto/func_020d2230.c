/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_021e169c;
extern u32 _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 func_020d2230(void) {
    u32 savedState = _Z20DisableIRQInterruptsv();
    u32 count      = 0;

    if (data_021e169c.rescheduleCount != 0) {
        count                         = data_021e169c.rescheduleCount;
        data_021e169c.rescheduleCount = count - 1;
    }
    _Z20SetIRQInterruptStatei(savedState);
    return count;
}
