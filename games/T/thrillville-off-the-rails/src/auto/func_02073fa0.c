#include "m2c.h"

M2C_UNK func_02021194(M2C_UNK, void *, M2C_UNK);    /* extern */
void *func_02074300(M2C_UNK);                       /* extern */
extern void *data_020f42b8;

void func_02073fa0(void) {
    void *temp_r0;

    temp_r0       = func_02074300(0x10000);
    data_020f42b8 = temp_r0;
    func_02021194(0, temp_r0, 0x10000);
    M2C_FIELD(data_020f42b8, s32 *, 0) = 0x40000001;
    M2C_FIELD(data_020f42b8, s32 *, 8) = 0x20005FFF;
}
