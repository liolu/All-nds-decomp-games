#include "m2c.h"

M2C_UNK func_020398d0(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_021544dc;
extern M2C_UNK data_021545dc;
extern M2C_UNK data_021549dc;
extern M2C_UNK data_02154a1c;
extern M2C_UNK data_02154b1c;
extern M2C_UNK data_02154f1c;
extern M2C_UNK data_02154f5c;
extern M2C_UNK data_0215505c;
extern M2C_UNK data_0215545c;

void func_02020bfc(void) {
    func_020398d0(0xC0, &data_021545dc, 0x400);
    func_020398d0(0xC0, &data_02154b1c, 0x400);
    func_020398d0(0xC0, &data_0215505c, 0x400);
    func_020398d0(0xFFFF, &data_021544dc, 0x100);
    func_020398d0(0xFFFF, &data_02154a1c, 0x100);
    func_020398d0(0xFFFF, &data_02154f5c, 0x100);
    func_020398d0(0xFFFF, &data_021549dc, 0x40);
    func_020398d0(0xFFFF, &data_02154f1c, 0x40);
    func_020398d0(0xFFFF, &data_0215545c, 0x40);
}
