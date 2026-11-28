#include "m2c.h"

M2C_UNK func_02074314(void *);                      /* extern */
extern s32 data_020ef774;

void *func_0206485c(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1F) >> 0x1F) != 0) {
        func_02074314(M2C_FIELD(arg0, void **, 0xC));
    }
    data_020ef774 = 0;
    func_02074314(arg0);
    return arg0;
}
