#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
M2C_UNK func_020843cc(void *);                      /* extern */
M2C_UNK func_020849c0(void *, void *);              /* extern */
extern M2C_UNK data_020d8624;

void func_02084830(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r7 = M2C_FIELD(&data_020d8624, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_020849c0(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_020843cc(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
