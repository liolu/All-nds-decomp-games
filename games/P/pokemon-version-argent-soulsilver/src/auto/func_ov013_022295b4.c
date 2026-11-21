#include "m2c.h"

typedef struct {
    u8 pad[0x120];
    s8 f120;
    s8 f121;
} G;

void func_ov013_022294d8(void);
void func_ov013_0223abd8(s32);
extern s8 data_ov013_02245154[][4];
extern G *data_ov013_0224f4dc;

void func_ov013_022295b4(s32 arg0) {
    s8 lr;
    s8 x;

    lr                        = data_ov013_0224f4dc->f121;
    data_ov013_0224f4dc->f121 = data_ov013_02245154[lr][arg0];
    x                         = data_ov013_0224f4dc->f121;
    if (x == 0x2E && arg0 == 3) {
        data_ov013_0224f4dc->f120 = lr;
        goto end;
    }
    if (x == 0x33 && (arg0 == 1 || arg0 == 3)) {
        data_ov013_0224f4dc->f120 = lr;
        goto end;
    }
    if (x == 0x34 && (arg0 == 1 || arg0 == 3)) {
        if (lr != 0x2E) {
            data_ov013_0224f4dc->f120 = lr;
        }
        goto end;
    }
    if (x == -1) {
        s8 v = data_ov013_0224f4dc->f120;
        if (v == 0x23 || v == 0x32) {
            data_ov013_0224f4dc->f121 = 0x23;
        } else {
            data_ov013_0224f4dc->f121 = 0x22;
        }
    } else if (x == -2) {
        switch (data_ov013_0224f4dc->f120) {
            case 0:
            case 0x31:
                data_ov013_0224f4dc->f121 = 0x31;
                break;
            case 1:
            case 0x24:
                data_ov013_0224f4dc->f121 = 0x24;
                break;
            case 3:
            case 0x26:
                data_ov013_0224f4dc->f121 = 0x26;
                break;
            case 4:
            case 0x27:
                data_ov013_0224f4dc->f121 = 0x27;
                break;
            case 5:
            case 0x28:
                data_ov013_0224f4dc->f121 = 0x28;
                break;
            default:
                data_ov013_0224f4dc->f121 = 0x25;
                break;
        }
    } else if (x == -3) {
        switch (data_ov013_0224f4dc->f120) {
            case 6:
            case 0x29:
                data_ov013_0224f4dc->f121 = 0x29;
                break;
            case 7:
            case 0x2A:
                data_ov013_0224f4dc->f121 = 0x2A;
                break;
            case 9:
            case 0x2C:
                data_ov013_0224f4dc->f121 = 0x2C;
                break;
            case 10:
            case 0x2D:
                data_ov013_0224f4dc->f121 = 0x2D;
                break;
            case 11:
            case 0x22:
            case 0x23:
            case 0x32:
                data_ov013_0224f4dc->f121 = 0x2E;
                break;
            default:
                data_ov013_0224f4dc->f121 = 0x2B;
                break;
        }
    } else if (x == -4) {
        switch (data_ov013_0224f4dc->f120) {
            case 0:
            case 0x31:
                data_ov013_0224f4dc->f121 = 0;
                break;
            case 1:
            case 0x24:
                data_ov013_0224f4dc->f121 = 1;
                break;
            case 3:
            case 0x26:
                data_ov013_0224f4dc->f121 = 3;
                break;
            case 4:
            case 0x27:
                data_ov013_0224f4dc->f121 = 4;
                break;
            case 5:
            case 0x28:
                data_ov013_0224f4dc->f121 = 5;
                break;
            default:
                data_ov013_0224f4dc->f121 = 2;
                break;
        }
    } else if (x == -5) {
        switch (data_ov013_0224f4dc->f120) {
            case 6:
            case 0x29:
                data_ov013_0224f4dc->f121 = 6;
                break;
            case 7:
            case 0x2A:
                data_ov013_0224f4dc->f121 = 7;
                break;
            case 9:
            case 0x2C:
                data_ov013_0224f4dc->f121 = 9;
                break;
            case 10:
            case 0x2D:
                data_ov013_0224f4dc->f121 = 10;
                break;
            case 11:
            case 0x22:
                data_ov013_0224f4dc->f121 = 11;
                break;
            case 0x23:
            case 0x32:
                data_ov013_0224f4dc->f121 = 0x32;
                break;
            default:
                data_ov013_0224f4dc->f121 = 8;
                break;
        }
    }
end:
    func_ov013_022294d8();
    func_ov013_0223abd8(8);
}
