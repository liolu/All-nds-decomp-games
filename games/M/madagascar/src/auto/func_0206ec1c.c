/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063cf8(void);
void func_02063d0c(M2C_UNK);

extern void *data_020ded54;

void func_0206ec1c(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_02063cf8();
    M2C_FIELD(data_020ded54, s32 *, 0x14E4) = arg0;
    func_02063d0c(temp_r0);
}
