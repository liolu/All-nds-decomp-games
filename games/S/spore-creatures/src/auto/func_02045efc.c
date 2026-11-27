#include "m2c.h"

M2C_UNK func_0201510c(s32, void *);                 /* extern */
M2C_UNK func_02016110(void *);                      /* extern */
M2C_UNK func_02043d6c(void *);                      /* extern */
M2C_UNK func_02088798(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020def40;
extern void *data_020e0cb4;

void *func_02045efc(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020def40;
    if (data_020e0cb4 != NULL) {
        func_0201510c(M2C_FIELD(data_020e0cb4, s32 *, 0x20), arg0);
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_r4 != NULL) {
        func_02088798(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02043d6c(arg0 + 0x28);
    func_02016110(arg0);
    func_020934a8(arg0);
    return arg0;
}
