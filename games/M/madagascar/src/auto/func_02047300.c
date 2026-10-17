/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02024c3c(s32 *);
s32 func_02024c4c(void *);

extern s32 data_020cf83c;

void func_02047300(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r0;

    M2C_FIELD(arg0, s32 *, 0x1C8)                           = (s32) (data_020cf83c + arg1);
    temp_r0                                                 = (s32 *) func_02024c4c((void *) arg2);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), s32 *, 0x24) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    func_02024c3c(temp_r0);
}
