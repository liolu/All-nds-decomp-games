#include "m2c.h"

extern M2C_UNK data_0211764c;
extern M2C_UNK data_02117694;
extern M2C_UNK data_021176dc;

M2C_UNK *func_02040e50(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            return &data_0211764c;
        case 1:
            return &data_02117694;
        case 2:
            return &data_021176dc;
        default:
            return NULL;
    }
}
