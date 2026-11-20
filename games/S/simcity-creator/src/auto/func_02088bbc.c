#include "m2c.h"

s32 func_02070b84(s32);                             /* extern */
extern M2C_UNK data_020c33ec;

u8 func_02088bbc(s32 *arg0) {
    return ((s8 *) &data_020c33ec)[func_02070b84(*arg0)];
}
