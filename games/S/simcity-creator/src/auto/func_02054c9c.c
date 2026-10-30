#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02034904(M2C_UNK);                         /* extern */
M2C_UNK func_02055df0(void *, M2C_UNK *);           /* extern */
s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206be00(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02073360(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_020cc63e;

void func_02054c9c(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x4008) = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 0x4004) = arg1;
    M2C_FIELD(arg0, s32 *, 0x401C) = arg3;
    func_02055df0(arg0, &data_020cc63e);
    M2C_FIELD(arg0, s32 *, 0x4018) = func_0206be00(arg2, 0x32);
    M2C_FIELD(arg0, s32 *, 0x400C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4010) = 0;
    M2C_FIELD(arg0, s16 *, 0x4014) = 0;
    temp_r0                        = func_02034904(0x26C);
    M2C_FIELD(arg0, s32 *, 0x400C) = temp_r0;
    func_02006ee8(temp_r0, 0, 0x26C);
    M2C_FIELD(arg0, s32 *, 0x4020) = 0;
    M2C_FIELD(arg0, s32 *, 0x4024) = func_02073360(M2C_FIELD(arg0, s32 *, 0x4004), 1);
    M2C_FIELD(arg0, s16 *, 0x4028) = 0;
    M2C_FIELD(arg0, s16 *, 0x402A) = 0;
}
