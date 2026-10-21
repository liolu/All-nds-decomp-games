/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd920();                      /* extern */
M2C_UNK func_020c09a4();                      /* extern */
M2C_UNK func_020c6e34();                   /* extern */
M2C_UNK func_020c6ea4();                   /* extern */
extern s32 data_020f5ab0;
extern M2C_UNK data_020f62f8;

void func_020c0638(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x128)) {
        return;
    }
    func_020c6ea4(&data_020f62f8);
    if (data_020f5ab0 != 0) {
        func_020c6ea4(data_020f5ab0 + 0x498);
    }
    func_020c09a4(arg2);
    M2C_FIELD(arg2, s32 *, 0x128) = 0;
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s8 *, 0x120)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x11C) > 0) {
        func_020bd920(arg2);
        M2C_FIELD(arg2, s32 *, 0x11C) = 0;
    }
    func_020c6e34(&data_020f62f8);
    if (data_020f5ab0 == 0) {
        return;
    }
    func_020c6e34(data_020f5ab0 + 0x498);
}
