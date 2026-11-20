#include "m2c.h"

s32 func_0205e85c(M2C_UNK, s32, M2C_UNK, s16, s32); /* extern */
M2C_UNK func_0205e9d4(s32, s16, s16, s16);          /* extern */
extern M2C_UNK data_02085048;

void func_02037acc(void *arg0) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s16 *, 0x2E) * 4)), s32 *, 0x48) =
        func_0205e85c(1, M2C_FIELD(arg0, s32 *, 0x40), -1,
                      *((u16 *) ((s8 *) &data_02085048 + (M2C_FIELD(arg0, s16 *, 0x2E) * 2))), M2C_FIELD(arg0, s32 *, 0x30));
    func_0205e9d4(M2C_FIELD((arg0 + (M2C_FIELD(arg0, s16 *, 0x2E) * 4)), s32 *, 0x48), M2C_FIELD(arg0, s16 *, 0x34),
                  M2C_FIELD(arg0, s16 *, 0x36), M2C_FIELD(arg0, s16 *, 0x38));
}
