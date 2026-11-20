#include "m2c.h"

extern M2C_UNK data_02119d50;
extern M2C_UNK data_02119dd0;
extern M2C_UNK data_02119e50;
extern M2C_UNK data_0216e3dc;
extern M2C_UNK data_0216f3dc;

void func_0206d1c4(s8 arg0) {
    M2C_FIELD(&data_0216e3dc, s8 *, 0x11) = arg0;
    switch (arg0) {                                 /* irregular */
        case 1:
            M2C_FIELD(&data_0216f3dc, M2C_UNK **, 0x8D8) = &data_02119e50;
            return;
        case 7:
            M2C_FIELD(&data_0216f3dc, M2C_UNK **, 0x8D8) = &data_02119d50;
            return;
        default:
            M2C_FIELD(&data_0216f3dc, M2C_UNK **, 0x8D8) = &data_02119dd0;
            return;
    }
}
