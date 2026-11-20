#include "engine.h"
#include "m2c.h"

s32 func_0201a4b0(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0201ad50(void);

s32 func_0201a6d8(s32 arg0) {
    if (func_0201ad50() == 0) {
        return 0;
    }
    return func_0201a4b0(0x10, (s32) (u16) arg0, 0);
}
