#include "m2c.h"

M2C_UNK func_02054900(u16);                         /* extern */
extern M2C_UNK data_02161240;

void func_020548d0(void) {
    func_02054900(M2C_FIELD(&data_02161240, u16 *, 0x12));
}
