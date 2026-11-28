#include "m2c.h"

M2C_UNK func_0209157c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020995b4(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_02099610(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02099b8c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e6424;
extern M2C_UNK data_020e7aa4;
extern M2C_UNK data_020e8820;
extern M2C_UNK data_020e884c;
extern M2C_UNK data_020e8858;
extern M2C_UNK data_020e886c;
extern M2C_UNK data_020e887d;
extern M2C_UNK data_020e8890;
extern M2C_UNK data_020e88a4;
extern M2C_UNK data_020e88b5;
extern M2C_UNK data_020e88c8;
extern M2C_UNK data_020e88da;
extern M2C_UNK data_020e88eb;
extern M2C_UNK data_020e88f8;
extern M2C_UNK data_020e890c;
extern M2C_UNK data_020e892f;
extern M2C_UNK data_020e8947;
extern M2C_UNK data_020e8954;
extern M2C_UNK data_020e895a;
extern M2C_UNK data_020e8962;
extern M2C_UNK data_020e896a;
extern M2C_UNK data_02107a84;
extern M2C_UNK data_02107ad4;
extern M2C_UNK data_02107ae0;
extern M2C_UNK data_02107aec;
extern M2C_UNK data_02107af8;
extern M2C_UNK data_02107b04;
extern M2C_UNK data_02107b10;
extern M2C_UNK data_02107b1c;
extern M2C_UNK data_02107b28;
extern M2C_UNK data_02107b34;
extern M2C_UNK data_02107b40;
extern M2C_UNK data_02107b4c;
extern M2C_UNK data_02107b58;
extern M2C_UNK data_02107b64;
extern M2C_UNK data_02107b70;
extern M2C_UNK data_02107b7c;
extern M2C_UNK data_02107b88;
extern M2C_UNK data_02107b94;
extern M2C_UNK data_02107ba0;
extern M2C_UNK data_02107bac;
extern M2C_UNK data_02107bcc;
extern M2C_UNK data_02107bec;
extern M2C_UNK data_02107c0c;
extern M2C_UNK data_02107c2c;
extern M2C_UNK data_02107c4c;
extern M2C_UNK data_02107c6c;
extern M2C_UNK data_02107c8c;
extern M2C_UNK data_02107cac;
extern M2C_UNK data_02107ccc;
extern M2C_UNK data_02107cec;
extern M2C_UNK data_02107d0c;
extern M2C_UNK data_02107d2c;
extern M2C_UNK data_02107d4c;
extern M2C_UNK data_02107d6c;
extern M2C_UNK data_02107d8c;
extern M2C_UNK data_02107dac;
extern M2C_UNK data_02107dcc;
extern M2C_UNK func_020997a4;
extern M2C_UNK func_020bdbe0;
extern M2C_UNK func_020cca58;
extern M2C_UNK func_020d157c;
extern M2C_UNK func_020d1594;
extern M2C_UNK func_020d15a4;
extern M2C_UNK func_020d1704;
extern M2C_UNK func_020d1730;
extern M2C_UNK func_020d17dc;
extern M2C_UNK func_020d1808;
extern M2C_UNK func_020d1834;
extern M2C_UNK func_020d18c8;
extern M2C_UNK func_020d1900;
extern M2C_UNK func_020d1938;
extern M2C_UNK func_020d1970;
extern M2C_UNK func_020d19a8;
extern M2C_UNK func_020d19e0;
extern M2C_UNK func_020d1a18;
extern M2C_UNK func_020d1a50;
extern M2C_UNK func_020d1a88;
extern M2C_UNK func_020d1a98;

s32 func_020d0c74(s32 arg0) {
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x44) & 1)) {
        func_02099610(&data_02107dcc, &data_020e884c);
        func_0209157c(&data_02107dcc, &func_020997a4, &data_02107b94);
        M2C_FIELD(&data_02107a84, s32 *, 0x44) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x44) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x2C) & 1)) {
        func_020995b4(&data_02107c4c, &data_02107dcc, 1, 0, &data_020e8858, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1C8) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x1E0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1E4) = &func_020d18c8;
        func_0209157c(&data_02107c4c, &func_020cca58, &data_02107af8);
        M2C_FIELD(&data_02107a84, s32 *, 0x2C) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x2C) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x14) & 1)) {
        func_020995b4(&data_02107c8c, &data_02107dcc, 1, 0, &data_020e886c, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x208) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x220)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x224) = &func_020d1900;
        func_0209157c(&data_02107c8c, &func_020cca58, &data_02107ba0);
        M2C_FIELD(&data_02107a84, s32 *, 0x14) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x14) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0) & 1)) {
        func_020995b4(&data_02107ccc, &data_02107dcc, 1, 0, &data_020e887d, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x248) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x260)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x264) = &func_020d1938;
        func_0209157c(&data_02107ccc, &func_020cca58, &data_02107b10);
        M2C_FIELD(&data_02107a84, s32 *, 0) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x34) & 1)) {
        func_020995b4(&data_02107cec, &data_02107dcc, 1, 0, &data_020e8890, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x268) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x280)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x284) = &func_020d1970;
        func_0209157c(&data_02107cec, &func_020cca58, &data_02107b28);
        M2C_FIELD(&data_02107a84, s32 *, 0x34) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x34) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x38) & 1)) {
        func_020995b4(&data_02107d4c, &data_02107dcc, 1, 0, &data_020e88a4, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2C8) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x2E0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2E4) = &func_020d19a8;
        func_0209157c(&data_02107d4c, &func_020cca58, &data_02107b4c);
        M2C_FIELD(&data_02107a84, s32 *, 0x38) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x38) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x3C) & 1)) {
        func_020995b4(&data_02107d6c, &data_02107dcc, 1, 0, &data_020e88b5, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2E8) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x300)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x304) = &func_020d19e0;
        func_0209157c(&data_02107d6c, &func_020cca58, &data_02107b58);
        M2C_FIELD(&data_02107a84, s32 *, 0x3C) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x3C) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 8) & 1)) {
        func_020995b4(&data_02107bac, &data_02107dcc, 1, 0, &data_020e88c8, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x128) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x140)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x144) = &func_020d1a18;
        func_0209157c(&data_02107bac, &func_020cca58, &data_02107b7c);
        M2C_FIELD(&data_02107a84, s32 *, 8) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 8) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 4) & 1)) {
        func_020995b4(&data_02107bcc, &data_02107dcc, 1, 0, &data_020e88da, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x148) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x160)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x164) = &func_020d1a50;
        func_0209157c(&data_02107bcc, &func_020cca58, &data_02107ad4);
        M2C_FIELD(&data_02107a84, s32 *, 4) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 4) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0xC) & 1)) {
        func_020995b4(&data_02107c2c, &data_02107dcc, 1, 0, &data_020e88eb, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1A8) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x1C0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1C4) = &func_020d1a88;
        func_0209157c(&data_02107c2c, &func_020cca58, &data_02107aec);
        M2C_FIELD(&data_02107a84, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0xC) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x28) & 1)) {
        func_020995b4(&data_02107cac, &data_02107dcc, 1, 0, &data_020e88f8, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x228) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x240)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x244) = &func_020d1a98;
        func_0209157c(&data_02107cac, &func_020cca58, &data_02107b04);
        M2C_FIELD(&data_02107a84, s32 *, 0x28) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x28) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x24) & 1)) {
        func_020995b4(&data_02107d2c, &data_02107dcc, 1, 0, &data_020e890c, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2A8) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x2C0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2C4) = &func_020d15a4;
        func_0209157c(&data_02107d2c, &func_020cca58, &data_02107b34);
        M2C_FIELD(&data_02107a84, s32 *, 0x24) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x24) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x18) & 1)) {
        func_020995b4(&data_02107d8c, &data_02107dcc, 1, 0, &data_020e892f, 3);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x308) = &data_020e7aa4;
        M2C_FIELD(&data_02107a84, s32 *, 0x320)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x324) = &func_020d1594;
        func_0209157c(&data_02107d8c, &func_020cca58, &data_02107b64);
        M2C_FIELD(&data_02107a84, s32 *, 0x18) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x18) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x20) & 1)) {
        func_020995b4(&data_02107c0c, &data_02107dcc, 1, 0, &data_020e8947, 0xC);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x188) = &data_020e6424;
        M2C_FIELD(&data_02107a84, s32 *, 0x1A0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1A4) = &func_020d1704;
        func_0209157c(&data_02107c0c, &func_020bdbe0, &data_02107ae0);
        M2C_FIELD(&data_02107a84, s32 *, 0x20) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x20) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x30) & 1)) {
        func_020995b4(&data_02107d0c, &data_02107dcc, 1, 0, &data_020e8954, 0xB);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x288) = &data_020e8820;
        M2C_FIELD(&data_02107a84, s32 *, 0x2A0)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x2A4) = &func_020d1730;
        func_0209157c(&data_02107d0c, &func_020d157c, &data_02107b1c);
        M2C_FIELD(&data_02107a84, s32 *, 0x30) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x30) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x40) & 1)) {
        func_020995b4(&data_02107bec, &data_02107dcc, 1, 0, &data_020e895a, 0xB);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x168) = &data_020e8820;
        M2C_FIELD(&data_02107a84, s32 *, 0x180)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x184) = &func_020d17dc;
        func_0209157c(&data_02107bec, &func_020d157c, &data_02107b88);
        M2C_FIELD(&data_02107a84, s32 *, 0x40) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x40) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x4C) & 1)) {
        func_020995b4(&data_02107dac, &data_02107dcc, 1, 0, &data_020e8962, 0xB);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x328) = &data_020e8820;
        M2C_FIELD(&data_02107a84, s32 *, 0x340)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x344) = &func_020d1808;
        func_0209157c(&data_02107dac, &func_020d157c, &data_02107b40);
        M2C_FIELD(&data_02107a84, s32 *, 0x4C) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x4C) | 1);
    }
    if (!(M2C_FIELD(&data_02107a84, s32 *, 0x10) & 1)) {
        func_020995b4(&data_02107c6c, &data_02107dcc, 1, 0, &data_020e896a, 0xB);
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x1E8) = &data_020e8820;
        M2C_FIELD(&data_02107a84, s32 *, 0x200)      = 0;
        M2C_FIELD(&data_02107a84, M2C_UNK **, 0x204) = &func_020d1834;
        func_0209157c(&data_02107c6c, &func_020d157c, &data_02107b70);
        M2C_FIELD(&data_02107a84, s32 *, 0x10) = (s32) (M2C_FIELD(&data_02107a84, s32 *, 0x10) | 1);
    }
    func_02099b8c(&data_02107dcc);
    return arg0;
}
