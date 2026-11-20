/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201c768(void *);                      /* extern */
M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */
extern M2C_UNK data_0208251c;
extern s32 data_020be97c;
extern s32 data_020cf83c;

void func_0201c584(void *arg0) {
    s32 temp_r5;

    if (data_020cf83c == 1) {
        temp_r5 = data_020be97c;
        if (temp_r5 != 0) {
            func_020242d4(func_02024654(), temp_r5, 0);
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0x10) == M2C_FIELD(&data_0208251c, s32 *, 0)) &&
        (M2C_FIELD(arg0, s32 *, 0x14) == M2C_FIELD(&data_0208251c, s32 *, 4))) {
        return;
    }
    func_0201c768(arg0);
}
