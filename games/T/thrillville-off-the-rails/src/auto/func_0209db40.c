#include "m2c.h"

M2C_UNK func_02074314(void *);                      /* extern */
M2C_UNK func_020d1614(void *);                      /* extern */
extern s32 data_020fd29c;

void *func_0209db40(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x4F0) << 0x1F) >> 0x1F) != 0) {
        func_02074314(M2C_FIELD(arg0, void **, 0x4F8));
    }
    func_020d1614(arg0 + 0x19C);
    data_020fd29c = 0;
    func_02074314(arg0);
    return arg0;
}
