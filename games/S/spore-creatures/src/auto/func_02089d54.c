#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02088680(void *);                      /* extern */

void *func_02089d54(void *arg0) {
    func_020934a8(M2C_FIELD(arg0, s32 *, 4));
    func_02088680(arg0);
    return arg0;
}
