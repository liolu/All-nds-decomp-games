#include "m2c.h"

M2C_UNK func_0206d754(M2C_UNK *);                   /* extern */
M2C_UNK func_0206e230(M2C_UNK *);                   /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern M2C_UNK data_0216e228;
extern M2C_UNK data_0216e28c;
extern M2C_UNK data_0216e29c;

void func_0206c244(void) {
    if (M2C_FIELD(&data_0216e228, s32 *, 0x90) != 1) {
        return;
    }
    func_0206e230(&data_0216e29c);
    func_020cd7d0(M2C_FIELD(&data_0216e228, s32 *, 0x8C));
    func_0206d754(&data_0216e28c);
    func_020cd7d0(M2C_FIELD(&data_0216e228, s32 *, 0x88));
    M2C_FIELD(&data_0216e228, s32 *, 0x90) = 0;
}
