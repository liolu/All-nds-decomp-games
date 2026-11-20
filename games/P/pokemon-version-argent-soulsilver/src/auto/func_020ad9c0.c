#include "m2c.h"

typedef struct {
    u8 pad[0x2260];
    s32 mode;
    u8 pad2264[8];
    u32 w226c;
    u8 pad2270[0x10];
    u16 h2280;
} Gs;

extern Gs *data_021d600c;
s32 func_020d3a38(void);
void func_020d3a4c(s32);
void func_020ae4fc(void *, s32);
s32 func_020de248(void *, s32);
void func_020ae8fc(s32);
u16 func_020def24(void);
s32 func_020de458(void);
s32 func_020deba8(void (*)(void));
s32 func_020df2c4(void (*)(void));
void func_020aeaa8(void);
void func_020aeb20(void);

s32 func_020ad9c0(void *a, s32 b) {
    s32 irq;
    irq = func_020d3a38();
    if (data_021d600c == NULL) {
        func_020d3a4c(irq);
        return 1;
    }
    switch (data_021d600c->mode) {
        case 1:
            func_020ae4fc(a, b);
            break;
        case 2:
            func_020d3a4c(irq);
            return 2;
        case 3:
            func_020d3a4c(irq);
            return 0;
        default:
            func_020d3a4c(irq);
            return 1;
    }
    switch (func_020de248(data_021d600c, (u16) data_021d600c->w226c)) {
        case 3:
            func_020ae8fc(0xB);
            func_020d3a4c(irq);
            return 7;
        case 4:
            func_020d3a4c(irq);
            return 5;
        case 1:
        case 2:
        case 5:
        case 6:
        default:
            func_020ae8fc(0xB);
            func_020d3a4c(irq);
            return 7;
        case 0:
            break;
    }
    if (func_020def24() == 0) {
        if (func_020de458() != 0) {
            func_020ae8fc(0xB);
            func_020d3a4c(irq);
            return 7;
        }
        func_020d3a4c(irq);
        return 5;
    }
    if (func_020deba8(func_020aeaa8) != 0) {
        func_020ae8fc(0xB);
        func_020d3a4c(irq);
        return 7;
    }
    switch (func_020df2c4(func_020aeb20)) {
        case 2:
            func_020ae8fc(2);
            data_021d600c->h2280 = 1;
            break;
        case 8:
            func_020ae8fc(0xC);
            func_020d3a4c(irq);
            return 1;
        case 3:
        default:
            func_020ae8fc(0xB);
            func_020d3a4c(irq);
            return 7;
    }
    func_020d3a4c(irq);
    return 3;
}
