/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020035c0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0202c2b8(M2C_UNK);
M2C_UNK func_0202c4d4(void);
s32 func_02075b54(u8 *);

void func_0202c278(s32 arg0) {
    s32 temp_r0;

    func_020035c0(0, arg0, func_02075b54((u8 *) arg0));
    temp_r0 = func_0202c4d4();
    if (temp_r0 == 0) {
        return;
    }
    func_0202c2b8(temp_r0);
    func_0202c2b8(temp_r0);
}
