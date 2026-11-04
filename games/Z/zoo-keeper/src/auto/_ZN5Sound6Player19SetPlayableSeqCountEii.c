#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0206a268;

void _ZN5Sound6Player19SetPlayableSeqCountEii(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0206a268 + (arg0 * 0x1C))) = (s32) (u16) arg1;
}
