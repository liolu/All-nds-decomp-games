/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02151468;
extern M2C_UNK data_0217b34c;

void func_0203cab0(void) {
    M2C_FIELD(&data_02151468, s16 *, 0) = (s16) M2C_FIELD(&data_0217b34c, s16 *, 0x78);
    M2C_FIELD(&data_02151468, s16 *, 2) = (s16) M2C_FIELD(&data_0217b34c, s16 *, 0x7A);
}
