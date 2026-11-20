/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02013ca8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10(void *);                      /* extern */
M2C_UNK func_02013d4c(void *);                      /* extern */
M2C_UNK func_0201fac0(void *);                      /* extern */
M2C_UNK func_0201fe60(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0210c114;
extern M2C_UNK data_0210c2b0;
extern s32 data_0215b3bc;

void *func_020147fc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c114;
    func_02013ca8(arg0, 0);
    func_02013d10(arg0);
    func_02013d4c(arg0);
    func_0201fac0(arg0);
    data_0215b3bc                     = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &data_0210c2b0;
    func_0201fe60(arg0 + 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
