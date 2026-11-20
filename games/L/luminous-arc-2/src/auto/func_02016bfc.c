#include "m2c.h"

M2C_UNK func_020108c0(s32);

s32 func_02011110(s32, s32, u16);

M2C_UNK func_02015720();

M2C_UNK func_02017178(M2C_UNK);

extern M2C_UNK data_02150880;

s32 func_02016bfc(void) {
    s32 temp_r0;

    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s16 *, 0x528) = 0;
    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s16 *, 0x52A) = 0;
    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s16 *, 0x526) = 0;
    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s16 *, 0x548) = 0;
    func_02017178(0xA);
    if (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 0xC), s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_02011110(M2C_FIELD(&data_02150880, s32 *, 4),
                                    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 0x508),
                                    M2C_FIELD(&data_02150880, u16 *, 0));
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_020108c0(M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 0x508));
        M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s8 *, 0x50D) = 1;
        return 0;
    }
    func_020108c0(M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 0x508));
    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s8 *, 0x50D) = 1;
    func_02015720();
    return 0;
}
