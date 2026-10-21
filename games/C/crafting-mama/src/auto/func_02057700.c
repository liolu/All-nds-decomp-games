#include "m2c.h"

extern M2C_UNK data_020b04cc;

u16 func_02057700(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020b04cc + (arg0 * 0x24)));
}
