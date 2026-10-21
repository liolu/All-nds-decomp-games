#include "m2c.h"

M2C_UNK func_020aa020(s32);                         /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */

void func_020b65d4(void *arg0) {
    func_020ab30c(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    func_020ab30c(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    func_020ab30c(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    func_020ab30c(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_020aa020(M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_020ab30c(arg0);
}
