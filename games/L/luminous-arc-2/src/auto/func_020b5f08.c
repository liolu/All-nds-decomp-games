#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */
M2C_UNK func_020b3e58(void *);                      /* extern */

void func_020b5f08(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        func_020ab30c(M2C_FIELD(temp_r0, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8) = NULL;
        func_020ab30c(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC) = NULL;
        func_020ab30c(M2C_FIELD(arg0, void **, 8));
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r0_2 != NULL) {
        func_020ab30c(M2C_FIELD(temp_r0_2, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 8) = NULL;
        func_020ab30c(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xC) = NULL;
        func_020ab30c(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x10) = NULL;
        func_020ab30c(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x14) = NULL;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) != 0) {
            func_020aa020();
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38) = 0;
        }
        func_020ab30c(M2C_FIELD(arg0, void **, 0xC));
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    func_020b3e58(arg0);
    func_020ab30c(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_020ab30c(M2C_FIELD(arg0, void **, 0x1C));
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
}
