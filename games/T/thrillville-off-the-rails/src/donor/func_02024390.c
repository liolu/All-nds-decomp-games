/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_SetNextVAlarm from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef int BOOL;
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void);
extern OSIrqMask func_020217d8(OSIrqMask intr);
extern void func_02021968(OSIrqMask intrBit, OSIrqFunction function);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void GX_VCountEqIntr(BOOL enable);
extern void func_02015104(s32 val);
static inline void GX_VCountEqIntr(BOOL enable) {
    if (enable) {
        (*(REGType16v *) (0x04000000 + 0x004)) |= 0x0020;
    } else {
        (*(REGType16v *) (0x04000000 + 0x004)) &= ~0x0020;
    }
}
extern const u16(*ctrdgi_fl_maxtime);
extern void func_02024390(OSVAlarm *alarm);
extern void func_02024188(void *arg);
void func_02024390(OSVAlarm *alarm) {
    func_02021968((1UL << 2), (void (*)()) func_02024188);

    func_02015104(alarm->fire);
    GX_VCountEqIntr(1);

    (void) func_020217d8((1UL << 2));
}
void func_02024188(void *);
