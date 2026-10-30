#include "m2c.h"

M2C_UNK func_02076ee8(void *);                      /* extern */
M2C_UNK func_02077030(void *);                      /* extern */
M2C_UNK func_02077070(void *);                      /* extern */
M2C_UNK func_02077154(void *);                      /* extern */
M2C_UNK func_02077308();                            /* extern */
M2C_UNK func_02077354(void *);                      /* extern */

s32 func_02076508(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return 0;
    }
    func_02077308(arg0);
    func_02077154(arg0);
    func_02077070(arg0);
    func_02076ee8(arg0);
    func_02077030(arg0);
    func_02077354(arg0);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
    return 1;
}
