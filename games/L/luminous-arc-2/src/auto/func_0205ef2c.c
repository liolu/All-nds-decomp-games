#include "m2c.h"

M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cd7d0(void *);                      /* extern */
extern s32 data_0216bc68;
extern void *data_0216be2c;
extern void *data_0216be30;

void func_0205ef2c(void) {
    func_020cd7d0(M2C_FIELD(data_0216be30, void **, 4));
    func_020cd7d0(data_0216be30);
    func_020cd7d0(data_0216be2c);
    func_020cd4d8();
    if (data_0216bc68 == 0) {
        func_020cd508(2, 3, 0);
    } else {
        func_020cd508(1, 1, 6);
    }
    data_0216bc68 = 0;
}
