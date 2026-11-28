#include "m2c.h"

M2C_UNK func_02088534(M2C_UNK, M2C_UNK *, s8 *);    /* extern */
M2C_UNK func_02088730(M2C_UNK, s8 *);               /* extern */
s32 func_020889dc(s8 *, M2C_UNK *, M2C_UNK);        /* extern */
extern M2C_UNK data_020e339a;
extern M2C_UNK data_020e339f;

void func_02095f00(s32 arg0, s8 *arg1, M2C_UNK arg2) {
    if ((*arg1 != 0) && (func_020889dc(arg1, &data_020e339a, 4) != 0)) {
        func_02088534(arg2, &data_020e339f, arg1);
        return;
    }
    func_02088730(arg2, arg1);
}
