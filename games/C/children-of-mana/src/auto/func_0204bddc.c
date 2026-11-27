/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa44(void *);                      /* extern */
M2C_UNK func_0207aa74(void *);                      /* extern */
M2C_UNK func_0207aa80(void *);                      /* extern */
M2C_UNK func_020d4b60(void *);                      /* extern */

void func_0204bddc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x11F) == 0) {
        return;
    }
    func_0207aa80(arg0 + 0x18);
    func_0207aa74(arg0 + 0x18);
    func_0207aa44(arg0 + 0x18);
    func_020d4b60(arg0 + 0x78);
    M2C_FIELD(arg0, u8 *, 0x11F) = 0U;
}
