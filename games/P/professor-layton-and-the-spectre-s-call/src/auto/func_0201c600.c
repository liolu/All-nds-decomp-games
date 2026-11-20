#include "m2c.h"

s32 func_0201c104();                                /* extern */
extern M2C_UNK data_020369dc;

s32 func_0201c600(void) {
    if (func_0201c104() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&data_020369dc, void **, 4), s32 *, 4);
}
