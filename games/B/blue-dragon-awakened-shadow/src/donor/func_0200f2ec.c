/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200cce8 from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
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
extern u32 func_02008b38(void);
extern u32 OS_GetProcMode(void);
extern void PXIi_HandlerRecvFifoNotEmpty(void);
extern void func_0200f2ec(void);
void func_0200f2ec(void) {
    vu32 *l = (vu32 *) &data_021039ec.lock;
    if (data_021039ec.lock == 0) {
        return;
    }
    do {
        if (func_02008b38() == 0x80 || (*(vu16 *) 0x04000208) == 0 || OS_GetProcMode() == 0x12) {
            PXIi_HandlerRecvFifoNotEmpty();
        }
    } while (*l != 0);
}
