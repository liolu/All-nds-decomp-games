/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
typedef void (*CB)(u32);
void func_02000b60(s32);
void func_0208bd50(void);
void func_02090bf4(void);
u32 func_01fff934(void);
void func_01fff948(u32);
void func_0208a918(void *);
void func_0208a94c(void *);
void func_0208a994(void *);
void func_02090cc4(s32);
void func_020917b0(void *, s32, s32);
extern u8 data_020d5d80[];
extern u8 data_020d3c04[];

s32 func_0209111c(s32 type) {
    u8 *c = data_020d5d80;
    u32 irq;
    CB cb;
    u32 arg;
    func_02000b60(0x2000b88);
    if (type == 0) {
        func_0208bd50();
    }
    func_02090bf4();
    irq = func_01fff934();
    while (*(u32 *) (c + 0x114) & 4) {
        func_0208a918(c + 0x10c);
    }
    *(u32 *) (c + 0x114) |= 4;
    *(u32 *) (c + 0x38) = 0;
    *(u32 *) (c + 0x3c) = 0;
    func_01fff948(irq);
    func_02090cc4(type);
    *(u32 *) (data_020d5d80 + 0x104) = *(u32 *) (data_020d3c04 + 4);
    func_020917b0(c, 2, 1);
    *(u32 *) (*(u8 **) c + 0xc)  = 0;
    *(u8 **) (*(u8 **) c + 0x10) = c + 0x120;
    *(u32 *) (*(u8 **) c + 0x14) = 1;
    func_020917b0(c, 6, 1);
    cb  = *(CB *) (c + 0x38);
    arg = *(u32 *) (c + 0x3c);
    irq = func_01fff934();
    *(u32 *) (c + 0x114) &= ~0x4c;
    func_0208a94c(c + 0x10c);
    if (*(u32 *) (c + 0x114) & 0x10) {
        func_0208a994(c + 0x44);
    }
    func_01fff948(irq);
    if (cb != NULL) {
        cb(arg);
    }
    return **(s32 **) c == 0;
}
