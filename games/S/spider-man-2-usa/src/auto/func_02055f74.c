/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02054c88(M2C_UNK);
void func_02057cf0(M2C_UNK);

extern s32 data_02157c3c;
extern s32 data_02161260;
extern s32 data_02161264;

void func_02055f74(void) {
    if (data_02157c3c != -1) {
        func_02057cf0(data_02157c3c);
    }
    func_02054c88(data_02161264);
    data_02161264 = 0;
    data_02161260 = 0;
}
