/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern s32 data_020ec7b4;
extern s32 data_020ec7b8;

void func_0202602c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02024624();
    if (data_020ec7b8 == 0) {
        data_020ec7b8 = arg0;
        data_020ec7b4 = arg0;
    } else {
        *(M2C_UNK *) data_020ec7b8 = arg0;
        data_020ec7b8              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_02024638(temp_r0);
}
