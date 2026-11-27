/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206c7ec(M2C_UNK, M2C_UNK);
void func_0206c814(M2C_UNK, M2C_UNK);
M2C_UNK func_0206a0dc(void);
void func_0206ac00(M2C_UNK);
void func_0206bb74(M2C_UNK, M2C_UNK);

void func_0206bb08(void) {
    func_0206c814(7, (s32) func_0206bb74);
    if (func_0206a0dc() != 0) {
        return;
    }
    if (func_0206c7ec(7, 1) != 0) {
        return;
    }
    do {
        func_0206ac00(0x64);
    } while (func_0206c7ec(7, 1) == 0);
}
