/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020469d4(M2C_UNK, M2C_UNK);
void func_020469fc(M2C_UNK, M2C_UNK);
M2C_UNK func_02043808(void);
void func_02044a34(M2C_UNK);
void func_02045d28(M2C_UNK, M2C_UNK);

void func_02045cbc(void) {
    func_020469fc(7, (s32) func_02045d28);
    if (func_02043808() != 0) {
        return;
    }
    if (func_020469d4(7, 1) != 0) {
        return;
    }
    do {
        func_02044a34(0x64);
    } while (func_020469d4(7, 1) == 0);
}
