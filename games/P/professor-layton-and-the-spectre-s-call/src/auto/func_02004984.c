#include "m2c.h"

M2C_UNK func_02018bcc(M2C_UNK);                     /* extern */
M2C_UNK func_02018d68(s32);                         /* extern */
s32 func_02018dd4();                                /* extern */

void func_02004984(void) {
    s32 temp_r4;

    temp_r4 = func_02018dd4();
    func_02018bcc(1);
    func_02018d68(temp_r4);
}
