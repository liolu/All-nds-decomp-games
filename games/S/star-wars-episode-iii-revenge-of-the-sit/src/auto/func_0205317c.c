/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020449c4(void);
void func_020449d8(M2C_UNK);

extern void *data_020b3cf4;

void func_0205317c(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_020449c4();
    M2C_FIELD(data_020b3cf4, s32 *, 0x14E4) = arg0;
    func_020449d8(temp_r0);
}
