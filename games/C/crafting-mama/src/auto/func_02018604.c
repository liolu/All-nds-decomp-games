#include "m2c.h"

s32 func_02019dbc();                                /* extern */
extern M2C_UNK data_02081cf8;

s32 func_02018604(void) {
    return *((M2C_UNK *) ((s8 *) &data_02081cf8 + (func_02019dbc() * 4)));
}
