#include "m2c.h"

typedef struct {
    u8 pad[0xa90];
    u8 state;
    u8 pad91[7];
    s32 f98;
    u32 f9c;
    u8 pada0[0xaac - 0xaa0];
    u8 faac;
} G;

extern G *data_ov013_0224f5e8;

s32 func_ov013_0223ea78(void);
void func_ov013_0223eecc(void);
void func_ov013_0223ef74(void);
void func_ov013_0223ef98(void);
void func_ov013_0223f150(void);
void func_ov013_0223f17c(void);
void func_ov013_0223f358(void);
s32 func_ov013_0223f370(void);
void func_ov013_0221fd70(void);
s32 func_ov013_0223df48(void);
s32 func_ov013_0223e7dc(void);
void func_ov013_0223e6d4(void);

void func_ov013_0223eaf4(void) {
    switch (data_ov013_0224f5e8->state) {
        case 1:
            if (data_ov013_0224f5e8->faac == 1) {
                data_ov013_0224f5e8->faac = 0;
                func_ov013_0223ea78();
                return;
            }
            if (data_ov013_0224f5e8->faac != 2) {
                return;
            }
            data_ov013_0224f5e8->faac  = 0;
            data_ov013_0224f5e8->state = 0x22;
            return;
        case 2:
            func_ov013_0223eecc();
            return;
        case 3:
            func_ov013_0223ef74();
            data_ov013_0224f5e8->state = 4;
            return;
        case 4:
            data_ov013_0224f5e8->f98 += 1;
            func_ov013_0223ef98();
            return;
        case 5:
        case 6:
            func_ov013_0223ef98();
            return;
        case 7:
            func_ov013_0223f150();
            return;
        case 8:
        case 9:
        case 10:
            func_ov013_0223f17c();
            return;
        case 11:
            func_ov013_0223f358();
            return;
        case 16:
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x11;
            return;
        case 17:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            func_ov013_0223f370();
            return;
        case 18:
            func_ov013_0221fd70();
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x16;
            return;
        case 19:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov013_0223df48() != 1) {
                return;
            }
            func_ov013_0223e7dc();
            data_ov013_0224f5e8->state = 0x14;
            return;
        case 21:
            func_ov013_0223e6d4();
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x16;
            return;
        case 22:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov013_0223df48() != 1) {
                return;
            }
            func_ov013_0223e7dc();
            data_ov013_0224f5e8->state = 0x17;
            return;
        case 24:
            func_ov013_0223e6d4();
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x19;
            return;
        case 25:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov013_0223df48() != 1) {
                return;
            }
            func_ov013_0223e7dc();
            data_ov013_0224f5e8->state = 0x1A;
            return;
        case 27:
            func_ov013_0223e6d4();
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x1C;
            return;
        case 28:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov013_0223df48() == 1) {
                func_ov013_0223e7dc();
                data_ov013_0224f5e8->state = 0x1D;
                return;
            }
            if (data_ov013_0224f5e8->f9c % 30 != 1) {
                return;
            }
            if (data_ov013_0224f5e8->f9c <= 0x37) {
                return;
            }
            func_ov013_0223e6d4();
            return;
        case 32:
            func_ov013_0223e6d4();
            data_ov013_0224f5e8->f9c   = 0;
            data_ov013_0224f5e8->state = 0x21;
            return;
        case 33:
            if (data_ov013_0224f5e8->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov013_0223df48() != 1) {
                return;
            }
            func_ov013_0223e7dc();
            data_ov013_0224f5e8->state = 0x22;
            return;
        case 30:
            func_ov013_0223e6d4();
            return;
        case 34:
        default:
            return;
    }
}
