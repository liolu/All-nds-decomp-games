/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa44(void *);                      /* extern */
M2C_UNK func_0207aa74(void *);                      /* extern */
M2C_UNK func_0207aa80(void *);                      /* extern */
M2C_UNK func_0209f1e8(void *);                      /* extern */

void func_020c54a0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x9B) == 0) {
        return;
    }
    func_0207aa44(arg0 + 0x108);
    func_0207aa74(arg0 + 0x108);
    func_0207aa80(arg0 + 0x108);
    func_0209f1e8(arg0);
}
