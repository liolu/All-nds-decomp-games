#include "m2c.h"

M2C_UNK func_0205f7cc(s32, u8);                     /* extern */
M2C_UNK func_0205f970(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0208dc48;

void func_0205f704(s32 arg0) {
    func_0205f970(arg0, 0);
    func_0205f7cc(arg0, *((u8 *) ((s8 *) &data_0208dc48 + (arg0 * 0xA))));
}
