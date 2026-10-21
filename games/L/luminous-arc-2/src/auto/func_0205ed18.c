#include "m2c.h"

M2C_UNK func_ov003_021ffbbc();                      /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_02183d4c;

void func_0205ed18(void) {
    M2C_FIELD(&data_02183d4c, s16 *, 0xAE) = 0x63;
    func_ov003_021ffbbc();
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 2);
}
