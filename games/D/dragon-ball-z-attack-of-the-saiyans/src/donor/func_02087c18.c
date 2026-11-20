/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200cc98 from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
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
extern PMWork data_020da5c0;
extern u32 func_02085188(void);
extern void func_020855b8(void);
extern void func_02087c18(void);
void func_02087c18(void) {
    vu32 *l = (vu32 *) &data_020da5c0.lock;
    if (data_020da5c0.lock == 0) {
        return;
    }
    do {
        if (func_02085188() == 0x80 || (*(vu16 *) 0x04000208) == 0) {
            func_020855b8();
        }
    } while (*l != 0);
}
