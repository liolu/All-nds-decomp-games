/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern s32 *data_020ec2cc;

void func_02020344(s32 arg0) {
    s32 temp_r0;

    temp_r0        = func_02024624();
    *data_020ec2cc = arg0;
    func_02024638(temp_r0);
}
