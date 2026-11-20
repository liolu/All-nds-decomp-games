/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200baa4(void *);                          /* extern */
s32 func_0200baac(void *);                          /* extern */
s32 func_0200bab4(void *);                          /* extern */
M2C_UNK func_0200c7f4(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0202024c(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0215bf74;
extern M2C_UNK data_0215c108;

void func_0200c758(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_0202024c(&data_0215c108, func_0200bab4(arg0 + 0x1C), 0, 0x10);
    } else {
        func_0202024c(&data_0215bf74, func_0200bab4(arg0 + 0x1C), 0, 0x10);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r4 = func_0200baac(arg0 + 0x1C);
    func_0200c7f4(M2C_FIELD(arg0, s32 *, 8), temp_r5, M2C_FIELD(arg0, s32 *, 4), temp_r5, temp_r4, func_0200baa4(arg0 + 0x1C));
}
