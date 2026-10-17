/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202944c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206b388();                            /* extern */
s32 func_0206b3fc(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0206ba5c(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_0206c01c(M2C_UNK *);                       /* extern */
extern M2C_UNK func_0202bc0c;
extern M2C_UNK func_0202bc28;
extern M2C_UNK func_0202bc44;
extern M2C_UNK func_0202bc60;
extern M2C_UNK func_0202bc7c;

s32 func_0202bb14(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4F6) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_0206b3fc(M2C_FIELD(arg0, s32 *, 0x5D0), 2);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x5CC) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        func_0202944c(arg0, 1);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = func_0206c01c(&func_0202bc7c);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 2) {
        func_0206b388();
        M2C_FIELD(arg0, s32 *, 0x5CC) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        func_0202944c(arg0, 1);
        return 0;
    }
    func_0206ba5c(0xC, &func_0202bc60, 0);
    func_0206ba5c(0xD, &func_0202bc44, 0);
    func_0206ba5c(0xE, &func_0202bc28, 0);
    func_0206ba5c(0xF, &func_0202bc0c, 0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
    return 1;
}
