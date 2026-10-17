/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_02002780();                             /* extern */

void func_02002720(M2C_UNK arg0) {
    void **temp_r0;

    temp_r0 = func_02002780();
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x14)(temp_r0, arg0);
}
