/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020bc13c(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020bc154(s32, void *);                 /* extern */
M2C_UNK func_020be6c4(s32);                         /* extern */
extern M2C_UNK data_020f54b0;

s32 func_020bcd2c(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_020f54b0;
    temp_r0 = func_020bc13c(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020bc154(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_020be6c4(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
