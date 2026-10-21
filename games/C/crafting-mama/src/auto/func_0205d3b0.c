#include "m2c.h"

M2C_UNK func_0204f0fc(void *);                      /* extern */
M2C_UNK func_02051498(void *);                      /* extern */
M2C_UNK func_0205d38c(void *, s32);                 /* extern */

void func_0205d3b0(s32 arg0, void *arg1) {
    s32 temp_r1_2;
    s32 temp_r1_3;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, 0x30);
    if (temp_r1 == NULL) {
        temp_r1_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), s32 *, 0x14);
        if (arg0 == 1) {
            if (temp_r1_2 < 0) {
                func_0205d38c(arg1, 0 - temp_r1_2);
            }
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), s32 *, 8)    = 0;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), s32 *, 0x18) = 0;
        } else {
            if (temp_r1_2 > 0) {
                func_0205d38c(arg1, 0 - temp_r1_2);
            }
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), s32 *, 0x18) = arg0;
        }
        func_0204f0fc(M2C_FIELD(arg1, void **, 0x2C));
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), s32 *, 0xC) = 1;
        return;
    }
    temp_r1_3 = M2C_FIELD(temp_r1, s32 *, 0x14);
    if (arg0 == 1) {
        if (temp_r1_3 < 0) {
            func_0205d38c(arg1, 0 - temp_r1_3);
        }
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), s32 *, 8)    = 0;
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), s32 *, 0x18) = 0;
    } else {
        if (temp_r1_3 > 0) {
            func_0205d38c(arg1, 0 - temp_r1_3);
        }
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), s32 *, 0x18) = arg0;
    }
    func_02051498(M2C_FIELD(arg1, void **, 0x30));
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x30), s32 *, 0xC) = 1;
}
