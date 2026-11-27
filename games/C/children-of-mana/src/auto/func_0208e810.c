/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203fd04(void *);                      /* extern */
M2C_UNK func_0203fd80(void *);                      /* extern */
M2C_UNK func_0203fde8(void *);                      /* extern */
M2C_UNK func_0208dc58(void *);                      /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_0208e810(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1DA) == 0) {
        return;
    }
    func_0209304c(2);
    func_0203fde8(arg0 + 0x28);
    func_0203fd80(arg0 + 0x28);
    func_0203fd04(arg0 + 0x70);
    func_0208dc58(arg0);
}
