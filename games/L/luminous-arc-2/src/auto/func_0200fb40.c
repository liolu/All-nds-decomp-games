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
extern CardCommon data_02149a20;
extern RomStat data_0214a040;
void func_0200ead4(void);
void *func_0200fbb0(void);
void func_0200fd94(void);
void func_0200fb40(void) {
    CardCommon *const p = &data_02149a20;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_0214a040.pad[0]     = 0;
        func_0200ead4();
        data_0214a040.read_func = func_0200fbb0();
        func_0200fd94();
    }
}
