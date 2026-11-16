/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SetLCDPower from projets/blue-dragon-awakened-shadow/src/donor/PMi_SetLCDPower.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
extern PMWork data_020da5c0;
extern void func_020851a0(u32 cycles);
extern int func_02088040(u32 a, void (*cb)(u32, u32 *), u32 *arg);
extern int func_020880a4(u32 a);
extern int func_02088270(u32 v);
extern int func_02088638(int a, int b, int c, int d);
extern void func_020851ac(void);
extern int func_02088040(u32 a, void (*cb)(u32, u32 *), u32 *arg);
extern int func_020880a4(u32 a);
extern int func_02088270(u32 v);
extern int func_02088270(u32 v);
int func_02088638(int a, int b, int c, int d) {
    switch (a) {
        case 1:
            if (c == 0) {
                if (*(vu32 *) 0x027ffc3c - data_020da5c0.vcount4 <= 7) {
                    return 0;
                }
            }
            if (b) {
                if (d) {
                    if (func_020880a4(b)) {
                        do {
                            func_020851a0(0xa3a47);
                        } while (func_020880a4(b));
                    }
                } else {
                    if (func_02088040(b, 0, 0)) {
                        do {
                            func_020851a0(0xa3a47);
                        } while (func_02088040(b, 0, 0));
                    }
                }
            }
            (*(vu16 *) 0x04000304) |= 1;
            if (func_02088270(data_020da5c0.field10)) {
                do {
                    func_020851a0(0xa3a47);
                } while (func_02088270(data_020da5c0.field10));
            }
            break;
        case 0:
            if (func_02088270(0)) {
                do {
                    func_020851a0(0xa3a47);
                } while (func_02088270(0));
            }
            if (*(vu32 *) 0x027ffc3c - data_020da5c0.vcount8 <= 2) {
                func_020851ac();
                func_020851ac();
            }
            (*(vu16 *) 0x04000304) &= ~1;
            data_020da5c0.vcount4 = *(vu32 *) 0x027ffc3c;
            if (b) {
                if (d) {
                    if (func_020880a4(b)) {
                        do {
                            func_020851a0(0xa3a47);
                        } while (func_020880a4(b));
                    }
                } else {
                    if (func_02088040(b, 0, 0)) {
                        do {
                            func_020851a0(0xa3a47);
                        } while (func_02088040(b, 0, 0));
                    }
                }
            }
            break;
    }
    return 1;
}
