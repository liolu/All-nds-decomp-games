#include "m2c.h"
typedef struct {
    s32 a, b, c, d, e, f;
} S;
u8 *_Z20__DecodeSignedNumberPcPl(u8 *, s32 *);
u8 *_Z22__DecodeUnsignedNumberPcPm(u8 *, s32 *);
void func_0203a514(s32, S *);
void func_0203a9c0(void *, S *, void *);
s32 func_0203b270(void *, S *);
u8 *func_0203b4ac(void *, S *, s32 *);
void func_0203b688(void *, s32, s32);
void func_0203ba40(void);
void func_0203bc84(void *, S *);
void _Z17__TransferControlP12ThrowContextP13ExceptionInfoPc(void *, S *, s32);
void func_0203b6e4(u8 *arg0) {
    s32 spC;
    s32 sp8;
    volatile s32 sp4;
    s32 sp0;
    S s;
    s32 temp_r0;
    u8 *temp_r4;

    func_0203a514(*(s32 *) (arg0 + 0x10), &s);
    if (s.b == 0) {
        func_0203ba40();
    }
    func_0203bc84(arg0, &s);
    if (*(s32 *) arg0 != 0) {
        *(s32 *) (arg0 + 0xC) = 0;
    } else {
        temp_r0               = func_0203b270(arg0, &s);
        *(s32 *) (arg0 + 0xC) = temp_r0;
        if (temp_r0 == 0) {
            func_0203ba40();
        }
    }
    temp_r4 = func_0203b4ac(arg0, &s, &sp0);
    sp4     = temp_r4[1] | (temp_r4[2] << 8) | (temp_r4[3] << 0x10) | (temp_r4[4] << 0x18);
    _Z20__DecodeSignedNumberPcPl(_Z22__DecodeUnsignedNumberPcPm(temp_r4 + 5, &sp8), &spC);
    func_0203a9c0(arg0, &s, temp_r4);
    func_0203b688(arg0, spC, sp0);
    _Z17__TransferControlP12ThrowContextP13ExceptionInfoPc(arg0, &s, s.a + sp8);
}
