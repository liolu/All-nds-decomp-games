/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c2bfc(M2C_UNK);
void func_020c84f4(M2C_UNK);

extern s32 data_020f11c0;
extern s32 data_020f690c;
extern s32 data_020f691c;
extern s32 data_020f6920;
extern s32 data_020f6924;

void func_020c5678(void) {
    if (data_020f11c0 != -1) {
        func_020c84f4(data_020f11c0);
    }
    func_020c2bfc(data_020f691c);
    data_020f6924 = 0;
    data_020f6920 = 0;
    data_020f690c = 0;
    data_020f691c = 0;
}
