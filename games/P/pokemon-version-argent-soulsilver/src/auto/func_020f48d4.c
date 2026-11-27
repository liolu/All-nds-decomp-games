#include "m2c.h"

M2C_UNK func_020f4ee4(M2C_UNK *, M2C_UNK **, M2C_UNK *); /* extern */
extern u8 data_02111754;
extern M2C_UNK data_0211179c;
extern M2C_UNK data_021117a8;
extern M2C_UNK func_020f4914;

void func_020f48d4(void) {
    M2C_UNK *sp0;

    if (data_02111754 == 0) {
        return;
    }
    sp0 = &data_0211179c;
    func_020f4ee4(&data_021117a8, &sp0, &func_020f4914);
}
