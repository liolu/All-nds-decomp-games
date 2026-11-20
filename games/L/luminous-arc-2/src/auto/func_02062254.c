/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 func_0206250c(u8);                              /* extern */
M2C_UNK func_020cc4f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02156024;
extern M2C_UNK data_02156424;
extern M2C_UNK data_0216be68;

void func_02062254(s32 arg0) {
    s32 temp_r4;

    switch (arg0) {                                 /* irregular */
        case 0:
            temp_r4 = func_0206250c((u8) (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 9) * 2));
            func_020cc4f8(&data_02156424, 2, 0x40, 2, temp_r4,
                          func_0206250c((u8) ((M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 9) * 2) + 1)), 3,
                          0x140);
            M2C_FIELD(&data_02156024, s8 *, 0x40F) = 0x30;
        /* fallthrough */
        case 1:
            M2C_FIELD(&data_02156424, s16 *, 6) =
                (s16) func_0206250c((u8) (M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 9) * 2));
            M2C_FIELD(&data_02156424, s16 *, 8) =
                (s16) func_0206250c((u8) ((M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 9) * 2) + 1));
            return;
    }
}
