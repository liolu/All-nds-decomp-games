/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef void (*CB)(u32);
void func_02000b54(s32);
void func_0201e640(void);
void func_02022fe8(void);
u32 func_0201e3b0(void);
void func_0201e3c4(u32);
void func_0201ca9c(void *);
void func_0201ca1c(void *);
void func_0201c9e8(void *);
void func_020232ac(s32);
void func_020241d8(void *, s32, s32);
extern u8 data_0203fe40[];
extern u8 data_0203dd68[];

s32 func_020235c4(s32 type) {
    u8 *c = data_0203fe40;
    u32 irq;
    CB cb;
    u32 arg;
    func_02000b54(0x2000b7c);
    if (type == 0) {
        func_0201e640();
    }
    func_02022fe8();
    irq = func_0201e3b0();
    while (*(u32 *) (c + 0x114) & 4) {
        func_0201ca9c(c + 0x10c);
    }
    *(u32 *) (c + 0x114) |= 4;
    *(u32 *) (c + 0x38) = 0;
    *(u32 *) (c + 0x3c) = 0;
    func_0201e3c4(irq);
    func_020232ac(type);
    *(u32 *) (data_0203fe40 + 0x104) = *(u32 *) (data_0203dd68 + 4);
    func_020241d8(c, 2, 1);
    *(u32 *) (*(u8 **) c + 0xc)  = 0;
    *(u8 **) (*(u8 **) c + 0x10) = c + 0x120;
    *(u32 *) (*(u8 **) c + 0x14) = 1;
    func_020241d8(c, 6, 1);
    cb  = *(CB *) (c + 0x38);
    arg = *(u32 *) (c + 0x3c);
    irq = func_0201e3b0();
    *(u32 *) (c + 0x114) &= ~0x4c;
    func_0201ca1c(c + 0x10c);
    if (*(u32 *) (c + 0x114) & 0x10) {
        func_0201c9e8(c + 0x44);
    }
    func_0201e3c4(irq);
    if (cb != NULL) {
        cb(arg);
    }
    return **(s32 **) c == 0;
}
