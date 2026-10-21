#include "engine.h"
#include "m2c.h"

M2C_UNK func_020231f0(void);

extern s32 data_02097640;

s32 func_02028d48(void) {
    if (data_02097640 == 0) {
        return 0;
    }
    return (s32) (u16) func_020231f0();
}
