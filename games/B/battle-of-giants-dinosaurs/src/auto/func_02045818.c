/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
typedef void (*CB)(u32);
void func_02000b9c(s32);
void func_020402cc(void);
void func_02045308(void);
u32 func_0203ffe0(void);
void func_0203fff4(u32);
void func_0203f084(void *);
void func_0203f0b8(void *);
void func_0203f100(void *);
void func_020453cc(s32);
void func_02045eac(void *, s32, s32);
extern u8 data_020c4780[];
extern u8 data_020c2620[];

s32 func_02045818(s32 type) {
    u8 *c = data_020c4780;
    u32 irq;
    CB cb;
    u32 arg;
    func_02000b9c(0x2000bc4);
    if (type == 0) {
        func_020402cc();
    }
    func_02045308();
    irq = func_0203ffe0();
    while (*(u32 *) (c + 0x114) & 4) {
        func_0203f084(c + 0x10c);
    }
    *(u32 *) (c + 0x114) |= 4;
    *(u32 *) (c + 0x38) = 0;
    *(u32 *) (c + 0x3c) = 0;
    func_0203fff4(irq);
    func_020453cc(type);
    *(u32 *) (data_020c4780 + 0x104) = *(u32 *) (data_020c2620 + 4);
    func_02045eac(c, 2, 1);
    *(u32 *) (*(u8 **) c + 0xc)  = 0;
    *(u8 **) (*(u8 **) c + 0x10) = c + 0x120;
    *(u32 *) (*(u8 **) c + 0x14) = 1;
    func_02045eac(c, 6, 1);
    cb  = *(CB *) (c + 0x38);
    arg = *(u32 *) (c + 0x3c);
    irq = func_0203ffe0();
    *(u32 *) (c + 0x114) &= ~0x4c;
    func_0203f0b8(c + 0x10c);
    if (*(u32 *) (c + 0x114) & 0x10) {
        func_0203f100(c + 0x44);
    }
    func_0203fff4(irq);
    if (cb != NULL) {
        cb(arg);
    }
    return **(s32 **) c == 0;
}
