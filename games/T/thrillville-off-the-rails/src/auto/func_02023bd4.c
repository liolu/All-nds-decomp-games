/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020217d8(M2C_UNK);                     /* extern */
M2C_UNK func_02021968(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020239f8(M2C_UNK);                     /* extern */
extern u16 data_020ec694;
extern s32 data_020ec698;
extern M2C_UNK data_020ec69c;
extern M2C_UNK func_02023b4c;

void func_02023bd4(void) {
    if (data_020ec694 != 0) {
        return;
    }
    data_020ec694 = 1;
    func_020239f8(0);
    M2C_FIELD(&data_020ec69c, s32 *, 0) = 0;
    M2C_FIELD(&data_020ec69c, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_02021968(8, &func_02023b4c);
    func_020217d8(8);
    data_020ec698 = 0;
}
