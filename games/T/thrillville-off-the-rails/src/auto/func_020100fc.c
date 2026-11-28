/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248f0();                            /* extern */
s32 func_02024ad4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200fa68(M2C_UNK);                     /* extern */
M2C_UNK func_0200fdb4();                            /* extern */
M2C_UNK func_0200fee4();                            /* extern */
M2C_UNK func_020102cc(M2C_UNK *);                   /* extern */
extern s32 data_020eba18;
extern s32 data_020eba1c;
extern s32 data_020eba20;
extern M2C_UNK data_020ebb00;
extern M2C_UNK func_0200fdf4;
extern M2C_UNK func_0200fe28;
extern M2C_UNK func_0200fea8;

void func_020100fc(void) {
    if (data_020eba18 != 0) {
        return;
    }
    data_020eba18 = 1;
    func_0200fdb4();
    data_020eba1c = 0;
    func_020248f0();
    do {

    } while (func_02024ad4(0xD, 1) == 0);
    func_02024afc(0xD, &func_0200fea8);
    func_0200fee4();
    func_02024afc(0xD, NULL);
    func_02024afc(0xD, &func_0200fe28);
    data_020eba20 = 0;
    func_020102cc(&data_020ebb00);
    func_02024afc(0x11, &func_0200fdf4);
    func_0200fa68(0);
}
