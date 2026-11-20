/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c8070(void);
void func_020c8084(M2C_UNK);

extern s32 data_020f6d0c;
extern s32 data_020f6d10;

void func_020c9600(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020c8070();
    if (data_020f6d10 == 0) {
        data_020f6d10 = arg0;
        data_020f6d0c = arg0;
    } else {
        *(M2C_UNK *) data_020f6d10 = arg0;
        data_020f6d10              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020c8084(temp_r0);
}
