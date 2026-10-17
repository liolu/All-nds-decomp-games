/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002760(M2C_UNK);
void func_02038b54(M2C_UNK);
M2C_UNK *func_02038c6c(void);

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd1e4;
extern s32 data_020d00a4;

s32 func_0200863c(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd1e4;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s8 *, 0x38)    = 1;
    data_020d00a4                  = arg0;
    func_02002760(arg0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    func_02038b54((s32) func_02038c6c());
    return arg0;
}
