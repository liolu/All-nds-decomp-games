#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02055df0(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020cc63f;

void func_02054d48(void *arg0) {
    func_02055df0(arg0, &data_020cc63f);
    func_02006ee8(M2C_FIELD(arg0, s32 *, 0x400C), 0, 0x26C);
    M2C_FIELD(arg0, s16 *, 0x4014) = 0;
    M2C_FIELD(arg0, s32 *, 0x4020) = 0;
    M2C_FIELD(arg0, s16 *, 0x4028) = 0;
    M2C_FIELD(arg0, s16 *, 0x402A) = 0;
}
