/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK (*data_020ec104)(s32);
extern void *data_020ec10c;

void func_0201aefc(s32 arg0) {
    if (M2C_FIELD(data_020ec10c, u16 *, 6) != 0) {
        return;
    }
    if (data_020ec104 != NULL) {
        data_020ec104((arg0 * 0x590) + (s32) (data_020ec10c + 0x4D4));
    }
    M2C_FIELD(data_020ec10c, s16 *, 0xC) = 0x16;
    M2C_FIELD(data_020ec10c, u16 *, 6)   = (u16) (1 << arg0);
    M2C_FIELD(data_020ec10c, s16 *, 8)   = 0x321;
}
