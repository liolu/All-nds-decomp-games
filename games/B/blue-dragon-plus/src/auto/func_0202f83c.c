#include "engine.h"
#include "m2c.h"

void func_0201f488(M2C_UNK, M2C_UNK);
M2C_UNK func_0201f500(M2C_UNK, M2C_UNK);
M2C_UNK func_0201fd08(M2C_UNK, M2C_UNK);
void func_0201fd58(M2C_UNK, M2C_UNK);
void func_0202f6cc(M2C_UNK);
M2C_UNK func_0202f960(M2C_UNK);
void func_0202f99c(void);

void func_0202f83c(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        func_0202f6cc(arg0);
        return;
    }
    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC)) {
        do {
            temp_r0 = func_0201f500(arg0 + 4, 0);
            var_r8  = func_0201f500(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r8, M2C_UNK(**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r8 + 0x20, M2C_FIELD(var_r8, s32 *, 8), M2C_FIELD(var_r8, s32 *, 0x10),
                                M2C_FIELD(var_r8, s32 *, 0x14));
                        var_r7 = 1;
                    }
                    var_r8 = func_0201f500(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            func_0201f488(arg0 + 4, temp_r0);
        } while (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC));
    }
    func_0201fd58(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (var_r7 != 0) {
        func_0202f99c();
    }
    func_0201fd08(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC));
    func_0202f960(arg0);
}
