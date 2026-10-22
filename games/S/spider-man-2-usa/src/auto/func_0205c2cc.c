/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bae4(s32, void *);                 /* extern */
M2C_UNK func_0205d5a4(s32);                         /* extern */
extern M2C_UNK data_0216331c;

void func_0205c2cc(void *arg0) {
    void *temp_r1;

    func_0205d5a4(M2C_FIELD(arg0, s32 *, 8));
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_0205bae4((M2C_FIELD(arg0, s32 *, 0x10) * 0x1C) + (s32) &data_0216331c + 0xC, arg0);
}
