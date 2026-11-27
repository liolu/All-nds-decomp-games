/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02012178(void *, M2C_UNK);             /* extern */
s32 func_020ae36c(s32);                             /* extern */
extern M2C_UNK data_02100638;
extern M2C_UNK data_02101950;

void func_02086ff0(void *arg0) {
    func_0200e8c8(&data_02101950, &data_02100638);
    if (M2C_FIELD(arg0, s32 *, 0x2F8) == func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300))) {
        func_02012178(arg0, 1);
        return;
    }
    func_02012178(arg0, 0);
}
