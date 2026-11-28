/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208f2c0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020ec2d8;

void func_020208dc(s32 arg0) {
    s32 temp_r1;

    temp_r1                             = arg0 - 2;
    M2C_FIELD(&data_020ec2d8, s32 *, 0) = temp_r1;
    M2C_FIELD(&data_020ec2d8, s32 *, 4) = func_0208f2c0(0x1E, temp_r1);
    M2C_FIELD(&data_020ec2d8, s32 *, 8) = 0x1E;
}
