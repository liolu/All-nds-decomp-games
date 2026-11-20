#include "m2c.h"

M2C_UNK func_02031dc4(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_02031df8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02032184(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_02156464;
extern M2C_UNK data_021564b0;
extern M2C_UNK data_02156520;
extern M2C_UNK data_02156594;
extern M2C_UNK data_021565c4;

void func_02027e38(void) {
    func_02032184(&data_02156520, &data_021564b0, &data_02156594);
    func_02031dc4(&data_02156594, &data_02156594, M2C_FIELD(&data_02156464, s32 *, 0xEC),
                  M2C_FIELD(&data_02156464, s32 *, 0xF0), M2C_FIELD(&data_02156464, s32 *, 0xF4));
    func_02031df8(&data_02156594, &data_021565c4);
}
