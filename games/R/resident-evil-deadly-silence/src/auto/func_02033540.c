/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_01ff9190();            /* extern */
s32 func_0201df30();                        /* extern */
M2C_UNK func_0209fbf0();                     /* extern */
M2C_UNK func_020fdd1c();         /* extern */
M2C_UNK func_020fdd50(); /* extern */
M2C_UNK _fadd();                    /* extern */
s32 _fdiv();                        /* extern */
s32 _ffix();                                /* extern */
s32 _fflt();                             /* extern */
M2C_UNK _fmul();                    /* extern */
M2C_UNK _fsub();                    /* extern */
extern M2C_UNK data_0211c840;
extern M2C_UNK data_02127bf4;
extern M2C_UNK data_02143cc0;
extern M2C_UNK data_02144bc0;
extern M2C_UNK data_02144c04;
extern void *data_027e000c;
extern M2C_UNK data_027e003c;
extern M2C_UNK data_027e009c;
extern M2C_UNK data_027e0148;

void func_02033540(void) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r2;
    void *temp_r0;

    M2C_FIELD(&data_02143cc0, u8 *, 0xF4F) = (u8) (M2C_FIELD(&data_02143cc0, u8 *, 0xF4F) | 0x80);
    temp_r4 = func_0201df30(M2C_FIELD(&data_02143cc0, s32 *, 0xF74), M2C_FIELD(&data_02143cc0, s32 *, 0xF7C));
    if ((M2C_FIELD(data_027e000c, u8 *, 0xA) & 0x40) && !(M2C_FIELD(&data_02143cc0, u8 *, 0xF4D) & 1)) {
        M2C_FIELD(&data_02144bc0, s16 *, 0x88) = (s16) (temp_r4 - 0x180);
    }
    func_0209fbf0(0xF);
    temp_r1 = ((s32) (0x10000 - (0xFFFF & ((temp_r4 ^ 0x800) * 0x10))) >> 4) * 2;
    func_020fdd1c(&data_027e0148, *((s16 *) ((s8 *) &data_02127bf4 + (temp_r1 * 2))),
                  *((s16 *) ((s8 *) &data_02127bf4 + ((temp_r1 + 1) * 2))));
    temp_r0 = func_01ff9190(&data_02144c04, 9);
    _fmul(0x40B00000, _fflt(M2C_FIELD(temp_r0, s32 *, 0x4C) * 0x12));
    M2C_FIELD(&data_027e003c, s32 *, 0) = _ffix();
    _fmul(0x40B00000, _fflt(M2C_FIELD(temp_r0, s32 *, 0x50) * 0x12));
    M2C_FIELD(&data_027e003c, s32 *, 4) = _ffix();
    _fmul(0x40B00000, _fflt(M2C_FIELD(temp_r0, s32 *, 0x54) * 0x12));
    M2C_FIELD(&data_027e003c, s32 *, 8) = _ffix();
    func_020fdd50(&data_027e003c, &data_027e0148);
    temp_r5 = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x14));
    _fsub(temp_r5, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 0)), 0x45800000));
    M2C_FIELD(&data_027e009c, s32 *, 0x14) = _ffix();
    temp_r5_2                              = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x18));
    _fadd(temp_r5_2, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 4)), 0x45800000));
    M2C_FIELD(&data_027e009c, s32 *, 0x18) = _ffix();
    temp_r5_3                              = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x1C));
    _fadd(temp_r5_3, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 8)), 0x45800000));
    M2C_FIELD(&data_027e009c, s32 *, 0x1C) = _ffix();
    if (M2C_FIELD(data_027e000c, u8 *, 0xA) & 0x40) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020fdd50((M2C_UNK *) ((var_r2 * 0xC) + (s32) &data_0211c840), temp_r0 + 0x28, &data_027e003c);
    func_020fdd50(&data_027e003c, &data_027e0148, &data_027e003c);
    temp_r4_2 = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x14));
    _fadd(temp_r4_2, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 0)), 0x45800000));
    M2C_FIELD(&data_02143cc0, s32 *, 0xF74) = _ffix();
    temp_r4_3                               = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x18));
    _fsub(temp_r4_3, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 4)), 0x45800000));
    M2C_FIELD(&data_02143cc0, s32 *, 0xF78) = _ffix();
    temp_r4_4                               = _fflt(M2C_FIELD(&data_027e009c, s32 *, 0x1C));
    _fsub(temp_r4_4, _fdiv(_fflt(M2C_FIELD(&data_027e003c, s32 *, 8)), 0x45800000));
    M2C_FIELD(&data_02143cc0, s32 *, 0xF7C) = _ffix();
}
