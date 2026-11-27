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

extern G *data_ov001_02196c6c;

s32 func_ov001_0218553c(void);
void func_ov001_02185990(void);
void func_ov001_02185a38(void);
void func_ov001_02185a5c(void);
void func_ov001_02185c14(void);
void func_ov001_02185c40(void);
void func_ov001_02185e1c(void);
s32 func_ov001_02185e34(void);
void func_ov001_0218f180(void);
s32 func_ov001_02184a0c(void);
s32 func_ov001_021852a0(void);
void func_ov001_02185198(void);

void func_ov001_021855b8(void) {
    switch (data_ov001_02196c6c->state) {
        case 1:
            if (data_ov001_02196c6c->faac == 1) {
                data_ov001_02196c6c->faac = 0;
                func_ov001_0218553c();
                return;
            }
            if (data_ov001_02196c6c->faac != 2) {
                return;
            }
            data_ov001_02196c6c->faac  = 0;
            data_ov001_02196c6c->state = 0x22;
            return;
        case 2:
            func_ov001_02185990();
            return;
        case 3:
            func_ov001_02185a38();
            data_ov001_02196c6c->state = 4;
            return;
        case 4:
            data_ov001_02196c6c->f98 += 1;
            func_ov001_02185a5c();
            return;
        case 5:
        case 6:
            func_ov001_02185a5c();
            return;
        case 7:
            func_ov001_02185c14();
            return;
        case 8:
        case 9:
        case 10:
            func_ov001_02185c40();
            return;
        case 11:
            func_ov001_02185e1c();
            return;
        case 16:
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x11;
            return;
        case 17:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            func_ov001_02185e34();
            return;
        case 18:
            func_ov001_0218f180();
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x16;
            return;
        case 19:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov001_02184a0c() != 1) {
                return;
            }
            func_ov001_021852a0();
            data_ov001_02196c6c->state = 0x14;
            return;
        case 21:
            func_ov001_02185198();
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x16;
            return;
        case 22:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov001_02184a0c() != 1) {
                return;
            }
            func_ov001_021852a0();
            data_ov001_02196c6c->state = 0x17;
            return;
        case 24:
            func_ov001_02185198();
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x19;
            return;
        case 25:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov001_02184a0c() != 1) {
                return;
            }
            func_ov001_021852a0();
            data_ov001_02196c6c->state = 0x1A;
            return;
        case 27:
            func_ov001_02185198();
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x1C;
            return;
        case 28:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov001_02184a0c() == 1) {
                func_ov001_021852a0();
                data_ov001_02196c6c->state = 0x1D;
                return;
            }
            if (data_ov001_02196c6c->f9c % 30 != 1) {
                return;
            }
            if (data_ov001_02196c6c->f9c <= 0x37) {
                return;
            }
            func_ov001_02185198();
            return;
        case 32:
            func_ov001_02185198();
            data_ov001_02196c6c->f9c   = 0;
            data_ov001_02196c6c->state = 0x21;
            return;
        case 33:
            if (data_ov001_02196c6c->f9c++ <= 0x1E) {
                return;
            }
            if (func_ov001_02184a0c() != 1) {
                return;
            }
            func_ov001_021852a0();
            data_ov001_02196c6c->state = 0x22;
            return;
        case 30:
            func_ov001_02185198();
            return;
        case 34:
        default:
            return;
    }
}
