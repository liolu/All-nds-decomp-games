/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205c948(void);
void func_0205c95c(M2C_UNK);

extern s32 data_0211c820;
extern s32 data_0211c824;

void func_02063c0c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0205c948();
    if (data_0211c824 == 0) {
        data_0211c824 = arg0;
        data_0211c820 = arg0;
    } else {
        *(M2C_UNK *) data_0211c824 = arg0;
        data_0211c824              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_0205c95c(temp_r0);
}
