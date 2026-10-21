#include "m2c.h"

M2C_UNK func_02043324(u8);                          /* extern */
M2C_UNK func_02048300();                            /* extern */
M2C_UNK func_0204a358(u8);                          /* extern */
extern s8 data_02158048;
extern void *data_02175a48;
extern M2C_UNK data_0217aa4c;

void func_02039eb0(void) {
    func_02048300();
    func_02043324(M2C_FIELD(&data_0217aa4c, u8 *, 0xB3F));
    func_0204a358(M2C_FIELD(&data_0217aa4c, u8 *, 0xB3E));
    M2C_FIELD(data_02175a48, s8 *, 0x25) = 1;
    M2C_FIELD(data_02175a48, s8 *, 0x26) = 0x38;
    data_02158048                        = 9;
}
