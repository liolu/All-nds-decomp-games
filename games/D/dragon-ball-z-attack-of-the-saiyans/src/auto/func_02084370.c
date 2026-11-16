#include "m2c.h"

M2C_UNK func_02083e84(s32, void *);                 /* extern */
M2C_UNK func_02083f68(void *);                      /* extern */
M2C_UNK func_0208441c(void *);                      /* extern */
M2C_UNK func_020844d4();                            /* extern */
M2C_UNK func_020845d0();                            /* extern */
M2C_UNK func_02084604();                            /* extern */
M2C_UNK func_02084910(void *);                      /* extern */
M2C_UNK func_02085398();                            /* extern */
extern M2C_UNK data_020d8600;

void func_02084370(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_020d8600, void ***, 8);
    func_020845d0();
    func_02084910(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02083e84(temp_r0, temp_r4);
    }
    func_02083f68(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0208441c(temp_r4 + 0x9C);
    func_02084604();
    func_020844d4();
    func_02085398();
}
