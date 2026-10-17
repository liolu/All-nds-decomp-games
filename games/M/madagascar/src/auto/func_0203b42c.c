/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */
M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020c39ec;
extern M2C_UNK data_020c3a0c;

void func_0203b42c(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x1E8) = 2;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020c39ec + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4))),
                  0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0x29;
    temp_r4                       = *((M2C_UNK *) ((s8 *) &data_020c3a0c + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4)));
    if (temp_r4 == 0) {
        return;
    }
    func_020242d4(func_02024654(), temp_r4, 0);
}
