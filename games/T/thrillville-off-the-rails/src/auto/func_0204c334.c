#include "m2c.h"

M2C_UNK func_0204c394(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204c3b0(void *);                      /* extern */
M2C_UNK func_0204c3cc(void *);                      /* extern */

void *func_0204c334(void *arg0) {
    func_0204c394(arg0, 0);
    func_0204c3b0(arg0 + 4);
    func_0204c3cc(arg0 + 8);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (arg0 + 4);
    return arg0;
}
