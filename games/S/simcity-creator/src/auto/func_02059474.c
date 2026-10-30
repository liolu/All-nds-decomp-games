#include "m2c.h"

extern M2C_UNK data_020cc800;

u16 func_02059474(s32 arg0, s32 arg1, s32 arg2) {
    return (u16) (*((u8 *) ((s8 *) &data_020cc800 + ((arg1 + arg2) & 3))) + 0x105);
}
