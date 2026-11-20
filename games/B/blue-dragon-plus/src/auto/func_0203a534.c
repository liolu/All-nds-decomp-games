#include "m2c.h"

M2C_UNK func_020374ec(M2C_UNK *);                   /* extern */
M2C_UNK func_0203a594();                            /* extern */
M2C_UNK func_0203aca4();                            /* extern */
extern s32 data_0215de80;
extern M2C_UNK data_0215de84;

void func_0203a534(void) {
    if (data_0215de80 != 0) {
        return;
    }
    data_0215de80 = 1;
    func_020374ec(&data_0215de84);
    func_0203a594();
    func_0203aca4();
}
