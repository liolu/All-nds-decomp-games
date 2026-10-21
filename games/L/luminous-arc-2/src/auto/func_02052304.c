#include "m2c.h"

M2C_UNK func_ov003_021ffbbc();                      /* extern */
extern M2C_UNK data_02158048;

void func_02052304(void) {
    func_ov003_021ffbbc();
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 2);
}
