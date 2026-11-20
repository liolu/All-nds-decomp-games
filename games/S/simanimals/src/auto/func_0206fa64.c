/* compiler: 1.2/sp3 */
#include "m2c.h"
M2C_UNK func_0206fac4();

void func_0206fa64(void *arg0, s32 arg1) {
    u16 off;
    u16 *cnt;

    if (*(s32 *) arg0 == 0) {
        func_0206fac4();
        return;
    }
    off                                             = *(u16 *) ((u8 *) arg0 + 0xA);
    *(s32 *) ((u8 *) arg1 + off)                    = *(s32 *) ((u8 *) arg0 + 4);
    *(s32 *) ((u8 *) arg1 + off + 4)                = 0;
    cnt                                             = (u16 *) ((u8 *) arg0 + 8);
    off                                             = *(u16 *) ((u8 *) arg0 + 0xA);
    *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + off + 4) = arg1;
    *(s32 *) ((u8 *) arg0 + 4)                      = arg1;
    *cnt                                            = *cnt + 1;
}
