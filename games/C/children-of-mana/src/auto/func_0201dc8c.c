/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201ba54(M2C_UNK);
void func_02093ec4(M2C_UNK);

void func_0201dc8c(s32 arg0, s32 arg1) {
    func_02093ec4(arg0 + 0x180);
    func_0201ba54(arg0);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
}
