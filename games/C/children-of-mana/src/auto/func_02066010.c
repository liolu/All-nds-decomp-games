/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059110(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02059170(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0205953c();                            /* extern */
M2C_UNK func_020595ac(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02059710();                            /* extern */
M2C_UNK func_0205bba4(s32, s32);                    /* extern */
M2C_UNK func_0206650c(void *, s32, M2C_UNK);        /* extern */

void func_02066010(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0_2;
    u16 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    switch (arg2) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            break;
        case 1:                                         /* switch 1 */
            *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | temp_r0;
            break;
        case 2:                                         /* switch 1 */
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | temp_r0;
            break;
    }
    func_0205bba4(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x10));
    switch (arg2) {                                 /* switch 2; irregular */
        case 0:                                         /* switch 2 */
            func_02059710();
            func_020595ac(M2C_FIELD(arg0, s32 *, 0x14), arg1, M2C_FIELD(arg0, s32 *, 0x10));
            func_0205953c();
            break;
        case 1:                                         /* switch 2 */
            func_02059170(M2C_FIELD(arg0, s32 *, 0x14), arg1, M2C_FIELD(arg0, s32 *, 0x10));
            break;
        case 2:                                         /* switch 2 */
            func_02059110(M2C_FIELD(arg0, s32 *, 0x14), arg1, M2C_FIELD(arg0, s32 *, 0x10));
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        temp_r0_2 = M2C_FIELD(arg0, u16 *, 2);
        switch ((s32) temp_r0_2) {                  /* switch 3; irregular */
            case 1:                                     /* switch 3 */
                var_r0 = 0;
                break;
            case 2:                                     /* switch 3 */
                var_r0 = 1;
                break;
            case 4:                                     /* switch 3 */
                var_r0 = 2;
                break;
            case 8:                                     /* switch 3 */
                var_r0 = 3;
                break;
            case 16:                                    /* switch 3 */
                var_r0 = 4;
                break;
            case 32:                                    /* switch 3 */
                var_r0 = 5;
                break;
            default:                                    /* switch 3 */
                var_r0 = 0;
                break;
        }
        M2C_FIELD(arg3, s32 *, 0xC) = var_r0;
        temp_r0_3                   = M2C_FIELD(arg0, u16 *, 0);
        switch ((s32) temp_r0_3) {                  /* switch 4; irregular */
            case 1:                                     /* switch 4 */
                var_r0_2 = 0;
                break;
            case 2:                                     /* switch 4 */
                var_r0_2 = 1;
                break;
            case 4:                                     /* switch 4 */
                var_r0_2 = 2;
                break;
            case 8:                                     /* switch 4 */
                var_r0_2 = 3;
                break;
            case 16:                                    /* switch 4 */
                var_r0_2 = 4;
                break;
            case 32:                                    /* switch 4 */
                var_r0_2 = 5;
                break;
            default:                                    /* switch 4 */
                var_r0_2 = 0;
                break;
        }
        M2C_FIELD(arg3, s32 *, 0x10) = var_r0_2;
    } else {
        M2C_FIELD(arg3, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, u16 *, 2);
        M2C_FIELD(arg3, s32 *, 0x10) = (s32) M2C_FIELD(arg0, u16 *, 0);
    }
    M2C_FIELD(arg3, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 0x18) = 0;
    M2C_FIELD(arg3, s32 *, 0x1C) = 1;
    M2C_FIELD(arg3, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 8);
    func_0206650c(arg3, arg2, arg1);
}
