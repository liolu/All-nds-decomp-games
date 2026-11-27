/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020645f0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02073c40(s32);                         /* extern */
extern M2C_UNK data_02123b7c;

void func_020748fc(void *arg0) {
    func_02073c40(M2C_FIELD(arg0, s32 *, 0x40));
    func_020645f0(&data_02123b7c, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
