#include "m2c.h"

M2C_UNK func_020339a0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0209075c;

void func_02062cbc(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    func_020339a0(&data_0209075c);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}
