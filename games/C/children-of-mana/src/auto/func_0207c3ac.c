/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
u32 func_02063030(M2C_UNK *, M2C_UNK *, u16, s32, s32, s32); /* extern */
extern M2C_UNK data_020ff8d8;
extern u8 data_021250c8;
extern u8 data_021250d0;
extern u8 data_021250d4;
extern u16 data_021250d8;
extern s32 data_021250e4;
extern M2C_UNK data_02125260;
extern M2C_UNK func_0207c4f0;

void func_0207c3ac(void) {
    u32 temp_r0;

    if (data_021250c8 == 0) {
        return;
    }
    if (data_021250d4 == 1) {
        return;
    }
    temp_r0 =
        func_02063030(&func_0207c4f0, &data_02125260, data_021250d8, 0x400215, (s32) (u16) data_021250e4, (s32) data_021250d0);
    switch (temp_r0) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            break;
        default:
            break;
        case 2:
            data_021250d4 = 1;
            data_021250c8 = 0;
            break;
    }
    func_0200e8c8(&data_020ff8d8);
}
