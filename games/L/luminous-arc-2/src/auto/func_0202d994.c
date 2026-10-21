#include "m2c.h"

M2C_UNK func_020caff8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cb1e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_0202d994(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;

    func_020caff8(1, 2, 0xA, 0xF, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x76);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 1:                                         /* switch 1 */
            func_020cb1e4(1, 1, 0xA, 0x10, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            break;
        case 2:                                         /* switch 1 */
            func_020cb1e4(1, 1, 0xA, 0xF, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            break;
    }
    func_020caff8(1, 2, 0x1A, 0xF, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x7A);
    switch (temp_r0_2) {                            /* switch 2; irregular */
        case 1:                                         /* switch 2 */
            func_020cb1e4(1, 1, 0x1A, 0x10, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            break;
        case 2:                                         /* switch 2 */
            func_020cb1e4(1, 1, 0x1A, 0xF, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            break;
    }
    func_020caff8(1, 2, 0xA, 0x11, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x86);
    switch (temp_r0_3) {                            /* switch 3; irregular */
        case 1:                                         /* switch 3 */
            func_020cb1e4(1, 1, 0xA, 0x12, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            break;
        case 2:                                         /* switch 3 */
            func_020cb1e4(1, 1, 0xA, 0x11, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            break;
    }
    func_020caff8(1, 2, 0x1A, 0x11, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0_4 = M2C_FIELD(arg0, u8 *, 0x8A);
    switch (temp_r0_4) {                            /* switch 4; irregular */
        case 1:                                         /* switch 4 */
            func_020cb1e4(1, 1, 0x1A, 0x12, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            break;
        case 2:                                         /* switch 4 */
            func_020cb1e4(1, 1, 0x1A, 0x11, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            break;
    }
    func_020caff8(1, 2, 0xA, 0x13, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0_5 = M2C_FIELD(arg0, u8 *, 0x82);
    switch (temp_r0_5) {                            /* switch 5; irregular */
        case 1:                                         /* switch 5 */
            func_020cb1e4(1, 1, 0xA, 0x14, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            break;
        case 2:                                         /* switch 5 */
            func_020cb1e4(1, 1, 0xA, 0x13, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            break;
    }
    func_020caff8(1, 2, 0x1A, 0x13, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0);
    temp_r0_6 = M2C_FIELD(arg0, u8 *, 0x7E);
    switch (temp_r0_6) {                            /* switch 6; irregular */
        case 1:                                         /* switch 6 */
            func_020cb1e4(1, 1, 0x1A, 0x14, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x812E);
            return;
        case 2:                                         /* switch 6 */
            func_020cb1e4(1, 1, 0x1A, 0x13, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x912F);
            return;
    }
}
