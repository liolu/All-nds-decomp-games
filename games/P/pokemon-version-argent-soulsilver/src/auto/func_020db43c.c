/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_GoSleepMode from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PM_GoSleepMode.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef int BOOL;
typedef int OSIntrMode;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
extern struct {
    u32 reserved0;
    volatile BOOL syncFlag;
    volatile BOOL sleepEndFlag;
    u32 reserved0c[4];
    PMiWork work;
} data_021e372c;
typedef u32 OSIrqMask;
typedef u32 PMWakeUpTrigger;
typedef u32 PMLogic;
typedef int PMBackLightSwitch;
typedef int PMLCDPower;
typedef int PMLEDStatus;
typedef int PMLCDTarget;
typedef struct PMSleepCallbackInfo PMSleepCallbackInfo;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
extern OSIrqMask func_020d1204(OSIrqMask intr);
extern OSIrqMask func_020d11a8(OSIrqMask intr);
extern BOOL func_020d3438(void);
extern void func_020d3f58(void);
extern void func_020db330(void);
extern void func_020d3aa8(u32 cycles);
extern BOOL func_020e1134(void);
extern void func_020db938(PMSleepCallbackInfo *listp);
extern PMLCDPower func_020db794(void);
extern u32 func_020db3b4(PMBackLightSwitch *top, PMBackLightSwitch *bottom);
extern u32 func_020db25c(PMLCDTarget target, PMBackLightSwitch sw);
extern u32 func_020daf54(u16 trigger, u16 keyIntrData);
extern BOOL func_020db67c(PMLCDPower sw, PMLEDStatus led, BOOL skip, BOOL isSync);
extern u32 func_020db1b8(PMLEDStatus status);
static inline BOOL OS_DisableIrq(void) {
    u16 prep               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prep;
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 1;
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (u16) enable;
    return (BOOL) prep;
}
static inline OSIrqMask OS_GetRequestIrqMask(void) {
    return (*(vu32 *) 0x04000214);
}
static inline BOOL MB_IsMultiBootChild(void) {
    return *(const u16 *) 0x027ffc40 == 2;
}
static inline u32 OS_GetVBlankCount(void) {
    return *(vu32 *) 0x027ffc3c;
}
static inline void GXS_DispOff(void) {
    (*(vu32 *) 0x04001000) &= ~0x00010000;
}
void func_020db43c(PMWakeUpTrigger trigger, PMLogic logic, u16 keyPattern) {
    BOOL prepIrq;
    OSIntrMode prepIntrMode;
    OSIrqMask prepIntrMask;
    BOOL powerOffFlag = 0;
    PMBackLightSwitch preTop;
    PMBackLightSwitch preBottom;
    u32 preGX;
    u32 preGXS;
    PMLCDPower preLCDPower;

    func_020db938((*(PMSleepCallbackInfo **) &data_021e372c.reserved0c[0]));

    prepIrq      = OS_DisableIrq();
    prepIntrMode = _Z20DisableIRQInterruptsv();
    prepIntrMask = func_020d1204((1 << 22) - 1);

    {

        OSIntrMode intr = (1UL << 18) | (func_020d3438() ? (1UL << 3) : 0);
        (void) func_020d11a8(intr);
    }

    (void) _Z20SetIRQInterruptStatei(prepIntrMode);
    (void) OS_EnableIrq();

    if (trigger & (1 << 3)) {
        if (MB_IsMultiBootChild()) {
            trigger &= ~(1 << 3);
        }
    }

    if (trigger & (1 << 4)) {
        if (!func_020e1134()) {
            trigger &= ~(1 << 4);
        }
    }

    preGX       = (*(vu32 *) 0x04000000);
    preGXS      = (*(vu32 *) 0x04001000);
    preLCDPower = func_020db794();

    (void) func_020db3b4(&preTop, &preBottom);
    (void) func_020db25c(2, 0);

    {
        vu32 vcount = OS_GetVBlankCount();
        while (vcount == OS_GetVBlankCount()) {
        }
        vcount = OS_GetVBlankCount();

        (*(vu32 *) 0x04000000) = (*(vu32 *) 0x04000000) & ~0x00030000;
        GXS_DispOff();

        while (vcount == OS_GetVBlankCount()) {
        }
        vcount = OS_GetVBlankCount();
        while (vcount == OS_GetVBlankCount()) {
        }
    }

    {
        u16 param;
        param = (u16) (trigger | preTop << 5 | preBottom << 6);
        while (func_020daf54(param, (u16) (logic | keyPattern)) != 0) {
        }
    }

    func_020d3f58();

    if ((trigger & (1 << 3)) && (OS_GetRequestIrqMask() & (1UL << 20))) {
        powerOffFlag = 1;
    }

    if (!powerOffFlag) {
        if (preLCDPower == 1) {
            (void) func_020db67c(1, 1, 1, 1);
        } else {
            (void) func_020db1b8(1);
        }

        (*(vu32 *) 0x04000000) = preGX;
        (*(vu32 *) 0x04001000) = preGXS;
    }

    func_020d3aa8((((110) * (33513982 / 64) / 1000) * (64 * 2)));

    (void) _Z20DisableIRQInterruptsv();
    (void) func_020d11a8(prepIntrMask);
    (void) _Z20SetIRQInterruptStatei(prepIntrMode);
    (void) OS_RestoreIrq(prepIrq);

    if (powerOffFlag) {
        func_020db330();
    }

    func_020db938((*(PMSleepCallbackInfo **) &data_021e372c.reserved0c[3]));
}
