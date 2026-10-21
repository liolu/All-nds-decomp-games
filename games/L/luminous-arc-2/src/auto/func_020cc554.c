#include "m2c.h"

extern M2C_UNK data_0215145c;
extern M2C_UNK data_02151468;
extern M2C_UNK data_02151480;
extern M2C_UNK data_0215148c;
extern M2C_UNK data_02151490;
extern M2C_UNK data_02151494;
extern M2C_UNK data_02151498;
extern M2C_UNK data_0215149c;
extern M2C_UNK data_021514a0;
extern M2C_UNK data_021514a4;

void func_020cc554(s32 arg0) {
    if (arg0 & 1) {
        M2C_FIELD(&data_02151468, s16 *, 0) = 0;
        M2C_FIELD(&data_02151468, s16 *, 2) = 0;
        M2C_FIELD(&data_021514a0, s16 *, 0) = 0;
        M2C_FIELD(&data_021514a0, s16 *, 2) = 0;
        M2C_FIELD(&data_0215149c, s16 *, 0) = 0;
        M2C_FIELD(&data_0215149c, s16 *, 2) = 0;
        M2C_FIELD(&data_02151498, s16 *, 0) = 0;
        M2C_FIELD(&data_02151498, s16 *, 2) = 0;
        M2C_FIELD(&data_0215145c, s16 *, 0) = 0;
        M2C_FIELD(&data_0215145c, s16 *, 2) = 0;
    }
    if (!(arg0 & 2)) {
        return;
    }
    M2C_FIELD(&data_02151494, s16 *, 0) = 0;
    M2C_FIELD(&data_02151494, s16 *, 2) = 0;
    M2C_FIELD(&data_02151490, s16 *, 0) = 0;
    M2C_FIELD(&data_02151490, s16 *, 2) = 0;
    M2C_FIELD(&data_0215148c, s16 *, 0) = 0;
    M2C_FIELD(&data_0215148c, s16 *, 2) = 0;
    M2C_FIELD(&data_02151480, s16 *, 0) = 0;
    M2C_FIELD(&data_02151480, s16 *, 2) = 0;
    M2C_FIELD(&data_021514a4, s16 *, 0) = 0;
    M2C_FIELD(&data_021514a4, s16 *, 2) = 0;
}
