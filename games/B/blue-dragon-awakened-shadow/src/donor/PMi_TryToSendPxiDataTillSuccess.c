/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200ceac from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
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
extern int func_0200f23c(void);
extern void PMi_TryToSendPxiDataTillSuccess(u32 *cmd, int n);
extern void PMi_SendPxiData(u32 word);
int func_0200f23c(void);
void func_0200f348(u32 v, u32 *p);
void PMi_TryToSendPxiDataTillSuccess(u32 *cmd, int n) {
    vu32 res;
    int i;
    u32 e;
    while (1) {
        e = OS_DisableInterrupts();
        if (!func_0200f23c()) {
            OS_RestoreInterrupts(e);
            continue;
        }
        res                 = 0xffff0000;
        data_021039ec.cb    = (void (*)(u32, void *)) func_0200f348;
        data_021039ec.cbArg = (void *) &res;
        for (i = 0; i < n; i++) {
            PMi_SendPxiData(cmd[i]);
        }
        OS_RestoreInterrupts(e);
        while (res == 0xffff0000) {
            OS_SpinWait(0xa3a47);
        }
        if (res == 0) {
            return;
        }
        OS_SpinWait(0xa3a47);
    }
}
void PMi_SendPxiData(u32 word);
