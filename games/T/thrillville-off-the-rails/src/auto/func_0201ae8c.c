/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK (*data_020ec100)();
extern void *data_020ec10c;

void func_0201ae8c(void) {
    if (M2C_FIELD(data_020ec10c, u16 *, 6) == 0) {
        return;
    }
    if (data_020ec100 != NULL) {
        data_020ec100();
    }
    M2C_FIELD(data_020ec10c, s16 *, 0xC) = 1;
    M2C_FIELD(data_020ec10c, u16 *, 6)   = 0U;
    M2C_FIELD(data_020ec10c, s16 *, 0xA) = 0;
}
