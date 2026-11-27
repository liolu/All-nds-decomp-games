/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK (*data_0212e94c)(u16, s32, u16);
extern s32 data_0212e964;

void func_020e4b40(void *arg0) {
    u16 temp_r0;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 7:                                         /* switch 1 */
            return;
        case 21:                                        /* switch 1 */
            switch (data_0212e964) {                    /* switch 2; irregular */
                case 3:                                     /* switch 2 */
                    if (data_0212e94c == NULL) {
                        return;
                    }
                    data_0212e94c(M2C_FIELD(arg0, u16 *, 0x12), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u16 *, 0x10));
                    return;
                case 4:                                     /* switch 2 */
                    if (data_0212e94c == NULL) {
                        return;
                    }
                    data_0212e94c(0U, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u16 *, 0x10));
                    return;
            }
            break;
        case 9:                                         /* switch 1 */
            switch (data_0212e964) {                    /* switch 3; irregular */
                case 3:                                     /* switch 3 */
                    if (data_0212e94c == NULL) {
                        return;
                    }
                    data_0212e94c(M2C_FIELD(arg0, u16 *, 0x12), 0, 0U);
                    return;
                case 4:                                     /* switch 3 */
                    if (data_0212e94c == NULL) {
                        return;
                    }
                    data_0212e94c(0U, 0, 0U);
                    return;
            }
            break;
    }
}
