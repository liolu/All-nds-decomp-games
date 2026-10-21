#include "m2c.h"

M2C_UNK func_0202b75c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0202b798(void *);                      /* extern */
M2C_UNK func_0202b7a8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202c9ac();                            /* extern */
M2C_UNK func_0202def8(M2C_UNK);                     /* extern */
extern M2C_UNK data_0218005c;
extern M2C_UNK data_02180108;

void func_02043324(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 0xC0;
    func_0202b75c((M2C_UNK *) ((s8 *) &data_0218005c + temp_r4), 2, 4);
    func_0202b7a8(0, 0);
    func_0202b798((M2C_UNK *) ((s8 *) &data_02180108 + temp_r4));
    func_0202c9ac();
    func_0202def8(-1);
}
