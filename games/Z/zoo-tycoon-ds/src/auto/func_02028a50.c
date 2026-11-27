/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200557c(void *, void *, M2C_UNK *);   /* extern */
M2C_UNK func_0200560c(void *);                      /* extern */
M2C_UNK func_02005644();                            /* extern */
extern M2C_UNK data_020a4164;
extern M2C_UNK data_020a4180;
extern M2C_UNK data_020a41a4;
extern M2C_UNK data_020a41c8;

void func_02028a50(void *arg0) {
    func_02005644(arg0);
    func_0200557c(arg0, arg0 + 8, &data_020a4164);
    func_0200557c(arg0, arg0 + 0x20, &data_020a4180);
    func_0200557c(arg0, arg0 + 0x38, &data_020a41a4);
    func_0200557c(arg0, arg0 + 0x4C, &data_020a41c8);
    func_0200560c(arg0);
    M2C_FIELD(arg0, s16 *, 0x10) = -0x1000;
    M2C_FIELD(arg0, s16 *, 0x28) = -0x1000;
    M2C_FIELD(arg0, s16 *, 0x40) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x54) = 0x1000;
}
