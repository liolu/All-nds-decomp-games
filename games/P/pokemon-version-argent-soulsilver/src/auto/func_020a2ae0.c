#include "m2c.h"
typedef struct A {
    u8 pad[0x18];
    void *(*alloc)(s32);
    void (*free)(void *);
} A;
typedef struct Ctx {
    u8 pad0[0x3c];
    s32 f3c;
    s32 f40;
    u8 pad1[4];
    s32 f48;
    s32 f4c;
    u8 pad2[0x14];
} Ctx;
void func_020d4994(void *, s32, s32);
void func_020a6878(Ctx *);
s32 func_020a8460(s32);
void func_020a688c(void);
extern A *data_02110648;
s32 func_020a2ae0(s32 a) {
    Ctx c;
    s32 r;
    u8 *buf;
    if (a == 0) {
        return 0;
    }
    buf = data_02110648->alloc(0xfd0);
    if (buf == 0) {
        return 0;
    }
    func_020d4994(&c, 0, 0x64);
    c.f40 = (s32) buf;
    c.f3c = 0xb68;
    c.f4c = (s32) (buf + 0xb68);
    c.f48 = 0x466;
    func_020a6878(&c);
    r = func_020a8460(a);
    func_020a688c();
    data_02110648->free(buf);
    return r;
}
