/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c273c(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f68ec;

void func_020c454c(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c273c(data_020f68ec);
    data_020f68ec = 0;
}
