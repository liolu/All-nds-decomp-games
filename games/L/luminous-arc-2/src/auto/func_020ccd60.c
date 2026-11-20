#include "m2c.h"

M2C_UNK func_020025fc();                            /* extern */
M2C_UNK func_02002610();                            /* extern */
M2C_UNK func_02002624();                            /* extern */
M2C_UNK func_02002648();                            /* extern */
M2C_UNK func_0200266c();                            /* extern */
M2C_UNK func_02002680();                            /* extern */
M2C_UNK func_02002694();                            /* extern */
M2C_UNK func_020026bc();                            /* extern */
M2C_UNK func_020026d0();                            /* extern */
M2C_UNK func_020026e4();                            /* extern */
M2C_UNK func_0200270c();                            /* extern */

void func_020ccd60(s32 arg0) {
    if (arg0 & 1) {
        func_020025fc();
        func_02002610();
        func_02002624();
        func_02002648();
        func_0200266c();
        func_02002680();
        func_02002694();
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_020026bc();
    func_020026d0();
    func_020026e4();
    func_0200270c();
}
