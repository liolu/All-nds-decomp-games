#include "m2c.h"

M2C_UNK func_0200d550(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206b7f0(M2C_UNK);                     /* extern */
s32 func_0206c388();                                /* extern */
extern M2C_UNK data_02157424;

void func_020247fc(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 1) {
        return;
    }
    if (func_0206c388() > 0) {
        func_0206b7f0(0);
        M2C_FIELD(&data_02157424, s8 *, 0xC1C) = 1;
    }
    M2C_FIELD(&data_02157424, s32 *, 0xC18) = 0;
    func_0200d550(0xC, 0, 0);
}
