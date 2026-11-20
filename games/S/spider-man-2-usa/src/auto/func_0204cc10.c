/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70();                         /* extern */
M2C_UNK func_0205a428();                         /* extern */
M2C_UNK func_0205aa90();                            /* extern */
M2C_UNK func_0205ac34();                            /* extern */
extern s32 data_02160664;

void *func_0204cc10(void *arg0) {
    func_0205ac34();
    func_0205a428(arg0 + 0xC);
    func_0205aa90();
    func_02059f70(M2C_FIELD(arg0, s32 *, 0x2C));
    data_02160664 = 0;
    return arg0;
}
