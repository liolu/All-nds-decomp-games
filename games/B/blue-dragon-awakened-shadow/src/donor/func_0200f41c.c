/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PmFifoReceive from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
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
extern void func_0200f41c(u32 tag, u32 data, int err);
void func_0200f354(u32 result);
void func_0200f41c(u32 tag, u32 data, int err) {
    u16 cmd = (data & 0x7f00) >> 8;
    u16 arg = data & 0xff;
    if (err) {
        switch (cmd) {
            case 0x61:
            case 0x62:
                arg = 1;
                break;
            default:
                arg = 2;
                break;
        }
        func_0200f354(arg);
        return;
    }
    switch (cmd) {
        case 0x61:
            if (data_021039ec.resultPtr) {
                *data_021039ec.resultPtr = arg;
            }
            arg = 0;
            break;
        case 0x60:
            arg = 0;
            break;
        case 0x62:
            break;
        case 0x63:
            data_021039ec.flag = 1;
            break;
    }
    func_0200f354(arg);
}
