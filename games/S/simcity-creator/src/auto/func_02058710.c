/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02058710(s16 *arg0, s32 arg1) {
    if (arg1 < (s32) *arg0) {
        return M2C_FIELD(((arg1 * 0x24) + (s32) arg0), u16 *, 0xA);
    }
    return 0U;
}
