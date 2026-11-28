#include "m2c.h"

M2C_UNK func_0209157c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02099610(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b78(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b88(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b8c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e6f88;
extern M2C_UNK data_020e6fa0;
extern s32 data_02103048;
extern M2C_UNK data_0210304c;
extern M2C_UNK data_02103058;
extern M2C_UNK func_020997a4;
extern M2C_UNK func_020c36f8;

s32 func_020c3670(s32 arg0) {
    if (!(data_02103048 & 1)) {
        func_02099610(&data_02103058, &data_020e6f88);
        func_0209157c(&data_02103058, &func_020997a4, &data_0210304c);
        data_02103048 |= 1;
    }
    func_02099b88(&data_02103058, &func_020c36f8);
    func_02099b78(&data_02103058, &data_020e6fa0);
    func_02099b8c(&data_02103058);
    return arg0;
}
