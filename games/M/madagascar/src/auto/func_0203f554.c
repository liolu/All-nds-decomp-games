/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_0203e22c(void *);                      /* extern */
extern M2C_UNK data_0207f6e4;
extern s32 data_020cf83c;

void func_0203f554(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x254) + 1) != data_020cf83c) {
        return;
    }
    func_02002720(&data_0207f6e4);
    M2C_FIELD(arg0, s32 *, 0x254) = 0;
    func_0203e22c(arg0);
}
