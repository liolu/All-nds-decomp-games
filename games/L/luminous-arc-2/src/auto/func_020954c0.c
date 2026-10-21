#include "m2c.h"

s32 func_02011cd4(M2C_UNK *, void *, void *, M2C_UNK); /* extern */
void *func_02093afc();                              /* extern */
s32 func_020957d0(M2C_UNK *);                       /* extern */
M2C_UNK func_02095820(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02170cd0;
extern M2C_UNK func_020957bc;

void func_020954c0(void) {
    void *temp_r0;

    temp_r0 = func_02093afc();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x2260) != 9) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226B) == 1) {
        return;
    }
    if (func_020957d0(&data_02170cd0) == 0) {
        return;
    }
    if (func_02011cd4(&func_020957bc, temp_r0 + 0x2144, temp_r0 + 0xF00, 0) == 2) {
        return;
    }
    func_02095820(&data_02170cd0);
}
