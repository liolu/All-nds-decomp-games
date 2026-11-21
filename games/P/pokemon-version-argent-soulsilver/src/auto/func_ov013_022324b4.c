#include "m2c.h"

typedef struct {
    u8 pad[0x15];
    u8 mode;
} Ctx;

extern Ctx *data_ov013_0224f564;

u8 func_ov013_0223c1fc(void);
void func_ov013_0223abd8(s32 v);
void func_ov013_0223c1b8(void);
void func_ov013_0222b908(void *f);
extern void func_ov013_02232510(void);

void func_ov013_022324b4(void) {
    data_ov013_0224f564->mode = func_ov013_0223c1fc();
    switch (data_ov013_0224f564->mode) {
        case 0:
            func_ov013_0223abd8(7);
            break;
        case 1:
            func_ov013_0223abd8(14);
            break;
        default:
            return;
    }
    func_ov013_0223c1b8();
    func_ov013_0222b908(func_ov013_02232510);
}
