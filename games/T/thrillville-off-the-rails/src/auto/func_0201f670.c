/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern void *data_020ec2c8;

void func_0201f670(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(s32, s32);
    s32 temp_r0;

    temp_r0                                 = func_02024624();
    M2C_FIELD(data_020ec2c8, s16 *, 0x5F0E) = (s16) arg0;
    func_02024638(temp_r0);
    temp_r2 = M2C_FIELD(data_020ec2c8, M2C_UNK(**)(s32, s32), 0x5E0);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(arg0, arg1);
}
