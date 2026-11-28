#include "m2c.h"

M2C_UNK func_0209157c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02099610(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b78(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b88(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b8c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e6fd4;
extern M2C_UNK data_020e6fe5;
extern s32 data_021030dc;
extern M2C_UNK data_021030e0;
extern M2C_UNK data_021030ec;
extern M2C_UNK func_020997a4;
extern M2C_UNK func_020c3970;

s32 func_020c3860(s32 arg0) {
    if (!(data_021030dc & 1)) {
        func_02099610(&data_021030ec, &data_020e6fd4);
        func_0209157c(&data_021030ec, &func_020997a4, &data_021030e0);
        data_021030dc |= 1;
    }
    func_02099b88(&data_021030ec, &func_020c3970);
    func_02099b78(&data_021030ec, &data_020e6fe5);
    func_02099b8c(&data_021030ec);
    return arg0;
}
