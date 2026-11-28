/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b764(void *);                          /* extern */
s32 func_0200b76c(void *);                          /* extern */
s32 func_0200b774(void *);                          /* extern */
M2C_UNK func_0200c4ac(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0201fecc(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0215eaf8;
extern M2C_UNK data_0215ec8c;

void func_0200c410(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_0201fecc(&data_0215ec8c, func_0200b774(arg0 + 0x1C), 0, 0x10);
    } else {
        func_0201fecc(&data_0215eaf8, func_0200b774(arg0 + 0x1C), 0, 0x10);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r4 = func_0200b76c(arg0 + 0x1C);
    func_0200c4ac(M2C_FIELD(arg0, s32 *, 8), temp_r5, M2C_FIELD(arg0, s32 *, 4), temp_r5, temp_r4, func_0200b764(arg0 + 0x1C));
}
