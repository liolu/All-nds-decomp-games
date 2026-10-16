#include "m2c.h"

M2C_UNK func_020ae794(s32, void *);                 /* extern */
M2C_UNK func_02081330();                            /* extern */
extern M2C_UNK data_020e5698;

void func_02085694(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02081330();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020ae794((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_020e5698 + 0xC, arg0);
}
