#include "m2c.h"

M2C_UNK func_020cb7cc(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_020cb83c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020cbbc8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da508;
extern M2C_UNK data_021da578;
extern M2C_UNK data_021da5ec;
extern M2C_UNK data_021da61c;

void func_020bf388(void) {
    func_020cbbc8(&data_021da578, &data_021da508, &data_021da5ec);
    func_020cb7cc(&data_021da5ec, &data_021da5ec, M2C_FIELD(&data_021da4bc, s32 *, 0xEC),
                  M2C_FIELD(&data_021da4bc, s32 *, 0xF0), M2C_FIELD(&data_021da4bc, s32 *, 0xF4));
    func_020cb83c(&data_021da5ec, &data_021da61c);
}
