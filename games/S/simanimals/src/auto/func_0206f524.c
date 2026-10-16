#include "m2c.h"

M2C_UNK func_0206f478(M2C_UNK *, void *);
M2C_UNK func_0206f4e8();
M2C_UNK func_0206f67c(void *);
extern s32 data_0209203c;
extern M2C_UNK data_0209252c;

void func_0206f524(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0206f4e8(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_0206f478(&data_0209252c, arg0);
    if (data_0209203c != 0) {
        func_0206f478(data_0209203c + 0x4E0, arg0);
    }
    func_0206f67c(arg0);
}
