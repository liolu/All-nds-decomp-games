/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051a24(s32 *, M2C_UNK *, s32);       /* extern */
s16 func_020566e4();                                /* extern */
extern M2C_UNK data_021610e8;

void func_020519e4(void) {
    s32 sp0;

    sp0 = 0;
    func_02051a24(&sp0, &data_021610e8, 0x05000001);
    M2C_FIELD(&data_021610e8, s16 *, 2) = func_020566e4();
}
