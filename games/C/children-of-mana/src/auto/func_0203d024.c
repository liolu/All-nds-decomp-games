/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02057c24(s32, s32, s32, s32, s32);     /* extern */
extern M2C_UNK data_021172c0;
extern M2C_UNK data_021172d0;
extern M2C_UNK data_021172d8;
extern M2C_UNK data_021172e0;
extern M2C_UNK data_021172f0;

void func_0203d024(void) {
    if (M2C_FIELD(&data_021172c0, u8 *, 0) != 0) {
        func_02057c24(0x04000050, M2C_FIELD(&data_021172e0, s32 *, 0), M2C_FIELD(&data_021172f0, s32 *, 0),
                      M2C_FIELD(&data_021172d8, s32 *, 0), M2C_FIELD(&data_021172d0, s32 *, 0));
        M2C_FIELD(&data_021172c0, u8 *, 0) = 0U;
    }
    if (M2C_FIELD(&data_021172c0, u8 *, 1) == 0) {
        return;
    }
    func_02057c24(0x04001050, M2C_FIELD(&data_021172e0, s32 *, 4), M2C_FIELD(&data_021172f0, s32 *, 4),
                  M2C_FIELD(&data_021172d8, s32 *, 4), M2C_FIELD(&data_021172d0, s32 *, 4));
    M2C_FIELD(&data_021172c0, u8 *, 1) = 0U;
}
