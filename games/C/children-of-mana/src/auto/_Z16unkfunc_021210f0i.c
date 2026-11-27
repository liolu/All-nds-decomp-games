/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0210b560;
extern M2C_UNK data_0210bab4;
extern M2C_UNK data_0210babc;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *, s32);
extern s32 data_02129ed0;

void _Z16unkfunc_021210f0i(s32 arg0) {
    if (data_02129ec8 != NULL) {
        data_02129ec8(&data_0210bab4, *((M2C_UNK *) ((s8 *) &data_0210b560 + (data_02129ed0 * 4))));
    }
    data_02129ed0 = arg0;
    if (data_02129ec8 == NULL) {
        return;
    }
    data_02129ec8(&data_0210babc, *((M2C_UNK *) ((s8 *) &data_0210b560 + (arg0 * 4))));
}
