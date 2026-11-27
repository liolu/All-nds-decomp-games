/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02012178(M2C_UNK, M2C_UNK);            /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_02100618;
extern M2C_UNK data_02100f68;

void func_02082ed4(M2C_UNK arg0) {
    func_0200e8c8(&data_02100f68, &data_02100618);
    if (((u32) (M2C_FIELD(func_020aac90(), u8 *, 0x52) << 0x1F) >> 0x1F) != 0) {
        func_02012178(arg0, 1);
        return;
    }
    func_02012178(arg0, 0);
}
