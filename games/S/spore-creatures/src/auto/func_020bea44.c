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
extern CardCommon data_020f3ae0;
extern RomStat data_020f4100;
void func_020bd9d8(void);
void *func_020beab4(void);
void func_020bec98(void);
void func_020bea44(void) {
    CardCommon *const p = &data_020f3ae0;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_020f4100.pad[0]     = 0;
        func_020bd9d8();
        data_020f4100.read_func = func_020beab4();
        func_020bec98();
    }
}
