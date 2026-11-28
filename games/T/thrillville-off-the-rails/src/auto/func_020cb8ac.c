#include "m2c.h"

M2C_UNK func_0209157c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02099610(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b78(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b88(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b8c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e789c;
extern M2C_UNK data_020e78ad;
extern s32 data_02103a10;
extern M2C_UNK data_02103a14;
extern M2C_UNK data_02103a20;
extern M2C_UNK func_020997a4;
extern M2C_UNK func_020cb934;

s32 func_020cb8ac(s32 arg0) {
    if (!(data_02103a10 & 1)) {
        func_02099610(&data_02103a20, &data_020e789c);
        func_0209157c(&data_02103a20, &func_020997a4, &data_02103a14);
        data_02103a10 |= 1;
    }
    func_02099b88(&data_02103a20, &func_020cb934);
    func_02099b78(&data_02103a20, &data_020e78ad);
    func_02099b8c(&data_02103a20);
    return arg0;
}
