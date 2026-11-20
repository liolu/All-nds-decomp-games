/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd6c4();                      /* extern */
M2C_UNK func_020c0930();                      /* extern */
M2C_UNK func_020c6e34();                   /* extern */
M2C_UNK func_020c6ea4();                   /* extern */
extern s32 data_020f5ab0;
extern M2C_UNK data_020f62f8;

void func_020c09a4(void *arg0) {
    func_020c6ea4(&data_020f62f8);
    if (data_020f5ab0 != 0) {
        func_020c6ea4(data_020f5ab0 + 0x498);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_020bd6c4(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    }
    func_020c0930(arg0);
    func_020c6e34(&data_020f62f8);
    if (data_020f5ab0 == 0) {
        return;
    }
    func_020c6e34(data_020f5ab0 + 0x498);
}
