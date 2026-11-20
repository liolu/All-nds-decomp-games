#include "m2c.h"

M2C_UNK func_0201f488(s32, void *);                 /* extern */
M2C_UNK func_0202f6b4();                            /* extern */
extern M2C_UNK data_0215c564;

void func_0202e840(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0202f6b4();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_0201f488((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_0215c564 + 0xC, arg0);
}
