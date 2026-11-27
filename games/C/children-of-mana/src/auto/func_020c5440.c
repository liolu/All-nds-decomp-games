/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa8c(void *);                      /* extern */
M2C_UNK func_0207aac8(void *);                      /* extern */
M2C_UNK func_0209f17c(void *);                      /* extern */

void func_020c5440(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x9C) == 0) {
        return;
    }
    func_0207aac8(arg0 + 0x108);
    func_0207aa8c(arg0 + 0x108);
    func_0209f17c(arg0);
}
