#include "m2c.h"

s32 func_02031164();                                /* extern */

u16 func_02031184(s32 arg0) {
    return M2C_FIELD((func_02031164() + (arg0 * 2)), u16 *, 4);
}
