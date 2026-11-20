/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0206fb20(void *, s32, void *, s32, s32);

void *func_0206fe1c(void *arg0, s32 arg1, s32 arg2) {
    s32 *t;
    t = (s32 *) ((char *) arg0 + 0x24);
    func_0206fb20(arg0, 0x46524D48, t + 3, arg1, arg2);
    t[0] = *(s32 *) ((char *) arg0 + 0x18);
    t[1] = *(s32 *) ((char *) arg0 + 0x1C);
    t[2] = 0;
    return arg0;
}
