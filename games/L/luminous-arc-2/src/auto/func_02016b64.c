#include "m2c.h"

s32 func_02016af4(s32, s32, s32);
s32 func_02006be0(void);
void func_02006bf4(s32 arg0);
extern M2C_UNK data_02150880;

s32 func_02016b64(s16 param_1, s16 param_2) {
    s32 saved;

    saved = func_02006be0();
    if (*(u8 *) (*(u8 **) ((u8 *) &data_02150880 + 8) + 0x50D) != 0) {
        func_02006bf4(saved);
        return 0;
    }
    if (func_02016af4(param_1, 8, param_2) == 0) {
        func_02006bf4(saved);
        return 0;
    }
    *(s16 *) (*(u8 **) ((u8 *) &data_02150880 + 8) + 0x10)  = param_2;
    *(s16 *) (*(u8 **) ((u8 *) &data_02150880 + 8) + 0x500) = param_1;
    *(s16 *) (*(u8 **) ((u8 *) &data_02150880 + 8) + 0x502) = 8;
    func_02006bf4(saved);
    return 1;
}
