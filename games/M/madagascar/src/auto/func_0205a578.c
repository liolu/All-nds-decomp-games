/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020522b4(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020522cc(s32, void *);                 /* extern */
extern M2C_UNK data_020da078;

s32 func_0205a578(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x1C) + (s32) &data_020da078;
    temp_r0 = func_020522b4(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020522cc(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    return M2C_FIELD(temp_r0, s32 *, 8);
}
