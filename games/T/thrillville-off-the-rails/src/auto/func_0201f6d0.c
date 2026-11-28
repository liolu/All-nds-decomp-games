/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern void *data_020ec2c8;

void func_0201f6d0(s32 arg0) {
    s32 temp_r0;

    temp_r0                                = func_02024624();
    M2C_FIELD(data_020ec2c8, s32 *, 0x5E0) = arg0;
    func_02024638(temp_r0);
}
