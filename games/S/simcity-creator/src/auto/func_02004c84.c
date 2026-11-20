#include "m2c.h"

M2C_UNK func_02004788(s32, void *);                 /* extern */
M2C_UNK func_0200486c(void *);                      /* extern */
M2C_UNK func_02004e20(void *);                      /* extern */
M2C_UNK func_02004ed8();                            /* extern */
M2C_UNK func_02004fe0();                            /* extern */
M2C_UNK func_02005014();                            /* extern */
M2C_UNK func_02005460(void *);                      /* extern */
M2C_UNK func_02006964();                            /* extern */
extern M2C_UNK data_020d0c40;

void func_02004c84(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_020d0c40, void ***, 8);
    func_02004fe0();
    func_02005460(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02004788(temp_r0, temp_r4);
    }
    func_0200486c(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02004e20(temp_r4 + 0x9C);
    func_02005014();
    func_02004ed8();
    func_02006964();
}
