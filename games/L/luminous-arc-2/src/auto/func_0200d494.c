#include "engine.h"
#include "m2c.h"

s32 func_0200d220(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0200da94(void);

s32 func_0200d494(s32 arg0) {
    if (func_0200da94() == 0) {
        return 0;
    }
    return func_0200d220(0x10, (s32) (u16) arg0, 0);
}
