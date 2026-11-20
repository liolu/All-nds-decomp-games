/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02006b0c(void *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02006db0(void *, void *, u8);          /* extern */
M2C_UNK func_02006e04(void *, void *, u8);          /* extern */
M2C_UNK func_02008860(void *);                      /* extern */
void *func_02008a3c(void *, M2C_UNK);               /* extern */
extern M2C_UNK data_0206f738;

void func_020071c8(void *arg0) {
    void *temp_r0;

    temp_r0 = func_02008a3c(arg0, 0x14);
    if (M2C_FIELD(temp_r0, s32 *, 4) == 0) {
        func_02008860(arg0);
        return;
    }
    func_02006b0c(arg0, temp_r0, 0, 0);
    func_02006e04(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x362));
    func_02006db0(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x363));
    func_01ff93d4(arg0, &data_0206f738);
    M2C_FIELD(arg0, s32 *, 0x380) = 0xF;
}
