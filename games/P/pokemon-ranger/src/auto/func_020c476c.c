/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c2eb8(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f68f8;
extern s32 data_020f68fc;
extern s32 data_020f6900;

void func_020c476c(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c2eb8(data_020f6900);
    data_020f6900 = 0;
    data_020f68fc = 0;
    data_020f68f8 = 0;
}
