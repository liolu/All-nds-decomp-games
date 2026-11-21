#include "m2c.h"
void func_ov013_0223bc44(void *);
void func_ov013_0223baec(void *);
s32 func_ov013_0223b92c(void);
void func_020d3f48(void);
extern s32 data_ov013_0224f5d4;
void func_ov013_0223ba5c(u16 *msg) {
    u8 *base;
    if (msg[1] != 0) {
        return;
    }
    base = (u8 *) data_ov013_0224f5d4;
    base += 0x1000;
    if (base[0xb94] != 0) {
        if (msg[0] == 2) {
            base[0xb94] = 2;
        }
        return;
    }
    if (msg[0] != 0x26) {
        return;
    }
    switch (msg[4]) {
        case 5:
            if (base[0xb96] != 0) {
                func_ov013_0223bc44(msg);
            } else {
                func_ov013_0223baec(msg);
            }
            func_ov013_0223b92c();
            break;
        case 4:
            func_ov013_0223b92c();
            break;
        default:
            func_020d3f48();
            break;
    }
}
