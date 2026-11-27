/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02067f2c(M2C_UNK);
M2C_UNK func_0206908c(void);
void func_0206909c(M2C_UNK);
void func_020690ac(void);
void func_020690c0(M2C_UNK);

extern void *data_0211f324;

void func_02067b04(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(data_0211f324, s32 *, 0x80) != 0) {
        temp_r4 = func_0206908c();
        func_020690c0(1);
        func_0206909c(M2C_FIELD(data_0211f324, s32 *, 0x80));
        func_02067f2c(arg0);
        func_020690c0(0);
        func_0206909c(temp_r4);
        func_020690ac();
        return;
    }
    func_02067f2c(arg0);
}
