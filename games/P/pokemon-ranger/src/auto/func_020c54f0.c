/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c2b08(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f6910;
extern s32 data_020f6914;

void func_020c54f0(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c2b08(data_020f6914);
    data_020f6914 = 0;
    data_020f6910 = 0;
}
