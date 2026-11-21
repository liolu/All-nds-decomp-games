#include "m2c.h"

typedef struct {
    u8 pad0[0x64A];
    u16 h64a;
    u8 pad1[0xA90 - 0x64C];
    u8 state;
    u8 pad2[0xAB4 - 0xA91];
    u8 buf[1];
} Game;

extern Game *data_ov013_0224f5e8;

u16 func_ov013_0223d47c(void);
void func_ov013_0223cb54(void *, u16);
s32 func_ov013_0223d490(s32);
s32 func_ov013_0223cfa0(void);
void func_ov013_0223d008(void);
void func_ov013_0223d100(void);
s32 func_ov013_0223df48(void);
s32 func_ov013_0223e7dc(void);

void func_ov013_0223ef98(void) {
    switch (func_ov013_0223d47c()) {
        case 1:
            func_ov013_0223cb54(data_ov013_0224f5e8->buf, data_ov013_0224f5e8->h64a);
            return;
        case 2:
            if (func_ov013_0223d490(2) != 0) {
                data_ov013_0224f5e8->state = 5;
                return;
            }
            if (func_ov013_0223d490(3) != 0 || func_ov013_0223d490(4) != 0) {
                data_ov013_0224f5e8->state = 6;
                return;
            }
            if (data_ov013_0224f5e8->state != 5) {
                return;
            }
            if (func_ov013_0223d490(2) == 0) {
                data_ov013_0224f5e8->state = 0xD;
            }
            return;
        case 3:
            if (func_ov013_0223cfa0() != 0) {
                func_ov013_0223d008();
                return;
            }
            if ((u8) (data_ov013_0224f5e8->state + 0xFA) > 1) {
                return;
            }
            if (func_ov013_0223d490(3) == 0) {
                data_ov013_0224f5e8->state = 0x12;
            }
            return;
        case 5:
            data_ov013_0224f5e8->state = 7;
            return;
        case 7:
            func_ov013_0223d100();
            data_ov013_0224f5e8->state = 1;
            return;
        case 0:
            switch (func_ov013_0223df48()) {
                case 1:
                    func_ov013_0223e7dc();
                    return;
                case 0:
                    data_ov013_0224f5e8->state = 0x1F;
                    return;
                case 3:
                    return;
                default:
                    data_ov013_0224f5e8->state = 0x1F;
                    break;
            }
            break;
    }
}
