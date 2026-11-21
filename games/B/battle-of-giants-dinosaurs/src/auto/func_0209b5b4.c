#include "m2c.h"

M2C_UNK func_0209a840(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209b500();                            /* extern */
M2C_UNK func_0209b5f8(void *);                      /* extern */
extern M2C_UNK data_020bf898;
extern M2C_UNK data_020bf8d4;

void *func_0209b5b4(void *arg0) {
    func_0209b500();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf898;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020bf8d4;
    func_0209a840(arg0 + 0x18, 0, 8);
    func_0209b5f8(arg0);
    return arg0;
}
