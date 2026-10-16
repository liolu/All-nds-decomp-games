#include "m2c.h"

M2C_UNK func_02028e84(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020302c4(s32);                         /* extern */
extern M2C_UNK data_020d99e8;

void func_02030e94(void *arg0) {
    func_020302c4(M2C_FIELD(arg0, s32 *, 0x40));
    func_02028e84(&data_020d99e8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
