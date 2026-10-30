#include "m2c.h"

extern M2C_UNK data_020cc800;

u16 func_0205949c(s32 arg0, s32 arg1) {
    return (u16) (*((u8 *) ((s8 *) &data_020cc800 + ((arg0 + arg1) & 3))) + 0x105);
}
