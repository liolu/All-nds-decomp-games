#include "m2c.h"

s32 func_02083a48();                                /* extern */
M2C_UNK func_02085600();                            /* extern */
M2C_UNK func_0208571c(M2C_UNK);                     /* extern */
M2C_UNK func_02088cc8(u8, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern void *data_02170354;
extern M2C_UNK func_02085a38;

s32 func_0208506c(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if ((func_02083a48() != 0) || (M2C_FIELD(data_02170354, s32 *, 0x24) != 3)) {
        return 0;
    }
    func_02085600();
    M2C_FIELD(data_02170354, s32 *, 0x80) = arg2;
    M2C_FIELD(data_02170354, s32 *, 0x84) = arg3;
    func_0208571c(5);
    func_02088cc8((u8) (arg0 - 1), arg1, &func_02085a38, 0, arg4, arg5);
    return 1;
}
