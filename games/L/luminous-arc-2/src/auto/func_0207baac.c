#include "m2c.h"

extern M2C_UNK data_0217024c;

u8 func_0207baac(void) {
    if (M2C_FIELD(&data_0217024c, void **, 0xC) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_0217024c, void **, 0xC), u8 *, 9);
    }
    return 0U;
}
