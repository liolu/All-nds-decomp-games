/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0200e578(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0202f848(void *);                      /* extern */
M2C_UNK func_020337b0(void *);                      /* extern */
M2C_UNK func_0207e168(void *);                      /* extern */
M2C_UNK func_02081480(void *);                      /* extern */
M2C_UNK func_02092d48(void *);                      /* extern */
M2C_UNK func_020c8770(void *, void *);              /* extern */
M2C_UNK func_020c877c(void *);                      /* extern */
M2C_UNK func_020cb108(void *, void *);              /* extern */
M2C_UNK func_020cb14c(void *);                      /* extern */
M2C_UNK func_020cb3fc(void *);                      /* extern */
M2C_UNK func_020cb720(void *, void *);              /* extern */
M2C_UNK func_020cb764(void *);                      /* extern */
extern M2C_UNK data_020fbc74;
extern void *data_021154e8;
extern M2C_UNK func_0203170c;
extern M2C_UNK func_02031724;

void *func_0202f33c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fbc74;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    func_020337b0(arg0 + 8);
    func_0207e168(arg0 + 0x50);
    func_02081480(arg0 + 0x5C);
    func_02092d48(arg0 + 0x160);
    func_020c877c(arg0 + 0x260);
    func_020cb14c(arg0 + 0x274);
    func_020cb3fc(arg0 + 0x27C);
    func_020cb764(arg0 + 0x280);
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    func_0200e578(arg0 + 0x2F4, 3, 0x24, &func_02031724, &func_0203170c);
    M2C_FIELD(arg0, s8 *, 0x363)  = 0;
    M2C_FIELD(arg0, s8 *, 0x370)  = 1;
    M2C_FIELD(arg0, s16 *, 0x372) = -1;
    M2C_FIELD(arg0, s32 *, 0x588) = 0;
    func_0202f848(arg0 + 0x594);
    M2C_FIELD(arg0, s32 *, 0x600) = 0;
    M2C_FIELD(arg0, s16 *, 0x604) = 0;
    M2C_FIELD(arg0, s16 *, 0x606) = 0;
    M2C_FIELD(arg0, s16 *, 0x608) = 0;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    M2C_FIELD(arg0, s16 *, 0x60C) = 0;
    M2C_FIELD(arg0, s16 *, 0x60E) = 0;
    M2C_FIELD(arg0, s16 *, 0x610) = 0;
    M2C_FIELD(arg0, s16 *, 0x612) = 0;
    M2C_FIELD(arg0, s16 *, 0x614) = 0;
    M2C_FIELD(arg0, s16 *, 0x616) = 0;
    M2C_FIELD(arg0, s16 *, 0x618) = 0;
    M2C_FIELD(arg0, s16 *, 0x61A) = 0;
    M2C_FIELD(arg0, s16 *, 0x61C) = 0;
    M2C_FIELD(arg0, s16 *, 0x61E) = 0;
    M2C_FIELD(arg0, s16 *, 0x620) = 0;
    M2C_FIELD(arg0, s16 *, 0x622) = 0;
    M2C_FIELD(arg0, s16 *, 0x628) = 0;
    M2C_FIELD(arg0, s16 *, 0x62A) = 0;
    M2C_FIELD(arg0, s32 *, 0x630) = 0;
    M2C_FIELD(arg0, s32 *, 0x634) = 0;
    M2C_FIELD(arg0, s32 *, 0x638) = 0;
    M2C_FIELD(arg0, s32 *, 0x63C) = 0;
    M2C_FIELD(arg0, s32 *, 0x640) = 0;
    M2C_FIELD(arg0, s32 *, 0x644) = 0;
    M2C_FIELD(arg0, s32 *, 0x648) = 0;
    M2C_FIELD(arg0, s32 *, 0x64C) = 0;
    M2C_FIELD(arg0, s32 *, 0x650) = 0;
    M2C_FIELD(arg0, s32 *, 0x654) = 0;
    M2C_FIELD(arg0, s32 *, 0x658) = 0;
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    M2C_FIELD(arg0, s32 *, 0x660) = 0;
    M2C_FIELD(arg0, s32 *, 0x664) = 0;
    M2C_FIELD(arg0, s32 *, 0x668) = 0;
    M2C_FIELD(arg0, s32 *, 0x66C) = 0;
    M2C_FIELD(arg0, s32 *, 0x670) = 0;
    M2C_FIELD(arg0, s32 *, 0x674) = 0;
    M2C_FIELD(arg0, s8 *, 0x70C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x710) = 0;
    M2C_FIELD(arg0, s32 *, 0x714) = 0;
    M2C_FIELD(arg0, s32 *, 0x718) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x71C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x720) = 0;
    data_021154e8                 = arg0;
    M2C_FIELD(arg0, s8 *, 0x360)  = 0;
    M2C_FIELD(arg0, s8 *, 0x361)  = 0;
    M2C_FIELD(arg0, s8 *, 0x362)  = 0;
    func_020c8770(arg0 + 0x260, arg0);
    func_020cb108(arg0 + 0x274, arg0);
    func_020cb720(arg0 + 0x280, arg0);
    func_02001cc8(arg0 + 0x288, 0, 0x68);
    return arg0;
}
