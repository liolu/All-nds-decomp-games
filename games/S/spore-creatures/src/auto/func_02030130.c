#include "m2c.h"

M2C_UNK func_02016050(void *);                      /* extern */
M2C_UNK func_0209c644();                            /* extern */
extern M2C_UNK data_020dea34;

void *func_02030130(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dea34;
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x4000) {
        func_0209c644();
    }
    func_02016050(arg0);
    return arg0;
}
