#include "m2c.h"

M2C_UNK func_020d37e8(void *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020d3854(void *);                      /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
extern void *data_021d600c;
extern M2C_UNK func_020aea08;

void func_020ae994(void) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_020d3854(data_021d600c + 0x22CC);
    if (M2C_FIELD(data_021d600c, s32 *, 0x2260) == 9) {
        func_020d37e8(data_021d600c + 0x22CC, 0x022F5341, 0, &func_020aea08, 0);
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
