#include "m2c.h"

typedef struct {
    u8 pad[0x11C];
    u8 b11c;
    u8 b11d;
    u8 pad11e[3];
    s8 s121;
    u8 pad122;
    u8 b123;
    u8 b124;
    u8 b125;
} St;

extern St *data_ov013_0224f4dc;
extern u8 *data_ov013_02245d88[];
extern u8 data_ov013_02245228[];
extern u8 data_ov013_02244f78[];
s32 func_ov013_022416f4(s32);
void func_ov013_022295b4(s32);
s32 func_ov013_022416b4(s32);
void func_ov013_0223abd8(s32);
void func_ov013_0222938c(s32);
void func_ov013_02228c28(void);
void func_ov013_02228c58(void);
s32 func_ov013_02241734(s32);

void func_ov013_02228ee0(void) {
    s32 i;
    s32 j;
    s32 k;
    St *s;
    if (func_ov013_022416f4(0x20)) {
        func_ov013_022295b4(0);
    }
    if (func_ov013_022416f4(0x40)) {
        func_ov013_022295b4(1);
    }
    if (func_ov013_022416f4(0x10)) {
        func_ov013_022295b4(2);
    }
    if (func_ov013_022416f4(0x80)) {
        func_ov013_022295b4(3);
    }
    if (func_ov013_022416b4(1)) {
        s = data_ov013_0224f4dc;
        i = s->s121;
        if (i < 0x2F) {
            if (s->b124 == 0) {
                func_ov013_0223abd8(9);
                return;
            }
            s->b11c = data_ov013_02245d88[s->b11d][i];
            if (data_ov013_0224f4dc->b11d == 1) {
                func_ov013_0222938c(0);
            }
            return;
        }
        j = i - 0x2F;
        if (j < 4) {
            switch (j) {
                case 0:
                    func_ov013_02228c28();
                    return;
                case 1:
                    func_ov013_02228c58();
                    return;
                case 2:
                    if (s->b124 == 0) {
                        func_ov013_0223abd8(9);
                        return;
                    }
                    break;
                case 3:
                    if (s->b123 == 0) {
                        func_ov013_0223abd8(9);
                        return;
                    }
                    break;
            }
            if (s->b11d == 1) {
                func_ov013_0222938c(0);
            }
            data_ov013_0224f4dc->b11c = data_ov013_02245228[(u32) (i - 0x2F)];
            return;
        }
        k       = i - 0x33;
        s->b11c = data_ov013_02244f78[(u32) (i - 0x33)];
    }
    if (func_ov013_022416f4(2)) {
        s = data_ov013_0224f4dc;
        if (s->b123 == 0) {
            if (s->b125 != 0) {
                return;
            }
            func_ov013_0223abd8(9);
            data_ov013_0224f4dc->b125 = 1;
            return;
        }
        s->b11c = 0x80;
    } else {
        if (func_ov013_02241734(2)) {
            data_ov013_0224f4dc->b125 = 0;
        }
    }
    if (func_ov013_022416b4(0x400)) {
        func_ov013_02228c28();
    }
    if (func_ov013_022416b4(0x800)) {
        func_ov013_02228c58();
    }
}
