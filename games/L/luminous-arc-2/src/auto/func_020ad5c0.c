#include "m2c.h"

M2C_UNK func_020aa520(s32);                         /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */
M2C_UNK func_020b1fa0(void **, M2C_UNK);            /* extern */
M2C_UNK func_020b3f98(void **);                     /* extern */

void func_020ad5c0(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_020b1fa0(arg0, 1);
    func_020b3f98(arg0);
    func_020aa520(M2C_FIELD(temp_r4, s32 *, 0x5C8));
    func_020ab30c(temp_r4);
    *arg0 = NULL;
}
