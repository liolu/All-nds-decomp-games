#include "m2c.h"

u16 func_0200f694();                                /* extern */

u16 func_02044fcc(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x45A) = func_0200f694();
    return M2C_FIELD(arg0, u16 *, 0x45A);
}
