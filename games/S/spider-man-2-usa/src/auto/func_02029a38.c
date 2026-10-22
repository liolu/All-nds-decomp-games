/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fa80(M2C_UNK *);                   /* extern */
M2C_UNK func_020259dc();                            /* extern */
extern M2C_UNK data_020767d8;

void func_02029a38(void *arg0) {
    func_020259dc();
    M2C_FIELD(arg0, s32 *, 0x388) = 0x13;
    func_0201fa80(&data_020767d8);
}
