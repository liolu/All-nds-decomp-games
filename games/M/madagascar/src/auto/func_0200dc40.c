/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02073864(); /* extern */
extern M2C_UNK data_020bda70;
extern M2C_UNK data_020bda78;
extern M2C_UNK data_020bda7c;

void func_0200dc40(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x124), u8 *, 8) != 0) {
        func_02073864(arg0 + 0xE4, &data_020bda70, &data_020bda78, M2C_FIELD(arg0, s32 *, 0xD4));
        return;
    }
    func_02073864(arg0 + 0xE4, &data_020bda7c, &data_020bda78, M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xD8));
}
