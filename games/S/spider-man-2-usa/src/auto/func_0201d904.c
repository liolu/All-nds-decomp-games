/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e6c(void *);                      /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_02113a3c;

void *func_0201d904(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02113a3c;
    func_02059f70(M2C_FIELD(arg0, s32 *, 0x610));
    func_02031e6c(arg0);
    return arg0;
}
