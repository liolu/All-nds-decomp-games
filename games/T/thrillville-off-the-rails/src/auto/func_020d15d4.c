#include "m2c.h"

M2C_UNK func_0209b9c0(M2C_UNK *);                   /* extern */
M2C_UNK func_0209b9cc(M2C_UNK *);                   /* extern */
M2C_UNK func_0209b9dc(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020d1618(s32);                         /* extern */
extern M2C_UNK data_020e8975;

s32 func_020d15d4(s32 arg0) {
    M2C_UNK sp0;

    func_0209b9c0(&sp0);
    func_0209b9dc(&sp0, &data_020e8975);
    func_020d1618(arg0);
    func_0209b9cc(&sp0);
    return arg0;
}
