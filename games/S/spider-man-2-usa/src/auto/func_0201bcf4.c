/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_01ffd90c();                             /* extern */
M2C_UNK func_01ffd990(s32);                         /* extern */
M2C_UNK func_0201ee8c(s32, void *);                 /* extern */

void func_0201bcf4(void *arg0) {
    func_0201ee8c(M2C_FIELD(*func_01ffd90c(), s32 *, 4), arg0);
    func_01ffd990(M2C_FIELD(arg0, s32 *, 0x2F4));
}
