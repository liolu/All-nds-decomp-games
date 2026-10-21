#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202b5a4();                            /* extern */
M2C_UNK func_0203a5cc();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02152824;
extern u8 data_02158048;
extern M2C_UNK data_02158050;
extern M2C_UNK data_02175a4c;

void func_02038bdc(void) {
    func_0202b5a4();
    func_020074fc(0, &data_02152824, 0x200);
    M2C_FIELD(&data_02175a4c, s8 *, 0x207) = 1;
    func_0206c4b4(0, M2C_FIELD(&data_02158050, u8 *, 0xC), 0x7F, 0x7F, 0, 0x100);
    func_0203a5cc();
    data_02158048 += 1;
}
