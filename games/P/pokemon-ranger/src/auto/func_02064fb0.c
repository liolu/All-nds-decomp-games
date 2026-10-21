#include "m2c.h"

M2C_UNK func_020b20cc(void *);                      /* extern */
extern M2C_UNK data_020e820c;
extern void **data_020f4584;

void *func_02064fb0(void *arg0) {
    void *temp_r1;
    void *temp_r1_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e820c;
    if (*data_020f4584 == arg0) {
        *data_020f4584 = M2C_FIELD(arg0, void **, 0x3C);
    } else {
        temp_r1 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
        }
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x3C);
        if (temp_r1_2 != NULL) {
            M2C_FIELD(temp_r1_2, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
        }
    }
    func_020b20cc(arg0);
    return arg0;
}
