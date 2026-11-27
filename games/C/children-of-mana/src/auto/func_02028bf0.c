#include "m2c.h"

extern M2C_UNK *data_0211543c;
extern M2C_UNK data_02115440;
extern M2C_UNK data_0211545c;
extern M2C_UNK data_02115478;

void func_02028bf0(s32 arg0, M2C_UNK *arg1) {
    M2C_UNK *var_r1;

    var_r1 = arg1;
    switch (arg0) {                                 /* irregular */
        case 2:
            var_r1 = &data_02115478;
            break;
        case 0:
            var_r1 = &data_0211545c;
            break;
        case 1:
            var_r1 = &data_02115440;
            break;
    }
    data_0211543c = var_r1;
}
