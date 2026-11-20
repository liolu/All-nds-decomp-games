#include "m2c.h"

M2C_UNK func_0203b58c(M2C_UNK);                     /* extern */
M2C_UNK func_0203ce20(s16, s16);                    /* extern */
M2C_UNK func_02041f10();                            /* extern */
extern s8 data_02158048;
extern void *data_02175a48;
extern M2C_UNK data_02180f4c;

void func_0203a520(void) {
    func_02041f10();
    M2C_FIELD(data_02175a48, s8 *, 0x31) = 0;
    M2C_FIELD(data_02175a48, s8 *, 0x26) = 0x15;
    func_0203ce20(M2C_FIELD(&data_02180f4c, s16 *, 0x72), M2C_FIELD(&data_02180f4c, s16 *, 0x74));
    M2C_FIELD(data_02175a48, s8 *, 0x245) = 2;
    M2C_FIELD(data_02175a48, s8 *, 0x246) = 0;
    func_0203b58c(1);
    data_02158048 = 9;
}
