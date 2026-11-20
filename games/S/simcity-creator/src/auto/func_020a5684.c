#include "m2c.h"

M2C_UNK func_02002e98(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202312c(s32, M2C_UNK *, void *, M2C_UNK, s32); /* extern */
M2C_UNK func_020a5884();                            /* extern */
M2C_UNK func_020a5dd0(void *);                      /* extern */
extern M2C_UNK data_020cf5f0;

void func_020a5684(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20084) = arg1;
    func_020a5884(arg0);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x20080), &data_020cf5f0, arg0 + 0x27204, 0x20, 0x200);
    func_02002e98(M2C_FIELD(arg0, s32 *, 0x27204), 0, 0x200);
    func_020a5dd0(arg0);
}
