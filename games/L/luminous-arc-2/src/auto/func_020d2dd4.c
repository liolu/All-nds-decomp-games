#include "m2c.h"

s32 func_020129b4(M2C_UNK *, s32, M2C_UNK *);       /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
extern M2C_UNK data_02185160;
extern M2C_UNK data_021863e0;
extern M2C_UNK data_02186460;
extern M2C_UNK func_020d2e34;

s32 func_020d2dd4(void) {
    func_020d2084(3);
    if (func_020129b4(&func_020d2e34,
                      M2C_FIELD(&data_02185160, s32(**)(M2C_UNK *, M2C_UNK *), 0x10)(&data_021863e0, &data_02186460),
                      &data_021863e0) == 2) {
        return 1;
    }
    func_020d2104();
    func_020d2084(9);
    return 0;
}
