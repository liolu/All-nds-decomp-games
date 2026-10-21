#include "m2c.h"

M2C_UNK func_02005aac(void *, M2C_UNK);             /* extern */
extern void *data_021497e0;

u16 func_020087a0(void) {
    func_02005aac(data_021497e0 + 8, 2);
    return M2C_FIELD(data_021497e0, u16 *, 8);
}
