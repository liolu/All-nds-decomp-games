/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201f670(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201f920();                            /* extern */
extern s16 data_020ec2c4;
extern void *data_020ec2c8;

void func_0201f704(void) {
    data_020ec2c4                           = 0;
    M2C_FIELD(data_020ec2c8, s32 *, 0x5F04) = 0;
    func_0201f920();
    func_0201f670(0x14, 0);
}
