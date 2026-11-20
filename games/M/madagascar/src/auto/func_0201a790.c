/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_0201a474(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201c1c4(void *);                      /* extern */
M2C_UNK func_020241fc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
M2C_UNK func_020386fc(s32, s32);                    /* extern */
s32 func_02038704();                                /* extern */
s32 func_02038c6c();                                /* extern */
extern M2C_UNK data_0207f6d8;
extern M2C_UNK data_0207f714;
extern M2C_UNK data_02088174;
extern M2C_UNK data_0208817c;

void func_0201a790(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r5;
    void *temp_r2;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x12) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 3:
            temp_r2 = M2C_FIELD(arg0, void **, 0xCC);
            if (M2C_FIELD(temp_r2, u8 *, 4) != 0) {
                temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x134), s32 *, 0xA0);
                func_02038c6c();
                if (temp_r5 > func_02038704()) {
                    func_02002720(&data_0207f6d8);
                    func_020386fc(func_02038c6c(), M2C_FIELD(M2C_FIELD(arg0, void **, 0x134), s32 *, 0xA0));
                    func_0201a474(arg0, 1);
                    func_020241fc(func_02024654(), &data_02088174, 0x40);
                    return;
                }
                func_02002720(&data_0207f714);
                func_0201a474(arg0, 2);
                func_020241fc(func_02024654(), &data_0208817c, 0x40);
                return;
            }
            if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x134), s32 *, 0xA0) >= (s32) M2C_FIELD(temp_r2, s32 *, 0)) {
                func_02002720(&data_0207f6d8);
                func_0201a474(arg0, 1);
                func_020241fc(func_02024654(), &data_02088174, 0x40);
                return;
            }
            func_02002720(&data_0207f714);
            func_0201a474(arg0, 2);
            func_020241fc(func_02024654(), &data_0208817c, 0x40);
            return;
        case 4:
            if (M2C_FIELD(arg0, s32 *, 0x1C4) != 0) {
                return;
            }
            func_0201a474(arg0, 3);
            func_0201c1c4(M2C_FIELD(arg0, void **, 0x134));
            func_020241fc(func_02024654(), &data_0208817c, 0x40);
            return;
    }
}
