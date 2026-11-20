#include "m2c.h"

M2C_UNK func_02001520();                            /* extern */
M2C_UNK func_02001524();                            /* extern */
M2C_UNK func_02005b5c();                            /* extern */
M2C_UNK func_0200dcec();                            /* extern */
extern s32 data_020ee404;

void func_02024dd0(void) {
    func_02005b5c();
    func_0200dcec();
    func_02001520();
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & 0xFFFFFDF1) | 0x20E;
    func_02001524();
    data_020ee404 = -1;
    func_02001524();
    *(u16 *) 0x04000204 &= ~0x8000;
}
