#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_02036e60(s32, void *, void *, M2C_UNK); /* extern */
M2C_UNK func_020374a0();                            /* extern */
s32 func_02038050(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_02038e80(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
void *func_02053a7c(s32);                           /* extern */
s32 func_02053d3c(s32);                             /* extern */
M2C_UNK func_02054ea0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02055d00(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02055f54(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0205c308(s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0205d874(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0205dafc(s32);                         /* extern */
extern void *data_0209b96c;
extern M2C_UNK func_0203920c;

void func_0203ecf8(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 var_r3;
    s32 var_r3_2;
    u16 temp_r0;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r7;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r9 = func_02053a7c(arg1);
    func_02053a7c(arg2);
    if (temp_r9 == NULL) {
        return;
    }
    if (func_02053d3c(arg1) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(temp_r9, u16 *, 0x28);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 7:                                         /* switch 1 */
            switch (arg3) {                             /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    if (arg5 == 0x19) {
                        temp_r10  = func_02053a7c(arg1);
                        temp_r9_2 = func_02053a7c(arg2);
                        if (func_02038050(arg0, arg3, arg4, 0) != 0) {
                            temp_r0_2 = func_02038050(arg0, arg3, arg4, 1);
                            if (temp_r9_2 != NULL) {
                                func_02036e60(temp_r0_2, temp_r10 + 0x34, temp_r9_2 + 0x34, 1);
                            }
                            if ((arg6 == 0) && (func_02038050(arg0, arg3, arg4, 4) > 0)) {
                                func_02038050(arg0, arg3, arg4, 4);
                                func_020374a0();
                            }
                        }
                        func_0205d874(arg2, 1, 2, 0 - func_0205c308(arg1, arg2, 1, 0x64, 0, 0), 0);
                        return;
                    }
                    func_0205dafc(arg2);
                    if (data_0209b96c == NULL) {
                        var_r3 = 0;
                    } else {
                        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
                    }
                    temp_r0_3 = func_0200bcbc(data_0209b96c, &func_0203920c, 0, var_r3);
                    if (temp_r0_3 != NULL) {
                        M2C_FIELD(temp_r0_3, s8 *, 0x14)  = 0;
                        M2C_FIELD(temp_r0_3, s8 *, 0x15)  = 9;
                        M2C_FIELD(temp_r0_3, s32 *, 0x18) = arg2;
                    }
                    func_02038e80(0xF, arg2, 0x4D1, 0, 1);
                    return;
                case 1:                                     /* switch 2 */
                    if (func_02038050(arg0, arg3, arg4, 0) != 0) {
                        func_02036e60(func_02038050(arg0, arg3, arg4, 1), NULL, temp_r9 + 0x34, 1);
                        if (func_02038050(arg0, arg3, arg4, 4) > 0) {
                            func_02038050(arg0, arg3, arg4, 4);
                            func_020374a0();
                        }
                    }
                    func_02054ea0(arg1, 0x14, 0, -1, 1);
                    return;
                case 2:                                     /* switch 2 */
                    if (func_02055d00(arg2, 4, 0x32, 0) != 0) {
                        func_02055f54(arg2, 4, 0, 0xFF, 0);
                    }
                    func_0205d874(arg2, 1, 2, -1, 0);
                    return;
            }
            break;
        case 8:                                         /* switch 1 */
            switch (arg3) {                             /* switch 3; irregular */
                case 0:                                     /* switch 3 */
                case 1:                                     /* switch 3 */
                    if (arg5 == 0x19) {
                        temp_r10_2 = func_02053a7c(arg1);
                        temp_r9_3  = func_02053a7c(arg2);
                        if (func_02038050(arg0, arg3, arg4, 0) != 0) {
                            temp_r0_4 = func_02038050(arg0, arg3, arg4, 1);
                            if (temp_r9_3 != NULL) {
                                func_02036e60(temp_r0_4, temp_r10_2 + 0x34, temp_r9_3 + 0x34, 1);
                            }
                            if ((arg6 == 0) && (func_02038050(arg0, arg3, arg4, 4) > 0)) {
                                func_02038050(arg0, arg3, arg4, 4);
                                func_020374a0();
                            }
                        }
                        func_0205d874(arg2, 1, 2, 0 - func_0205c308(arg1, arg2, 1, 0x64, 0, 0), 0);
                        return;
                    }
                    func_0205dafc(arg2);
                    if (data_0209b96c == NULL) {
                        var_r3_2 = 0;
                    } else {
                        var_r3_2 = M2C_FIELD(data_0209b96c, s32 *, 8);
                    }
                    temp_r0_5 = func_0200bcbc(data_0209b96c, &func_0203920c, 0, var_r3_2);
                    if (temp_r0_5 != NULL) {
                        M2C_FIELD(temp_r0_5, s8 *, 0x14)  = 0;
                        M2C_FIELD(temp_r0_5, s8 *, 0x15)  = 9;
                        M2C_FIELD(temp_r0_5, s32 *, 0x18) = arg2;
                    }
                    func_02038e80(0xF, arg2, 0x4D1, 0, 1);
                    return;
                case 2:                                     /* switch 3 */
                    temp_r9_4 = func_02053a7c(arg1);
                    temp_r7   = func_02053a7c(arg2);
                    if (func_02038050(arg0, arg3, arg4, 0) != 0) {
                        temp_r0_6 = func_02038050(arg0, arg3, arg4, 1);
                        if (temp_r7 != NULL) {
                            func_02036e60(temp_r0_6, temp_r9_4 + 0x34, temp_r7 + 0x34, 1);
                        }
                        if ((arg6 == 0) && (func_02038050(arg0, arg3, arg4, 4) > 0)) {
                            func_02038050(arg0, arg3, arg4, 4);
                            func_020374a0();
                        }
                    }
                    if (func_02055d00(arg2, 3, 0x28, 0) != 0) {
                        func_02055f54(arg2, 3, 0, 0xFF, 0);
                    }
                    func_0205d874(arg2, 1, 2, -1, 0);
                    return;
            }
            break;
    }
}
