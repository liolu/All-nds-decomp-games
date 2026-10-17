/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d190();                            /* extern */
M2C_UNK func_0202d208();                            /* extern */
M2C_UNK func_0202e5fc();                            /* extern */
M2C_UNK func_02052f10(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02056530();                            /* extern */
M2C_UNK func_02060c54();                            /* extern */
extern s32 data_020d08bc;

void func_0202d8a4(s32 arg0) {
    func_0202d208();
    func_0202d190();
    func_0202e5fc();
    func_02056530();
    func_02060c54();
    func_02052f10(arg0 + 0xBC, data_020d08bc, 4);
}
