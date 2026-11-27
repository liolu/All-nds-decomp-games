/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_ov014_0213e910();                      /* extern */
extern s32 data_02117348;

void func_0203def0(void) {
    if (data_02117348 == 0) {
        VBlankIntrWait();
        return;
    }
    func_ov014_0213e910();
}
