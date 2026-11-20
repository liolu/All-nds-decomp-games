#include "m2c.h"

extern M2C_UNK data_020ca63c;

void *func_02072fcc(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca63c + (arg0 * 4));
}
