/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fec68(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK _fadd(M2C_UNK, s32);                /* extern */
s32 _ffix();                                /* extern */
s32 _fflt(s32);                             /* extern */
M2C_UNK _fsub(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_027e003c;

void func_0200e714(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 > 0) {
        _fadd(0x3F000000, _fflt(temp_r0 << 0xC));
    } else {
        _fsub(_fflt(temp_r0 << 0xC), 0x3F000000);
    }
    M2C_FIELD(&data_027e003c, s32 *, 0) = _ffix();
    temp_r0_2                           = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0_2 > 0) {
        _fadd(0x3F000000, _fflt(temp_r0_2 << 0xC));
    } else {
        _fsub(_fflt(temp_r0_2 << 0xC), 0x3F000000);
    }
    M2C_FIELD(&data_027e003c, s32 *, 4) = _ffix();
    temp_r0_3                           = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0_3 > 0) {
        _fadd(0x3F000000, _fflt(temp_r0_3 << 0xC));
    } else {
        _fsub(_fflt(temp_r0_3 << 0xC), 0x3F000000);
    }
    M2C_FIELD(&data_027e003c, s32 *, 8) = _ffix();
    func_020fec68(&data_027e003c, arg1);
}
