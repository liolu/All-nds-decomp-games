/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203d818(M2C_UNK);

extern s32 data_0215f094;
extern M2C_UNK data_0215f4e8;

s32 func_0203ba60(s32 arg0) {
    if (data_0215f094 == 0) {
        return 1;
    }
    if (func_0203d818(arg0) != 0) {
        return *((M2C_UNK *) ((s8 *) &data_0215f4e8 + (arg0 * 0x140)));
    }
    return 0xA;
}
