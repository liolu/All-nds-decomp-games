#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
M2C_UNK func_020b933c();                            /* extern */
s32 func_ov001_02110040();                          /* extern */
M2C_UNK func_ov001_02111b94(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov001_0211ba94();                      /* extern */
extern u8 data_02103038;

void func_020c18e4(void) {
    if (data_02103038 != 0) {
        return;
    }
    func_ov001_0211ba94();
    func_ov001_02111b94(func_ov001_02110040(), 0);
    if (func_020742ec(0x1C) != 0) {
        func_020b933c();
    }
    data_02103038 = 1;
}
