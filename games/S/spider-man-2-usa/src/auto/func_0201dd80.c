/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffc5f8(void *);                      /* extern */
M2C_UNK func_0201be5c(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0201fadc(void *);                      /* extern */
extern M2C_UNK data_02113ae4;
extern M2C_UNK data_0212d0d8;

void *func_0201dd80(void *arg0, M2C_UNK arg1) {
    func_0201be5c(arg0, &data_0212d0d8, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02113ae4;
    M2C_FIELD(arg0, s32 *, 0x328)  = 0;
    func_01ffc5f8(arg0 + 0x35C);
    func_0201fadc(arg0);
    return arg0;
}
