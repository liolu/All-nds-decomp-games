#include "m2c.h"

M2C_UNK func_02088534(); /* extern */
extern M2C_UNK data_020e6e8b;
extern M2C_UNK data_020e6ea0;
extern M2C_UNK data_020e6ea5;
extern M2C_UNK data_020e6ea9;
extern M2C_UNK data_020e6ead;
extern M2C_UNK data_020e6eb1;
extern M2C_UNK data_020e6eb5;
extern M2C_UNK data_020e6ebc;
extern M2C_UNK data_020e6ec3;
extern M2C_UNK data_020e6eca;
extern M2C_UNK data_02102f84;
extern M2C_UNK data_02102fe8;
extern M2C_UNK data_02103024;
extern M2C_UNK data_0210302e;

M2C_UNK *func_020c1658(u32 arg0, u32 arg1, u32 arg2) {
    func_02088534(&data_02102fe8, &data_020e6e8b);
    if (arg2 < 4U) {
        func_02088534(&data_0210302e, &data_020e6ea0, arg2);
    } else {
        switch (arg1) {                             /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                func_02088534(&data_0210302e, &data_020e6ea5);
                break;
            case 1:                                     /* switch 1 */
                func_02088534(&data_0210302e, &data_020e6ea9);
                break;
            case 2:                                     /* switch 1 */
                func_02088534(&data_0210302e, &data_020e6ead);
                break;
            case 3:                                     /* switch 1 */
                func_02088534(&data_0210302e, &data_020e6eb1);
                break;
        }
    }
    switch (arg0) {                                 /* switch 2 */
        case 3:                                         /* switch 2 */
            break;
        default:                                        /* switch 2 */
            break;
        case 0:                                         /* switch 2 */
            func_02088534(&data_02103024, &data_020e6eb5, (u32) &data_0210302e);
            break;
        case 1:                                         /* switch 2 */
            func_02088534(&data_02103024, &data_020e6ebc, (u32) &data_0210302e);
            break;
        case 2:                                         /* switch 2 */
            func_02088534(&data_02103024, &data_020e6ec3, (u32) &data_0210302e);
            break;
    }
    func_02088534(&data_02102f84, &data_020e6eca, (u32) &data_02102fe8, &data_02103024);
    return &data_02102f84;
}
