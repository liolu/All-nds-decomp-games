/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_0201f640();                            /* extern */
M2C_UNK func_02027a20();                            /* extern */
M2C_UNK func_0202f014(void *);                      /* extern */
M2C_UNK func_0203232c(void *);                      /* extern */
M2C_UNK func_02037dc0();                            /* extern */
M2C_UNK func_02039d9c();                            /* extern */
M2C_UNK func_020464a8();                            /* extern */
M2C_UNK func_020482e8();                            /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bf1e0;

void *func_02023830(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf1e0;
    func_02002744();
    func_02039d9c();
    func_020464a8();
    func_02037dc0();
    func_0201f640();
    func_02027a20();
    func_020482e8();
    temp_r4 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r4 != NULL) {
        func_0202f014(temp_r4);
        func_0207b040(temp_r4);
    }
    func_0203232c(arg0);
    func_0207b040(arg0);
    return arg0;
}
