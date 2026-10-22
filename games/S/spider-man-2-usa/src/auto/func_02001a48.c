/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9420();                            /* extern */
M2C_UNK func_0201fa80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020767d8;

void func_02001a48(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3AC) != 0) {
        func_01ff9420();
        M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
    }
    func_0201fa80(&data_020767d8);
}
