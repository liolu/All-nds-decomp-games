#include "m2c.h"

extern M2C_UNK data_020f39cc;

void func_020bc0f8(u32 param_1) {
    void (*cb)(u32, u32, void *, u32) = *(void (**)(u32, u32, void *, u32))((u8 *) &data_020f39cc + 0x1c);
    u32 count                         = *(u32 *) ((u8 *) &data_020f39cc + 0x18);
    u32 arg                           = *(u32 *) ((u8 *) &data_020f39cc + 0x20);

    if (count != 0) {
        *(u32 *) ((u8 *) &data_020f39cc + 0x18) = 0;
    }
    if (cb != NULL) {
        *(u32 *) ((u8 *) &data_020f39cc + 0x1c) = 0;
        cb(param_1, arg, &data_020f39cc, 0);
    }
}
