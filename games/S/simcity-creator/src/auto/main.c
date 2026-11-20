#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
void **func_020348ec(s32);                          /* extern */
M2C_UNK func_020349e0();                            /* extern */
void **func_02052bc4();                             /* extern */
M2C_UNK func_02052c98();                            /* extern */
M2C_UNK func_02052df4(void **);                     /* extern */
M2C_UNK func_02052e8c(void **);                     /* extern */
void *func_02053114(void **);                       /* extern */
extern void **data_027e0068;

void main(void) {
    u8 temp_r6;
    void **var_r0;

    do {
        var_r0 = func_020348ec(0xBB88);
        if (var_r0 != NULL) {
            var_r0 = func_02052bc4();
        }
        data_027e0068 = var_r0;
        func_02052c98();
        func_02052e8c(data_027e0068);
        temp_r6 = M2C_FIELD(func_02053114(data_027e0068), u8 *, 7);
        func_02052df4(data_027e0068);
        if (data_027e0068 != NULL) {
            M2C_FIELD(*data_027e0068, M2C_UNK(**)(), 4)(data_027e0068);
        }
        func_020349e0();
    } while (temp_r6 != 1);
    func_02006964();
}
