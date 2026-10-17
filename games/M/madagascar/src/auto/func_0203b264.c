/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020c39ec;

void func_0203b264(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 7;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020c39ec + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4))),
                  0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
}
