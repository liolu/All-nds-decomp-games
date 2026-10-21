/* compiler: 2.0/sp1p5 -flag no-opt_propagation */
#include "m2c.h"

void func_02006fe0(s32, s32, s32, s32);
void func_020074d4(s32, s32, s32);

extern s32 data_020ee404;

void func_02003538(s32 arg0, s32 arg1, s32 arg2) {
    u32 vram = 0x06400000;
    if ((data_020ee404 != -1) && ((u32) arg2 > 0x30)) {
        func_02006fe0(data_020ee404, arg0, vram + arg1, arg2);
        return;
    }
    func_020074d4(arg0, vram + arg1, arg2);
}
