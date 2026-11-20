/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203de10(void *, M2C_UNK);             /* extern */
M2C_UNK func_02041610(void *);                      /* extern */
extern s32 data_0208efec;

void func_02041630(void *arg0) {
    func_0203de10(arg0, 0x18);
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1BC), s32 *, 0x28) <= (s32) data_0208efec) {
        return;
    }
    func_02041610(arg0);
}
