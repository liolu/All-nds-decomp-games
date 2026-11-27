/* compiler: 2.0/sp1p5 -flag no-opt_propagation */
#include "m2c.h"

void func_020b6fd0(s32, s32, s32, s32);
void func_020b7570(s32, s32, s32);

extern s32 data_020e0318;

void func_020b3718(s32 arg0, s32 arg1, s32 arg2) {
    u32 vram = 0x6600000;
    if ((data_020e0318 != -1) && ((u32) arg2 > 0x30)) {
        func_020b6fd0(data_020e0318, arg0, vram + arg1, arg2);
        return;
    }
    func_020b7570(arg0, vram + arg1, arg2);
}
