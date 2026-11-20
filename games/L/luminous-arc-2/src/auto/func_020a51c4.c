#include "m2c.h"

s32 func_0205919c();                                /* extern */
M2C_UNK func_0207f500(s32, s32);                    /* extern */
s32 func_0207f50c();                                /* extern */
s32 func_0207f640();                                /* extern */
M2C_UNK func_0207f664();                            /* extern */
M2C_UNK func_0207f990();                            /* extern */

s32 func_020a51c4(void) {
    if (func_0205919c() != 0) {
        func_0205919c();
        if (func_0207f50c() != 0) {
            func_0205919c();
            func_0207f990();
            return 1;
        }
    }
    func_0207f500(func_0205919c(), 0x594C3250);
    func_0205919c();
    func_0207f990();
    func_0205919c();
    if (func_0207f640() != 0) {
        func_0205919c();
        func_0207f664();
        func_0205919c();
        func_0207f990();
    }
    return 0;
}
