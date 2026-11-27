#include "m2c.h"

s32 func_020dffbc(M2C_UNK *, void *, void *, M2C_UNK); /* extern */
void *func_020ae4ec();                              /* extern */
s32 func_020b01c0(M2C_UNK *);                       /* extern */
M2C_UNK func_020b0210(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021d601c;
extern M2C_UNK func_020b01ac;

void func_020afeb0(void) {
    void *temp_r0;

    temp_r0 = func_020ae4ec();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x2260) != 9) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226B) == 1) {
        return;
    }
    if (func_020b01c0(&data_021d601c) == 0) {
        return;
    }
    if (func_020dffbc(&func_020b01ac, temp_r0 + 0x2144, temp_r0 + 0xF00, 0) == 2) {
        return;
    }
    func_020b0210(&data_021d601c);
}
