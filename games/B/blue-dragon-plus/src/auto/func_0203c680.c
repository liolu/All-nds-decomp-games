#include "m2c.h"

s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
M2C_UNK func_0203c7e8(void *);                      /* extern */
M2C_UNK func_0203c8dc(void *);                      /* extern */
extern void *data_0215fa68;

void func_0203c680(void) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r6;

    temp_r5 = func_02038e10();
loop_1:
    temp_r6 = data_0215fa68;
    if (temp_r6 != NULL) {
        temp_r0       = temp_r6;
        data_0215fa68 = M2C_FIELD(temp_r6, void **, 4);
        func_0203c8dc(temp_r0);
        func_0203c7e8(temp_r6);
        goto loop_1;
    }
    func_02038e24(temp_r5);
}
