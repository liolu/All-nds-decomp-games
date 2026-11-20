#include "m2c.h"

s32 func_020bd268(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 func_020bd35c(void *);                          /* extern */

s32 func_020bd598(void *arg0) {
    s32 sp0;

    if (func_020bd268(arg0, 4, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44) + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    if (func_020bd35c(arg0) != 0) {
        return 1;
    }
    return 0;
}
