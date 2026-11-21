/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"
extern "C" void func_020ceb60();
extern "C" void func_020ce630(s32);
extern "C" void func_020d4858(s32, s32, s32);

extern "C" void func_0201a348(void) {
    s32 sp0  = 0xC0;
    s32 sp4  = 0xC0;
    s32 sp8  = 0;
    s32 spC  = 0;
    s32 sp10 = 0;
    func_020ce630(0x1FF);
    sp8 = 0;
    func_020d4858(0, 0x06800000, 0xA4000);
    func_020ceb60();
    sp0 = 0xC0;
    func_020d4858(0xC0, 0x07000000, 0x400);
    sp4 = 0xC0;
    func_020d4858(0xC0, 0x07000400, 0x400);
    spC = 0;
    func_020d4858(0, 0x05000000, 0x400);
    sp10 = 0;
    func_020d4858(0, 0x05000400, 0x400);
}
