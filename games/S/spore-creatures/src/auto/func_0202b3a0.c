#include "m2c.h"

M2C_UNK func_02001f60(void *);                      /* extern */
M2C_UNK func_02006b84(void *);                      /* extern */
M2C_UNK func_02014ee4(void *);                      /* extern */
M2C_UNK func_02019a04(void *);                      /* extern */
M2C_UNK func_0202b38c(void *);                      /* extern */
M2C_UNK func_0202c718(void *);                      /* extern */
M2C_UNK func_0202c7a4(void *);                      /* extern */
M2C_UNK func_0202c7e8(void *);                      /* extern */
M2C_UNK func_020387e8(void *);                      /* extern */
M2C_UNK func_02043640(void *);                      /* extern */
M2C_UNK func_02045cb8(M2C_UNK);                     /* extern */
M2C_UNK func_02073664(void *);                      /* extern */
M2C_UNK func_02073da0(void *);                      /* extern */
M2C_UNK func_02079dd8(void *);                      /* extern */
M2C_UNK func_0208f560(void *);                      /* extern */
M2C_UNK func_0208fce8(void *);                      /* extern */
M2C_UNK func_02090c98(M2C_UNK);                     /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_0209d270(void *);                      /* extern */
M2C_UNK func_0209dc50(void *);                      /* extern */
M2C_UNK func_020cfb60(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *)); /* extern */
M2C_UNK func_ov003_02140efc(void *);                /* extern */

void *func_0202b3a0(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *var_r6;
    void *var_r6_2;

    func_02045cb8(1);
    func_02079dd8(M2C_FIELD(arg0, void **, 0x10));
    func_02090c98(1);
    func_02001f60(arg0 + 0xF8);
    func_0202c7a4(arg0 + 0xEC);
    func_0209d270(arg0 + 0xDC);
    func_0208fce8(arg0 + 0xD0);
    func_0208f560(arg0 + 0xA0);
    func_020cfb60(arg0 + 0x88, 2, 0xC, func_0202b38c);
    func_02043640(arg0 + 0x68);
    func_020cfb60(arg0 + 0x28, 2, 0x20, func_02043640);
    temp_r4 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r4 != NULL) {
        func_0202c718(temp_r4);
        func_020934a8(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r4_2 != NULL) {
        func_02014ee4(temp_r4_2);
        func_0202c7e8(temp_r4_2 + 0x400);
        func_020934a8(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r4_3 != NULL) {
        func_02019a04(temp_r4_3);
        func_020934a8(temp_r4_3);
    }
    temp_r4_4 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r4_4 != NULL) {
        func_ov003_02140efc(temp_r4_4);
        func_020934a8(temp_r4_4);
    }
    temp_r4_5 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r4_5 != NULL) {
        func_0209dc50(temp_r4_5);
        func_020934a8(temp_r4_5);
    }
    temp_r4_6 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r4_6 != NULL) {
        func_02079dd8(temp_r4_6);
        func_020934a8(temp_r4_6);
    }
    temp_r4_7 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r4_7 != NULL) {
        func_02073664(temp_r4_7);
        func_02073da0(temp_r4_7 + 0xD8);
        if (M2C_FIELD(temp_r4_7, s32 *, 0xC0) != 0) {
            var_r6 = M2C_FIELD(temp_r4_7, void **, 0xC4);
        } else {
            var_r6 = M2C_FIELD(temp_r4_7, void **, 0xC8);
        }
        if (var_r6 != M2C_FIELD(temp_r4_7, void **, 0xC8)) {
            do {
                temp_r0 = M2C_FIELD(var_r6, void ***, 0);
                if (temp_r0 != NULL) {
                    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
                }
                var_r6 = M2C_FIELD(var_r6, void **, 4);
            } while (var_r6 != M2C_FIELD(temp_r4_7, void **, 0xC8));
        }
        if (M2C_FIELD(temp_r4_7, s32 *, 0xC0) != 0) {
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r4_7, void **, 0xC8), void **, 8), void **, 4) =
                (void *) M2C_FIELD(temp_r4_7, void **, 0xCC);
            M2C_FIELD(M2C_FIELD(temp_r4_7, void **, 0xC8), s32 *, 8) = 0;
            M2C_FIELD(temp_r4_7, void **, 0xCC)                      = (void *) M2C_FIELD(temp_r4_7, void **, 0xC4);
            M2C_FIELD(temp_r4_7, s32 *, 0xC0)                        = 0;
            M2C_FIELD(temp_r4_7, void **, 0xC4)                      = NULL;
        }
        if (M2C_FIELD(temp_r4_7, s32 *, 0x54) != 0) {
            var_r6_2 = M2C_FIELD(temp_r4_7, void **, 0x58);
        } else {
            var_r6_2 = M2C_FIELD(temp_r4_7, void **, 0x5C);
        }
        if (var_r6_2 != M2C_FIELD(temp_r4_7, void **, 0x5C)) {
            do {
                temp_r0_2 = M2C_FIELD(var_r6_2, void ***, 0);
                if (temp_r0_2 != NULL) {
                    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
                }
                var_r6_2 = M2C_FIELD(var_r6_2, void **, 4);
            } while (var_r6_2 != M2C_FIELD(temp_r4_7, void **, 0x5C));
        }
        if (M2C_FIELD(temp_r4_7, s32 *, 0x54) != 0) {
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r4_7, void **, 0x5C), void **, 8), void **, 4) =
                (void *) M2C_FIELD(temp_r4_7, void **, 0x60);
            M2C_FIELD(M2C_FIELD(temp_r4_7, void **, 0x5C), s32 *, 8) = 0;
            M2C_FIELD(temp_r4_7, void **, 0x60)                      = (void *) M2C_FIELD(temp_r4_7, void **, 0x58);
            M2C_FIELD(temp_r4_7, s32 *, 0x54)                        = 0;
            M2C_FIELD(temp_r4_7, void **, 0x58)                      = NULL;
        }
        func_020934a8(temp_r4_7);
    }
    temp_r4_8 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4_8 != NULL) {
        func_02006b84(temp_r4_8);
        func_020934a8(temp_r4_8);
    }
    temp_r4_9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4_9 != NULL) {
        func_020387e8(temp_r4_9);
        func_020934a8(temp_r4_9);
    }
    return arg0;
}
