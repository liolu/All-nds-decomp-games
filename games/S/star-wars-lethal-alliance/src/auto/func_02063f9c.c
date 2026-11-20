/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02062a04(M2C_UNK);
void func_02067858(M2C_UNK);

extern s32 data_020e1398;
extern s32 data_020e62a0;
extern s32 data_020e62a4;
extern s32 data_020e62a8;
extern s32 data_020e62ac;

void func_02063f9c(void) {
    if (data_020e1398 != -1) {
        func_02067858(data_020e1398);
    }
    func_02062a04(data_020e62a4);
    data_020e62ac = 0;
    data_020e62a8 = 0;
    data_020e62a0 = 0;
    data_020e62a4 = 0;
}
