/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020abe80(M2C_UNK);
void func_020abd4c(M2C_UNK);
void func_020aad14(M2C_UNK, M2C_UNK);

void func_020abedc(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x4) = 0;
    func_020aad14(arg0, 0);
    func_020abd4c(arg0);
    func_020abe80(arg0);
}
