#include "m2c.h"

M2C_UNK func_ov123_020ce918(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov123_020df0f8;
extern M2C_UNK data_ov123_020e47d4;
extern M2C_UNK data_ov123_020e47dc;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov123_020d97f4(void) {
    func_ov123_020ce918(&data_ov123_020e47dc);
    M2C_FIELD(&data_ov123_020e47d4, M2C_UNK **, 8) = &data_ov123_020df0f8;
}
