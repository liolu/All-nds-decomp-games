#include "m2c.h"

M2C_UNK func_02023280(void **, s32);                /* extern */

void func_02090adc(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x2C));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x28));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x20));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x1C));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x18));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x14));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x24));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0x10));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 0xC));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 8));
    func_02023280(M2C_FIELD(arg0, void ***, 0x50), M2C_FIELD(arg0, s32 *, 4));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x50);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x54);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
}
