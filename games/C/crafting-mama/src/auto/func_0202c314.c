#include "m2c.h"

M2C_UNK func_0202c378();                            /* extern */
M2C_UNK func_0205e5e4(M2C_UNK);                     /* extern */
void *func_02060e9c();                              /* extern */
extern s32 data_020a7340;

void func_0202c314(void) {
    data_020a7340 = 0;
    func_0205e5e4(0x4000);
    if (M2C_FIELD(func_02060e9c(), s32 *, 4) == 6) {
        return;
    }
    func_0202c378();
}
