/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02033fcc(M2C_UNK);
void func_02034400(M2C_UNK);
void func_02034750(M2C_UNK);
void func_02034918(M2C_UNK);
void func_02034ca4(M2C_UNK);
void func_02034e40(M2C_UNK);
void func_0203502c(M2C_UNK);
void func_020bf460(M2C_UNK);
M2C_UNK func_020bf580(M2C_UNK);

void func_02035864(s32 arg0) {
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 var_r0;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, volatile u32 *, 0x20);
    switch (temp_r1) {                              /* switch 1 */
        default:                                        /* switch 1 */
            break;
        case 0:                                         /* switch 1 */
            func_0203502c(arg0);
            break;
        case 1:                                         /* switch 1 */
            func_02034e40(arg0);
            break;
        case 2:                                         /* switch 1 */
            func_02034ca4(arg0);
            break;
        case 3:                                         /* switch 1 */
            func_02034918(arg0);
            break;
        case 4:                                         /* switch 1 */
            func_02034918(arg0);
            break;
        case 5:                                         /* switch 1 */
            func_02034750(arg0);
            break;
        case 6:                                         /* switch 1 */
            func_02034400(arg0);
            break;
        case 7:                                         /* switch 1 */
            func_02033fcc(arg0);
            break;
    }
    func_020bf460(func_020bf580(1));
    temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x15C);
    switch (temp_r0) {                              /* switch 2; irregular */
        case 0:                                         /* switch 2 */
            return;
        case 1:                                         /* switch 2 */
            temp_r1_2 = M2C_FIELD(arg0, volatile s32 *, 0x168);
            if (temp_r1_2 == 0) {
                return;
            }
            if (M2C_FIELD(arg0, volatile s32 *, 0x178) == 0) {
                M2C_FIELD(arg0, volatile s32 *, 0x160) =
                    (s32) (M2C_FIELD(arg0, volatile s32 *, 0x160) +
                           ((s32) (0x1F000 - M2C_FIELD(arg0, volatile s32 *, 0x160)) / temp_r1_2));
            } else {
                M2C_FIELD(arg0, volatile s32 *, 0x160) =
                    (s32) (M2C_FIELD(arg0, volatile s32 *, 0x160) +
                           ((s32) (0 - M2C_FIELD(arg0, volatile s32 *, 0x160)) / temp_r1_2));
            }
            M2C_FIELD(arg0, volatile s32 *, 0x168) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x168) - 1);
            if (M2C_FIELD(arg0, volatile s32 *, 0x168) != 0) {
                return;
            }
            if (M2C_FIELD(arg0, volatile s32 *, 0x178) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            M2C_FIELD(arg0, volatile s32 *, 0x178) = var_r0;
            M2C_FIELD(arg0, volatile s32 *, 0x168) = 0x14;
            return;
        case 2:                                         /* switch 2 */
            temp_r1_3 = M2C_FIELD(arg0, volatile s32 *, 0x168);
            if (temp_r1_3 != 0) {
                M2C_FIELD(arg0, volatile s32 *, 0x160) =
                    (s32) (M2C_FIELD(arg0, volatile s32 *, 0x160) +
                           ((s32) (M2C_FIELD(arg0, volatile s32 *, 0x164) - M2C_FIELD(arg0, volatile s32 *, 0x160)) /
                            temp_r1_3));
                M2C_FIELD(arg0, volatile s32 *, 0x168) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x168) - 1);
            }
            temp_r1_4 = M2C_FIELD(arg0, volatile s32 *, 0x174);
            if (temp_r1_4 == 0) {
                return;
            }
            M2C_FIELD(arg0, volatile s32 *, 0x16C) =
                (s32) (M2C_FIELD(arg0, volatile s32 *, 0x16C) +
                       ((s32) (M2C_FIELD(arg0, volatile s32 *, 0x170) - M2C_FIELD(arg0, volatile s32 *, 0x16C)) / temp_r1_4));
            M2C_FIELD(arg0, volatile s32 *, 0x174) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x174) - 1);
            return;
    }
}
