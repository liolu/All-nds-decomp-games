/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022140(void *);                      /* extern */
M2C_UNK func_02022be4(void *, void *);              /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
extern M2C_UNK data_020ec380;

void func_02022d34(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_02024624();
    temp_r7 = M2C_FIELD(&data_020ec380, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_02022be4(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_02022140(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_02024638(temp_r4);
}
