#include "m2c.h"

M2C_UNK func_ov003_021ffc24();                      /* extern */
extern M2C_UNK data_02158048;

void func_0205ed48(void) {
    func_ov003_021ffc24();
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
