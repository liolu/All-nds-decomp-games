#include "m2c.h"

M2C_UNK func_020b9514(void **);                     /* extern */
M2C_UNK func_ov001_0211bab4();                      /* extern */
extern void **data_020fc250;
extern u8 data_02103038;

void func_020c1930(void) {
    if (data_02103038 == 0) {
        return;
    }
    func_020b9514(data_020fc250);
    func_ov001_0211bab4();
    if (data_020fc250 != NULL) {
        M2C_FIELD(*data_020fc250, M2C_UNK(**)(), 4)(data_020fc250);
    }
    data_02103038 = 0;
}
