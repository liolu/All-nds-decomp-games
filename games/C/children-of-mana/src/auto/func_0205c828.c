/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);     /* extern */
M2C_UNK func_0205a84c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0205c6d4(M2C_UNK);                     /* extern */
extern u16 data_0211b328;
extern s32 data_0211b32c;
extern M2C_UNK data_0211b330;
extern M2C_UNK func_0205c7a0;

void func_0205c828(void) {
    if (data_0211b328 != 0) {
        return;
    }
    data_0211b328 = 1;
    func_0205c6d4(0);
    M2C_FIELD(&data_0211b330, s32 *, 0) = 0;
    M2C_FIELD(&data_0211b330, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0205a84c(8, &func_0205c7a0);
    _Z24EnableSpecificInterruptsj(8);
    data_0211b32c = 0;
}
