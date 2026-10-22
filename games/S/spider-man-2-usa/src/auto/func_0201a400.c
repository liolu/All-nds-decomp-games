/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201a17c(M2C_UNK);
void func_0201fa80(M2C_UNK);
void func_0204c8cc(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204cd18(void);

extern M2C_UNK data_020878f4;

void func_0201a400(s32 arg0) {
    if (func_0201a17c(arg0) == 0) {
        return;
    }
    func_0204c8cc(func_0204cd18(), (s32) &data_020878f4, 0);
    func_0201fa80(func_0201a17c(arg0));
}
