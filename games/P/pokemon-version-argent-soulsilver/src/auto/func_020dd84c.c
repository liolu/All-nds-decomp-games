#include "m2c.h"
extern u8 data_021e3840[];
extern u32 data_021e3e60;
extern u32 data_021e3e80;
extern void func_020dc7a8(void);
extern u32 func_020dd8c0(void);
extern void func_020ddaa4(void);
void func_020dd84c(void) {
    u8 *c;
    u32 z;
    c = data_021e3840;
    if (*(u32 *) (c + 0x114) != 0) {
        return;
    }
    *(u32 *) (c + 0x114) = 1;
    z                    = 0;
    *(u32 *) (c + 0x24)  = z;
    *(u32 *) (c + 0x20)  = z;
    *(u32 *) (c + 0x1c)  = *(u32 *) (c + 0x20);
    *(u32 *) (c + 0x28)  = 0xFFFFFFFF;
    *(u32 *) (c + 0x38)  = z;
    *(u32 *) (c + 0x3c)  = z;
    data_021e3e60        = z;
    func_020dc7a8();
    data_021e3e80 = func_020dd8c0();
    func_020ddaa4();
}