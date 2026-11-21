/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_020d4790(u16 value, void *dst, u32 size);
void func_020d4a50(void *src, void *dst, u32 size);

void func_ov013_02222be0(u8 *arg0, u8 *arg1) {
    u16 zero = 0;

    func_020d4790(zero, arg1 + 0xC, 0x20);
    *(u16 *) (arg1 + 0xA) = (u16) * (u32 *) arg0;
    func_020d4a50(arg0 + 4, arg1 + 0xC, *(u16 *) (arg1 + 0xA));
}
