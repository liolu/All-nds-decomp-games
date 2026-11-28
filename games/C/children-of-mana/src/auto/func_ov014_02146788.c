/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02001d2c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_ov014_02146788(s32 arg0) {
    func_02001d2c(arg0 + 4, M2C_FIELD(arg0, s32 *, 0xC224), 0x200);
    M2C_FIELD(arg0, s32 *, 0xC224) = (s32) (M2C_FIELD(arg0, s32 *, 0xC224) + 0x200);
}
