/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02038c24(void);
void func_0204560c(void);
M2C_UNK func_02045874(M2C_UNK);

void func_0204579c(s32 arg0) {
    if (func_02045874(arg0) == 0) {
        return;
    }
    do {
        func_0204560c();
        func_02038c24();
    } while (func_02045874(arg0) != 0);
}
