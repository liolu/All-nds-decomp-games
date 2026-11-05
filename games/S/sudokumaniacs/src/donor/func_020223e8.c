/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_GoSleepMode from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/spi/ARM9/pm.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef int BOOL;
typedef u32 PMWakeUpTrigger;
typedef u32 PMLogic;
typedef enum {
    PM_LED_NONE       = 0,
    PM_LED_ON         = 1,
    PM_LED_BLINK_LOW  = 2,
    PM_LED_BLINK_HIGH = 3
} PMLEDStatus;
typedef void (*PMSleepCallback)(void *);
typedef enum {
    PM_LCD_TOP    = 0,
    PM_LCD_BOTTOM = 1,
    PM_LCD_ALL    = 2
} PMLCDTarget;
typedef enum {
    PM_BACKLIGHT_OFF = 0,
    PM_BACKLIGHT_ON  = 1
} PMBackLightSwitch;
typedef enum {
    PM_LCD_POWER_OFF = 0,
    PM_LCD_POWER_ON  = 1
} PMLCDPower;
typedef struct PMiSleepCallbackInfo PMSleepCallbackInfo;
struct PMiSleepCallbackInfo {
    PMSleepCallback callback;
    void *arg;
    PMSleepCallbackInfo *next;
};
extern u32 func_020227ec(PMLCDTarget target, PMBackLightSwitch status);
extern u32 func_02022700(void);
extern u32 func_02022658(PMBackLightSwitch *top, PMBackLightSwitch *bottom);
extern void func_020223e8(PMWakeUpTrigger trigger, PMLogic logic, u16 keyPattern);
extern PMLCDPower func_020222bc(void);
extern BOOL func_020222f8(PMLCDPower sw, PMLEDStatus led, BOOL skip, BOOL isSync);
extern u32 func_02022b40(u16 trigger, u16 keyIntrData);
extern u32 func_020228b8(PMLEDStatus status);
extern void GXS_DispOff(void);
static inline void GXS_DispOff(void) {
    (*(REGType32v *) (0x04000000 + 0x1000)) &= ~0x00010000;
}
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern void func_0201e634(void);
extern OSIntrMode func_0201e3b0(void);
extern OSIntrMode func_0201e3c4(OSIntrMode state);
extern void func_0201e414(u32 cycles);
typedef u32 OSIrqMask;
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_DisableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    BOOL ime                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = enable;
    return ime;
}
static inline OSIrqMask OS_GetRequestIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x214));
}
extern OSIrqMask func_0201c27c(OSIrqMask mask);
extern OSIrqMask func_0201c1fc(OSIrqMask mask);
typedef u64 OSTick;
extern BOOL func_02024b1c(void);
typedef struct {
    u16 length;
    u16 rssi;
    u16 bssid[3];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
} MBParentBssDesc;
typedef struct {
    u16 boot_type;
    MBParentBssDesc parent_bss_desc;
} MBParam;
static inline const MBParam *MB_GetMultiBootParam(void) {
    return (const MBParam *) (0x02000000 + 0x007ffc40);
}
static inline BOOL MB_IsMultiBootChild(void) {
    return MB_GetMultiBootParam()->boot_type == 2;
}
extern const u16(*ctrdgi_fl_maxtime);
extern void func_0202228c(PMSleepCallbackInfo *listp);
extern PMSleepCallbackInfo *data_0203fd78;
extern PMSleepCallbackInfo *data_0203fd80;
u32 func_02022b40(u16 trigger, u16 keyIntrData);
u32 func_020228b8(PMLEDStatus status);
u32 func_020227ec(PMLCDTarget target, PMBackLightSwitch sw);
u32 func_02022700(void);
u32 func_02022658(PMBackLightSwitch *top, PMBackLightSwitch *bottom);
void func_020223e8(PMWakeUpTrigger trigger, PMLogic logic, u16 keyPattern) {
    BOOL prepIrq;
    OSIntrMode prepIntrMode;
    OSIrqMask prepIntrMask;
    BOOL powerOffFlag = 0;

    PMBackLightSwitch preTop;
    PMBackLightSwitch preBottom;

    u32 preGX;
    u32 preGXS;
    PMLCDPower preLCDPower;

    func_0202228c(data_0203fd78);

    prepIrq      = OS_DisableIrq();
    prepIntrMode = func_0201e3b0();
    prepIntrMask = func_0201c1fc((1 << 22) - 1);

    (void) func_0201c27c((1UL << 18));
    (void) func_0201e3c4(prepIntrMode);
    (void) OS_EnableIrq();

    if (trigger & (1 << 3)) {
        if (MB_IsMultiBootChild()) {
            trigger &= ~(1 << 3);
        }
    }

    if (trigger & (1 << 4)) {
        if (!func_02024b1c()) {
            trigger &= ~(1 << 4);
        }
    }

    preGX       = (*(REGType32v *) (0x04000000 + 0x000));
    preGXS      = (*(REGType32v *) (0x04000000 + 0x1000));
    preLCDPower = func_020222bc();

    (void) func_02022658(&preTop, &preBottom);
    (void) func_020227ec(PM_LCD_ALL, PM_BACKLIGHT_OFF);

    {
        vu32 vcount = OS_GetVBlankCount();
        while (vcount == OS_GetVBlankCount()) {
        }
        vcount = OS_GetVBlankCount();

        (*(REGType32v *) (0x04000000 + 0x000)) = (*(REGType32v *) (0x04000000 + 0x000)) & ~0x00030000;
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
        while (func_02022b40(param, (u16) (logic | keyPattern)) != 0) {
        }
    }

    func_0201e634();

    func_0201e414((((OSTick) (((33514000 / 1000) * (u64) (150)) / 64)) * (64 * 2)));

    if ((trigger & (1 << 3)) && (OS_GetRequestIrqMask() & (1UL << 20))) {
        powerOffFlag = 1;
    }

    if (!powerOffFlag) {
        if (preLCDPower == PM_LCD_POWER_ON) {
            (void) func_020222f8(PM_LCD_POWER_ON, PM_LED_ON, 1, 0);
        } else {
            (void) func_020228b8(PM_LED_ON);
        }

        (*(REGType32v *) (0x04000000 + 0x000))  = preGX;
        (*(REGType32v *) (0x04000000 + 0x1000)) = preGXS;
    }

    (void) func_0201e3b0();
    (void) func_0201c27c(prepIntrMask);
    (void) func_0201e3c4(prepIntrMode);
    (void) OS_RestoreIrq(prepIrq);

    if (powerOffFlag) {
        (void) func_02022700();
    }

    func_0202228c(data_0203fd80);
}
BOOL func_020222f8(PMLCDPower sw, PMLEDStatus led, BOOL skip, BOOL isSync);
PMLCDPower func_020222bc(void);
void func_0202228c(PMSleepCallbackInfo *listp);
