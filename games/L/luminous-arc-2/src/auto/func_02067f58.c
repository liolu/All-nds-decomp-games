#include "m2c.h"

M2C_UNK func_02066894();                            /* extern */
M2C_UNK func_02068910(M2C_UNK);                     /* extern */
M2C_UNK func_0206a218(M2C_UNK);                     /* extern */
s32 func_0206a354(u8, M2C_UNK);                     /* extern */
M2C_UNK func_0206a3a0(u8);                          /* extern */
M2C_UNK func_0207aa14();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

s32 func_02067f58(s32 arg0) {
    s32 temp_r0;

    switch (arg0) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            func_0207aa14();
            temp_r0 = func_0206a354(M2C_FIELD(&data_0216be68, u8 *, 0x6B), 0);
            switch (temp_r0) {                          /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    func_02066894();
                    func_02068910(0);
                    func_0206a218(3);
                    func_0206a218(1);
                    M2C_FIELD(&data_0216be68, u8 *, 0x6C)  = (u8) M2C_FIELD(&data_0216be68, u8 *, 0x6B);
                    M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) + 1);
                    break;
                case 1:                                     /* switch 2 */
                    func_02068910(1);
                    func_020caa3c(3, 1, 0x10);
                    M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = 0xDU;
                    break;
                case 2:                                     /* switch 2 */
                    func_02068910(1);
                    func_020caa3c(3, 1, 0x10);
                    M2C_FIELD(&data_0216be68, s8 *, 0x76)  = 2;
                    M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = 0xEU;
                    break;
            }
            break;
        case 1:                                         /* switch 1 */
            func_0206a3a0(M2C_FIELD(&data_0216be68, u8 *, 0x6B));
            func_02068910(0);
            func_0206a218(3);
            func_0206a218(1);
            func_02066894();
            M2C_FIELD(&data_0216be68, u8 *, 0x6C)  = (u8) M2C_FIELD(&data_0216be68, u8 *, 0x6B);
            M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = 0xFU;
            break;
    }
    return 0;
}
