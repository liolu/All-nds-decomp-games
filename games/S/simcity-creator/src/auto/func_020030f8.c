/* compiler: 2.0/sp1p5 -flag no-opt_propagation */
#include "m2c.h"

void func_02006a10(s32, s32, s32, s32);
void func_02006e4c(s32, s32, s32);

extern s32 data_020c7a84;

void func_020030f8(s32 arg0, s32 arg1, s32 arg2) {
    u32 vram = 0x6600000;
    if ((data_020c7a84 != -1) && ((u32) arg2 > 0x30)) {
        func_02006a10(data_020c7a84, arg0, vram + arg1, arg2);
        return;
    }
    func_02006e4c(arg0, vram + arg1, arg2);
}
