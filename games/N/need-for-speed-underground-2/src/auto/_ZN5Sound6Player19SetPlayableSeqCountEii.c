#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02179e5c;

void _ZN5Sound6Player19SetPlayableSeqCountEii(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02179e5c + (arg0 * 0x1C))) = (s32) (u16) arg1;
}
