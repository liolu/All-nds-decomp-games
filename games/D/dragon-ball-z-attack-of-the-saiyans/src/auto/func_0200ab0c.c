#include "m2c.h"

extern M2C_UNK data_020ad800;
extern M2C_UNK data_020adc00;
extern M2C_UNK data_020ae000;

void func_0200ab0c(s32 arg0) {
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        M2C_FIELD(&data_020ad800, M2C_UNK **, 0xC) = &data_020adc00;
    }
    if ((arg0 != 1) && (arg0 != 2)) {
        return;
    }
    M2C_FIELD(&data_020ad800, M2C_UNK **, 0x10) = &data_020ae000;
}
