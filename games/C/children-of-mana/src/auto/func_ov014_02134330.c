/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_ov014_0213b3f0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_ov014_0213b3c4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_ov014_02134330(s32 arg0) {
    func_ov014_0213b3f0(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xAC, arg0 + 0xB0);
    func_ov014_0213b3c4(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xA6, arg0 + 0xA8, arg0 + 0xAA);
}
