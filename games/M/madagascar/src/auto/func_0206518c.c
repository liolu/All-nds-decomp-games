/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02065d64(M2C_UNK, M2C_UNK);
void func_02065d8c(M2C_UNK, M2C_UNK);
M2C_UNK func_02062c10(void);
void func_02063d68(M2C_UNK);
void func_020651f8(M2C_UNK, M2C_UNK);

void func_0206518c(void) {
    func_02065d8c(7, (s32) func_020651f8);
    if (func_02062c10() != 0) {
        return;
    }
    if (func_02065d64(7, 1) != 0) {
        return;
    }
    do {
        func_02063d68(0x64);
    } while (func_02065d64(7, 1) == 0);
}
