/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _fdiv(s32, s32);                    /* extern */
s32 _fflt(s32);                             /* extern */
extern M2C_UNK data_02137374;

void func_02047930(void) {
    _fdiv(_fflt(M2C_FIELD(&data_02137374, s32 *, 8)), 0x44B00000);
}
