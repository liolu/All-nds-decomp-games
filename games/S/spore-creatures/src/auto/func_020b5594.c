/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_020f1950;
extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 func_020b5594(void) {
    u32 savedState = func_020b6bd0();
    u32 count      = 0;

    if (data_020f1950.rescheduleCount != 0) {
        count                         = data_020f1950.rescheduleCount;
        data_020f1950.rescheduleCount = count - 1;
    }
    func_020b6be4(savedState);
    return count;
}
