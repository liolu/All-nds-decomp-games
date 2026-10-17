/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206d448(M2C_UNK *);                       /* extern */
extern M2C_UNK func_0202a770;

void func_0202a728(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x560)  = 0;
    M2C_FIELD(arg0, s16 *, 0x610) = 0;
    M2C_FIELD(arg0, s32 *, 8)     = 8;
    M2C_FIELD(arg0, s32 *, 0xC)   = func_0206d448(&func_0202a770);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 2) {
        M2C_FIELD(arg0, s32 *, 8) = 0xB;
    }
}
