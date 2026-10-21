#include "m2c.h"

u16 func_0205e32c(void *arg0) {
    if ((arg0 == NULL) && (M2C_FIELD(arg0, void **, 0x28) != NULL)) {
        return 0U;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x18);
}
