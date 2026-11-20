#include "m2c.h"
typedef struct {
    u32 pad0[7];
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 pad2c[3];
    u32 callback;
    u32 callback_arg;
    u8 pad40[0xd4];
    u32 flag;
} CardCommon;
typedef struct {
    u32 pad[8];
    void *read_func;
} RomStat;
extern CardCommon data_020d2de0;
extern RomStat data_020d3400;
void func_0200d4d8(void);
void *func_0200e578(void);
void func_0200e75c(void);
void func_0200e508(void) {
    CardCommon *const p = &data_020d2de0;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_020d3400.pad[0]     = 0;
        func_0200d4d8();
        data_020d3400.read_func = func_0200e578();
        func_0200e75c();
    }
}
