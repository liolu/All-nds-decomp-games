#include "m2c.h"

M2C_UNK func_020875b0(M2C_UNK *, void *);
M2C_UNK func_0208752c();
M2C_UNK func_0208710c(void *);
extern s32 data_020e5b64;
extern M2C_UNK data_020e61f4;

void func_02087490(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0208752c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_020875b0(&data_020e61f4, arg0);
    if (data_020e5b64 != 0) {
        func_020875b0(data_020e5b64 + 0x4E0, arg0);
    }
    func_0208710c(arg0);
}
