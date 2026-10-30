#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_02046f9c(M2C_UNK);                     /* extern */
M2C_UNK func_02047140(void *);                      /* extern */
M2C_UNK func_020471a0(void *);                      /* extern */
M2C_UNK func_0204751c(void *);                      /* extern */
M2C_UNK func_02047664(void *);                      /* extern */
M2C_UNK func_020476d8(void *);                      /* extern */

void func_02046f50(void *arg0) {
    func_02046f9c(1);
    M2C_FIELD(arg0, s32 *, 0x40) = func_020348ec(0x34974);
    func_02047140(arg0);
    func_02047664(arg0);
    func_020471a0(arg0);
    func_020476d8(arg0);
    func_0204751c(arg0);
}
