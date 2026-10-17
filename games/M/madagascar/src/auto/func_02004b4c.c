/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200d720(M2C_UNK);

void func_02004b4c(s32 arg0) {
    u32 temp_r1;
    u32 temp_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        temp_r1 = M2C_FIELD(arg0, u32 *, 0x140);
        switch (temp_r1) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                *(s32 *) 0x04001010 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 1:                                     /* switch 1 */
                *(s32 *) 0x04001014 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 2:                                     /* switch 1 */
                *(s32 *) 0x04001018 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 3:                                     /* switch 1 */
                *(s32 *) 0x0400101C =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
        }
    } else {
        temp_r1_2 = M2C_FIELD(arg0, u32 *, 0x140);
        switch (temp_r1_2) {                        /* switch 2 */
            default:                                    /* switch 2 */
                break;
            case 0:                                     /* switch 2 */
                *(s32 *) 0x04000010 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 1:                                     /* switch 2 */
                *(s32 *) 0x04000014 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 2:                                     /* switch 2 */
                *(s32 *) 0x04000018 =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
            case 3:                                     /* switch 2 */
                *(s32 *) 0x0400001C =
                    (M2C_FIELD(arg0, s32 *, 0x118) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x11C) << 0x10));
                break;
        }
    }
    func_0200d720(arg0);
}
