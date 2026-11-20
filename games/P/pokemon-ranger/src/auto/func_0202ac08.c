/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f197c;
extern s32 data_020f1984;

s32 func_0202ac08(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x28) & 0x20) {
        return data_020f1984;
    }
    return data_020f197c;
}
