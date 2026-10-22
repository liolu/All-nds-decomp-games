/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a570(s32);                         /* extern */
M2C_UNK func_02059f70(s32 *);                       /* extern */
extern s32 *data_0215d73c;

void func_02039660(void) {
    func_0204a570(*data_0215d73c);
    *data_0215d73c = 0;
    func_02059f70(data_0215d73c);
    data_0215d73c = NULL;
}
