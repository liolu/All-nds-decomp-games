/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d3e0 from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u32 OS_DisableInterrupts(void);
extern u32 OS_RestoreInterrupts(u32 state);
typedef struct PMCallbackInfo PMCallbackInfo;
struct PMCallbackInfo {
    void (*func)(void *arg);
    void *arg;
    PMCallbackInfo *next;
};
typedef struct {
    u16 init;
    u32 vcount4;
    u32 vcount8;
    u32 flag;
    u32 field10;
    PMCallbackInfo *postList;
    PMCallbackInfo *preList;
    u32 lock;
    void (*cb)(u32 result, void *arg);
    void *cbArg;
    u16 *resultPtr;
} PMWork;
extern PMWork data_021039ec;
extern void OS_SpinWait(u32 cycles);
extern int func_0200f728(u32 a);
extern int func_0200f7e4(u32 a, u32 b);
extern int func_0200f924(u32 *a, u32 *b);
extern int PMi_SetLCDPower(int a, int b, int c, int d);
extern int PM_GetLCDPower(void);
extern void PMi_ExecuteList(PMCallbackInfo *list);
extern u32 PMi_ForceToPowerOff(void);
extern u32 OS_DisableIrqMask(u32 mask);
extern void OS_SetIrqMask(u32 mask);
extern int OS_IsTickAvailable(void);
extern void OS_Halt(void);
extern int CTRDG_IsExisting(void);
int PMi_SendSleepStart(u32 a, u32 b);
int func_0200f728(u32 a);
int func_0200f7e4(u32 a, u32 b);
u32 PMi_ForceToPowerOff(void);
int func_0200f924(u32 *a, u32 *b);
void func_0200f9b0(u32 flags, u32 a, u32 b) {
    int ok = 0;
    u32 dispA;
    u32 led0;
    u32 e;
    u32 mask;
    u32 led1;
    u32 dispB;
    u32 lcd;
    vu32 tick;
    u32 cur;
    u16 ime;
    u32 t;
    PMi_ExecuteList(data_021039ec.preList);
    ime                    = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    e                      = OS_DisableInterrupts();
    mask                   = OS_DisableIrqMask(0x3fffff);
    OS_SetIrqMask((OS_IsTickAvailable() ? 8 : 0) | 0x40000);
    OS_RestoreInterrupts(e);
    t                      = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 1;
    if (flags & 8) {
        if (*(vu16 *) 0x027ffc40 == 2) {
            flags &= ~8;
        }
    }
    if (flags & 0x10) {
        if (CTRDG_IsExisting() == 0) {
            flags &= ~0x10;
        }
    }
    dispA = *(vu32 *) 0x04000000;
    dispB = *(vu32 *) 0x04001000;
    lcd   = PM_GetLCDPower();
    while (func_0200f924(&led0, &led1)) {
        OS_SpinWait(0xa3a47);
    }
    while (func_0200f7e4(2, 0)) {
        OS_SpinWait(0xa3a47);
    }
    tick = *(vu32 *) 0x027ffc3c;
    do {
        cur = *(vu32 *) 0x027ffc3c;
    } while (tick == cur);
    tick = *(vu32 *) 0x027ffc3c;
    *(vu32 *) 0x04000000 &= ~0x30000;
    *(vu32 *) 0x04001000 &= ~0x10000;
    do {
        cur = *(vu32 *) 0x027ffc3c;
    } while (tick == cur);
    tick = *(vu32 *) 0x027ffc3c;
    do {
        cur = *(vu32 *) 0x027ffc3c;
    } while (tick == cur);
    data_021039ec.flag = 0;
    PMi_SendSleepStart((u16) (flags | (led0 ? 0x40 : 0) | (led1 ? 0x80 : 0)), (u16) (a | b));
    while (data_021039ec.flag == 0) {
        OS_Halt();
    }
    if (flags & 8) {
        if (*(vu32 *) 0x04000214 & 0x100000) {
            ok = 1;
        }
    }
    if (!ok) {
        if (lcd == 1) {
            while (PMi_SetLCDPower(1, 1, 1, 1) != 1) {
            }
        } else {
            if (func_0200f728(1)) {
                do {
                    OS_SpinWait(0xa3a47);
                } while (func_0200f728(1));
            }
        }
        *(vu32 *) 0x04000000 = dispA;
        *(vu32 *) 0x04001000 = dispB;
    }
    OS_SpinWait(0x360000);
    OS_DisableInterrupts();
    OS_SetIrqMask(mask);
    OS_RestoreInterrupts(e);
    t                      = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = ime;
    if (ok) {
        PMi_ForceToPowerOff();
    }
    PMi_ExecuteList(data_021039ec.postList);
}
int PMi_SetLCDPower(int a, int b, int c, int d);
int PM_GetLCDPower(void);
void PMi_ExecuteList(PMCallbackInfo *list);
