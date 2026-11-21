#include "m2c.h"

M2C_UNK func_020d164c(M2C_UNK, M2C_UNK *, u8, u8, s32, s32); /* extern */
extern M2C_UNK data_ov013_022467e8;
extern void *data_ov013_0224f5c4;

void func_ov013_0223a2d0(M2C_UNK arg0) {
    void *temp_ip;

    temp_ip = data_ov013_0224f5c4 + 0x4C0;
    func_020d164c(arg0, &data_ov013_022467e8, M2C_FIELD(data_ov013_0224f5c4, u8 *, 0x4C0), M2C_FIELD(temp_ip, u8 *, 1),
                  (s32) M2C_FIELD(temp_ip, u8 *, 2), (s32) M2C_FIELD(temp_ip, u8 *, 3));
}
