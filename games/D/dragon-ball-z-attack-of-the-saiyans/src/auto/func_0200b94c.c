#include "m2c.h"

s32 func_0208cf98(s32);                             /* extern */
extern s32 data_020af090;
extern M2C_UNK data_020af12c;

void func_0200b94c(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_020af12c + (arg0 * 4))) = func_0208cf98(data_020af090);
}
