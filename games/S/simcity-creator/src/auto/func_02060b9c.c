#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02061c38(s32, M2C_UNK *);                  /* extern */
s32 func_02061cf4(s32, void *, M2C_UNK *);          /* extern */
s32 func_020622e4(s32, s32);                        /* extern */
extern M2C_UNK data_020ccc2c;
extern M2C_UNK data_020ccc34;

void func_02060b9c(void *arg0, M2C_UNK arg1) {
    u8 sp0[256];

    func_02014050(sp0, &data_020ccc2c, arg1);
    M2C_FIELD(arg0, s32 *, 0xF8C) = func_02061c38(M2C_FIELD(arg0, s32 *, 0xF0C), sp0);
    M2C_FIELD(arg0, s32 *, 0xF88) = func_020622e4(M2C_FIELD(arg0, s32 *, 0xF0C), M2C_FIELD(arg0, s32 *, 0xF8C));
    func_02014050(sp0, &data_020ccc34, arg1);
    M2C_FIELD(arg0, s32 *, 0xF94) = func_02061cf4(M2C_FIELD(arg0, s32 *, 0xF0C), arg0 + 0xF90, sp0);
    M2C_FIELD(arg0, s32 *, 0xF9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xF98) = 0;
}
