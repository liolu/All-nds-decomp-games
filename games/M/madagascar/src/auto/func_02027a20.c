/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_0207b040(s32 *);                       /* extern */
extern s32 *data_020d0278;

void func_02027a20(void) {
    func_0202c2b8(*data_020d0278);
    *data_020d0278 = 0;
    func_0207b040(data_020d0278);
    data_020d0278 = NULL;
}
