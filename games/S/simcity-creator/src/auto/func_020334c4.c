#include "m2c.h"

M2C_UNK func_020333a8(void *);                      /* extern */
M2C_UNK func_02033528();                            /* extern */
M2C_UNK func_020335ac(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020da0f0;
extern M2C_UNK data_020da780;

void func_020334c4(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02033528(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_020335ac(&data_020da780, arg0);
    if (M2C_FIELD(&data_020da0f0, s32 *, 4) != 0) {
        func_020335ac(M2C_FIELD(&data_020da0f0, s32 *, 4) + 0x4E0, arg0);
    }
    func_020333a8(arg0);
}
