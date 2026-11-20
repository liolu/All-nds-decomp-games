/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200da24(void *);                      /* extern */
M2C_UNK func_0206083c(s32, void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bebb4;

void *func_0201e7a0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bebb4;
    M2C_FIELD(arg0, s32 *, 0x154)  = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x158)  = 0;
    M2C_FIELD(arg0, s32 *, 0x15C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x160)  = 0x1000;
    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x140);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 2:                                     /* switch 1 */
                func_0206083c(0x04001020, arg0 + 0x154, 0x80, 0x60, 0, 0);
                break;
            case 3:                                     /* switch 1 */
                func_0206083c(0x04001030, arg0 + 0x154, 0x80, 0x60, 0, 0);
                break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x140);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 2:                                     /* switch 2 */
                func_0206083c(0x04000020, arg0 + 0x154, 0x80, 0x60, 0, 0);
                break;
            case 3:                                     /* switch 2 */
                func_0206083c(0x04000030, arg0 + 0x154, 0x80, 0x60, 0, 0);
                break;
        }
    }
    func_0200da24(arg0);
    func_0207b040(arg0);
    return arg0;
}
