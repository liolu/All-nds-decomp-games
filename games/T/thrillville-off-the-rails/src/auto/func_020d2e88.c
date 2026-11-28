#include "m2c.h"

void **func_020924b4();                             /* extern */
M2C_UNK func_02097ae8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a2638(s32);                         /* extern */
extern void **data_020efc54;
extern s32 data_020fc258;
extern s32 data_020fc264;

void func_020d2e88(void) {
    void **temp_r0;

    func_020a2638(data_020fc258);
    M2C_FIELD(*data_020efc54, M2C_UNK(**)(void **, M2C_UNK), 0x18)(data_020efc54, 0);
    temp_r0 = func_020924b4();
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x1C)(temp_r0, -0x21);
    func_02097ae8(data_020fc264, 0x10);
}
