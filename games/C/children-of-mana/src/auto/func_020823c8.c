/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, u16);   /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_021006b8;
extern M2C_UNK data_02100df8;

void func_020823c8(void *arg0) {
    u16 var_r4;
    void *temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x300), u8 *, 0xFC) != 0) {
        temp_r0                          = func_020aac90();
        M2C_FIELD(temp_r0, u16 *, 0x45E) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x45E) + 1);
        func_020aac90();
        if ((u32) M2C_FIELD(func_020aac90(), u16 *, 0x45E) > 0x63U) {
            var_r4 = 0x63;
        } else {
            var_r4 = M2C_FIELD(func_020aac90(), u16 *, 0x45E);
        }
        M2C_FIELD(func_020aac90(), u16 *, 0x45E) = var_r4;
    }
    func_0200e8c8(&data_02100df8, &data_021006b8, M2C_FIELD(func_020aac90(), u16 *, 0x45E));
}
