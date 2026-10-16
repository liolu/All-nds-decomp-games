/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205e2d4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0205e4f4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0205e888(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_020d8a74;
extern M2C_UNK data_020d8ac0;
extern M2C_UNK data_020d8b30;
extern M2C_UNK data_020d8ba4;
extern M2C_UNK data_020d8bd4;

void func_02053bb4(void) {
    func_0205e2d4(&data_020d8b30, &data_020d8ac0, &data_020d8ba4);
    func_0205e888(&data_020d8ba4, &data_020d8ba4, M2C_FIELD(&data_020d8a74, s32 *, 0xEC),
                  M2C_FIELD(&data_020d8a74, s32 *, 0xF0), M2C_FIELD(&data_020d8a74, s32 *, 0xF4));
    func_0205e4f4(&data_020d8ba4, &data_020d8bd4);
}
