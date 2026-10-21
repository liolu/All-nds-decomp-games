#include "m2c.h"

M2C_UNK func_020050e0(void *);                      /* extern */
M2C_UNK func_02005a30(void *, void *);              /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
extern M2C_UNK data_02147904;

void func_020058a0(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_02006be0();
    temp_r7 = M2C_FIELD(&data_02147904, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_02005a30(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_020050e0(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_02006bf4(temp_r4);
}
