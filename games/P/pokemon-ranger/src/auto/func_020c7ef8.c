/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c5bc8(M2C_UNK);                     /* extern */
M2C_UNK func_020c5ccc(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020c7d94(M2C_UNK);                     /* extern */
extern u16 data_020f6c9c;
extern s32 data_020f6ca0;
extern M2C_UNK data_020f6ca4;
extern M2C_UNK func_020c7e70;

void func_020c7ef8(void) {
    if (data_020f6c9c != 0) {
        return;
    }
    data_020f6c9c = 1;
    func_020c7d94(0);
    M2C_FIELD(&data_020f6ca4, s32 *, 0) = 0;
    M2C_FIELD(&data_020f6ca4, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020c5ccc(8, &func_020c7e70);
    func_020c5bc8(8);
    data_020f6ca0 = 0;
}
