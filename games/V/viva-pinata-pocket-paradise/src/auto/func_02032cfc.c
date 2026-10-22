#include "m2c.h"

M2C_UNK func_02084958(s32 *, s32);                  /* extern */
extern s32 data_027e000c;
extern s32 data_027e0014;
extern s32 data_027e0018;
extern s32 data_027e01a8;
extern s32 *data_027e01fc;
extern s32 data_027e0214;

s32 func_02032cfc(void) {
    func_02084958(&data_027e0214, 4);
    func_02084958(&data_027e01a8, 4);
    func_02084958(&data_027e000c, 4);
    func_02084958(&data_027e0014, 4);
    func_02084958(&data_027e0018, 4);
    func_02084958(data_027e01fc, (s32) (data_027e0214 * data_027e01a8) >> 1);
    return 1;
}
