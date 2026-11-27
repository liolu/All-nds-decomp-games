#include "m2c.h"
typedef struct {
    u16 done;
    u16 unk;
    u16 *buffer;
} RegA;
typedef struct {
    u8 pad[0x1c];
    void *cb;
    void *arg;
} PmSt;
extern RegA data_020f3a0c[5];
extern PmSt data_020f39cc;
s32 func_020bc074(void);
void func_020bc67c(u32 d);
u32 func_020bc398(u32 reg, u16 *buffer, void *callback, void *arg) {
    if (!func_020bc074()) {
        return 1;
    }
    data_020f39cc.cb          = callback;
    data_020f39cc.arg         = arg;
    data_020f3a0c[reg].done   = 0;
    data_020f3a0c[reg].buffer = buffer;
    func_020bc67c(0x03006500 | (reg & 0xff));
    return 0;
}
