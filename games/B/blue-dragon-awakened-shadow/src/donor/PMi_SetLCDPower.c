/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d6ec from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
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
extern int PMi_SetLEDAsync(u32 a, void (*cb)(u32, u32 *), u32 *arg);
extern int func_0200f728(u32 a);
extern int PMi_SetAmp(u32 v);
extern int PMi_SetLCDPower(int a, int b, int c, int d);
extern void func_02008c04(void);
int PMi_SetLEDAsync(u32 a, void (*cb)(u32, u32 *), u32 *arg);
int func_0200f728(u32 a);
extern int PMi_SetAmp(u32 v);
int PMi_SetAmp(u32 v);
int PMi_SetLCDPower(int a, int b, int c, int d) {
    switch (a) {
        case 1:
            if (c == 0) {
                if (*(vu32 *) 0x027ffc3c - data_021039ec.vcount4 <= 7) {
                    return 0;
                }
            }
            if (b) {
                if (d) {
                    if (func_0200f728(b)) {
                        do {
                            OS_SpinWait(0xa3a47);
                        } while (func_0200f728(b));
                    }
                } else {
                    if (PMi_SetLEDAsync(b, 0, 0)) {
                        do {
                            OS_SpinWait(0xa3a47);
                        } while (PMi_SetLEDAsync(b, 0, 0));
                    }
                }
            }
            (*(vu16 *) 0x04000304) |= 1;
            if (PMi_SetAmp(data_021039ec.field10)) {
                do {
                    OS_SpinWait(0xa3a47);
                } while (PMi_SetAmp(data_021039ec.field10));
            }
            break;
        case 0:
            if (PMi_SetAmp(0)) {
                do {
                    OS_SpinWait(0xa3a47);
                } while (PMi_SetAmp(0));
            }
            if (*(vu32 *) 0x027ffc3c - data_021039ec.vcount8 <= 2) {
                func_02008c04();
                func_02008c04();
            }
            (*(vu16 *) 0x04000304) &= ~1;
            data_021039ec.vcount4 = *(vu32 *) 0x027ffc3c;
            if (b) {
                if (d) {
                    if (func_0200f728(b)) {
                        do {
                            OS_SpinWait(0xa3a47);
                        } while (func_0200f728(b));
                    }
                } else {
                    if (PMi_SetLEDAsync(b, 0, 0)) {
                        do {
                            OS_SpinWait(0xa3a47);
                        } while (PMi_SetLEDAsync(b, 0, 0));
                    }
                }
            }
            break;
    }
    return 1;
}
