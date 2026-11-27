/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020351a8(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02036078(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020fd580;
extern M2C_UNK data_020fd58c;

void func_02033f28(void *arg0) {
    func_020351a8(arg0, &data_020fd580, 4, 0, 5);
    func_020351a8(arg0, &data_020fd58c, 1, 0, 5);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1300;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1100;
    func_02036078(0x10, 1);
    func_02036078(0x10, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
