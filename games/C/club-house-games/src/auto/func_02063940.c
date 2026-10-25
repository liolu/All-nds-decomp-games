/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"
typedef void (*CB)(u32);
void func_02000b54(s32);
void func_02060cf4(void);
void func_02063524(void);
u32 func_0206094c(void);
void func_02060960(u32);
void func_0205ef78(void *);
void func_0205ef24(void *);
void func_0205ef00(void *);
void func_02063718(s32);
void func_02064234(void *, s32, s32);
extern u8 data_02266a60[];
extern u8 data_022649f8[];

s32 func_02063940(s32 type) {
    u8 *c = data_02266a60;
    u32 irq;
    CB cb;
    u32 arg;
    func_02000b54(0x2000b80);
    if (type == 0) {
        func_02060cf4();
    }
    func_02063524();
    irq = func_0206094c();
    while (*(u32 *) (c + 0x114) & 4) {
        func_0205ef78(c + 0x10c);
    }
    *(u32 *) (c + 0x114) |= 4;
    *(u32 *) (c + 0x38) = 0;
    *(u32 *) (c + 0x3c) = 0;
    func_02060960(irq);
    func_02063718(type);
    *(u32 *) (data_02266a60 + 0x104) = *(u32 *) (data_022649f8 + 4);
    func_02064234(c, 2, 1);
    *(u32 *) (*(u8 **) c + 0xc)  = 0;
    *(u8 **) (*(u8 **) c + 0x10) = c + 0x120;
    *(u32 *) (*(u8 **) c + 0x14) = 1;
    func_02064234(c, 6, 1);
    cb  = *(CB *) (c + 0x38);
    arg = *(u32 *) (c + 0x3c);
    irq = func_0206094c();
    *(u32 *) (c + 0x114) &= ~0x4c;
    func_0205ef24(c + 0x10c);
    if (*(u32 *) (c + 0x114) & 0x10) {
        func_0205ef00(c + 0x44);
    }
    func_02060960(irq);
    if (cb != NULL) {
        cb(arg);
    }
    return **(s32 **) c == 0;
}
