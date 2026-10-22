/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ed78(s32);                         /* extern */
M2C_UNK func_0201f930(void *);                      /* extern */
M2C_UNK func_02033554(u8);                          /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02113140;

void *func_0201a978(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02113140;
    if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
        func_02033554(M2C_FIELD(arg0, u8 *, 0x24));
    }
    func_0201ed78(M2C_FIELD(arg0, s32 *, 0x30));
    func_0201ed78(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0201f930(arg0);
    func_02059f70(arg0);
    return arg0;
}
