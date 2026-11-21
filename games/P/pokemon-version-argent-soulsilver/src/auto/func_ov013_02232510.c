#include "m2c.h"
typedef struct {
    void (*f[5])(void *);
} Tbl;
typedef struct {
    u8 pad[4];
    u32 *reg;
    u8 pad2[0x15 - 8];
    u8 flag;
} O;
extern Tbl data_ov013_022454cc;
extern O *data_ov013_0224f564;
s32 func_ov013_0223c210(void);
void func_ov013_0222b908(void (*)(void));
void func_ov013_0222b968(s32 *, s32);
void func_ov013_02231dbc(void);
void func_ov013_022322f8(void);
void func_ov013_02232510(void) {
    s32 idx;
    Tbl t = data_ov013_022454cc;
    if (func_ov013_0223c210() != 0) {
        return;
    }
    if (data_ov013_0224f564->flag == 0) {
        *data_ov013_0224f564->reg &= 0xc1fffcff;
        func_ov013_0222b908(func_ov013_02231dbc);
    } else {
        func_ov013_0222b968(&idx, 0);
        t.f[idx]((u8 *) data_ov013_0224f564 + 8);
        func_ov013_0222b908(func_ov013_022322f8);
    }
}
