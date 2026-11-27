/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_02014764(void *);                      /* extern */
M2C_UNK func_0207464c(void *);                      /* extern */
M2C_UNK func_020768cc(void *, s32, s32);            /* extern */
extern M2C_UNK data_020fb100;

void *func_02015128(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb100;
    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        func_020768cc(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 0x8C), M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_0207464c(arg0 + 0x88);
    func_02014764(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
