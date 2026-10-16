/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020643ec(M2C_UNK);                     /* extern */
M2C_UNK func_0206457c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02067004(M2C_UNK);                     /* extern */
extern u16 data_020e6640;
extern s32 data_020e6644;
extern M2C_UNK data_020e6648;
extern M2C_UNK func_020670d0;

void func_02067158(void) {
    if (data_020e6640 != 0) {
        return;
    }
    data_020e6640 = 1;
    func_02067004(0);
    M2C_FIELD(&data_020e6648, s32 *, 0) = 0;
    M2C_FIELD(&data_020e6648, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0206457c(8, &func_020670d0);
    func_020643ec(8);
    data_020e6644 = 0;
}
