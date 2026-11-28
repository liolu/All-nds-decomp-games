#include "m2c.h"

M2C_UNK func_0204c3d0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204c3ec(void *);                      /* extern */
M2C_UNK func_0204c408(void *);                      /* extern */

void *func_0204c364(void *arg0) {
    func_0204c3d0(arg0, 0);
    func_0204c3ec(arg0 + 4);
    func_0204c408(arg0 + 8);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (arg0 + 4);
    return arg0;
}
