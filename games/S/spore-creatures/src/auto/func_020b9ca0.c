#include "m2c.h"

M2C_UNK func_020b5230(void *);                      /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020b9068(void *, s32);                   /* extern */
M2C_UNK func_020ba78c(void *);                             /* extern */

typedef struct {
    s32 field_00;
    s32 field_04;
    s32 field_08;
    s32 field_0c;
    s32 field_10;
    s32 field_14;
    s32 field_18;
    s32 field_1c;
    s32 field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2c;
    s32 field_30;
    s32 field_34;
    s32 field_38;
    s32 field_3c;
    s32 field_40;
    s32 field_44;
} FSi_Message;

void *func_020b9ca0(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r7;
    FSi_Message local;

    temp_r4 = func_020b6bd0();
    var_r0  = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x20) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x1C) = M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x20;
        temp_r0                               = M2C_FIELD(arg0, void **, 0x24);
        while (temp_r0 != NULL) {
            temp_r5 = M2C_FIELD(temp_r0, void **, 4);
            var_r1  = 0;
            if (M2C_FIELD(temp_r0, s32 *, 0xC) & 2) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            if (var_r1 != 0) {
                if (M2C_FIELD(arg0, void **, 0x24) == temp_r0) {
                    M2C_FIELD(arg0, void **, 0x24) = temp_r5;
                }
                func_020b9068(temp_r0, 3);
                if (temp_r5 == NULL) {
                    temp_r5 = M2C_FIELD(arg0, void **, 0x24);
                }
            }
            temp_r0 = temp_r5;
        }
    }
    var_r0 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r0 = 0;
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x8) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            temp_r5 = M2C_FIELD(arg0, void **, 0x24);
            if (temp_r5 != NULL) {
                var_r0 = 0;
                if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x10) {
                    var_r0 = 1;
                } else {
                    var_r0 = 0;
                }
                var_r7 = 0;
                if (var_r0 == 0) {
                    var_r7 = 1;
                } else {
                    var_r7 = 0;
                }
                if (var_r7 != 0) {
                    M2C_FIELD(arg0, volatile s32 *, 0x1C) = M2C_FIELD(arg0, volatile s32 *, 0x1C) | 0x10;
                }
                func_020b6be4(temp_r4);
                if (var_r7 != 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x58) & 0x200) {
                        M2C_FIELD(arg0, void (**)(void *, s32), 0x54)(temp_r5, 9);
                    }
                }
                temp_r4                                 = func_020b6bd0();
                M2C_FIELD(temp_r5, volatile s32 *, 0xC) = M2C_FIELD(temp_r5, volatile s32 *, 0xC) | 0x40;
                var_r0                                  = 0;
                if (M2C_FIELD(temp_r5, volatile s32 *, 0xC) & 4) {
                    var_r0 = 1;
                } else {
                    var_r0 = 0;
                }
                if (var_r0 != 0) {
                    func_020b5230(temp_r5 + 0x18);
                    func_020b6be4(temp_r4);
                    return 0;
                }
                func_020b6be4(temp_r4);
                return temp_r5;
            }
        }
    }
    var_r0 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x10) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x1C) = M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x10;
        if (M2C_FIELD(arg0, s32 *, 0x58) & 0x400) {
            func_020ba78c(&local);
            M2C_FIELD(&local, void **, 8) = arg0;
            M2C_FIELD(arg0, void (**)(void *, s32), 0x54)(&local, 0xA);
        }
    }
    var_r0 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x40) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x1C) = (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~0x40) | 0x8;
        func_020b5230(arg0 + 0x14);
    }
    func_020b6be4(temp_r4);
    return 0;
}
