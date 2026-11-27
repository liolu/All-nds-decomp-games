#include "m2c.h"
typedef struct {
    s32 a, b, c, d, e, f;
} S;
u8 *_Z20__DecodeSignedNumberPcPl(u8 *, s32 *);
u8 *_Z22__DecodeUnsignedNumberPcPm(u8 *, s32 *);
void func_02025900(s32, S *);
void func_02025dac(void *, S *, void *);
s32 func_0202665c(void *, S *);
u8 *func_02026894(void *, S *, s32 *);
void func_02026a70(void *, s32, s32);
void func_02026e88(void);
void func_020270cc(void *, S *);
void _Z17__TransferControlP12ThrowContextP13ExceptionInfoPc(void *, S *, s32);
void func_02026acc(u8 *arg0) {
    s32 spC;
    s32 sp8;
    volatile s32 sp4;
    s32 sp0;
    S s;
    s32 temp_r0;
    u8 *temp_r4;

    func_02025900(*(s32 *) (arg0 + 0x10), &s);
    if (s.b == 0) {
        func_02026e88();
    }
    func_020270cc(arg0, &s);
    if (*(s32 *) arg0 != 0) {
        *(s32 *) (arg0 + 0xC) = 0;
    } else {
        temp_r0               = func_0202665c(arg0, &s);
        *(s32 *) (arg0 + 0xC) = temp_r0;
        if (temp_r0 == 0) {
            func_02026e88();
        }
    }
    temp_r4 = func_02026894(arg0, &s, &sp0);
    sp4     = temp_r4[1] | (temp_r4[2] << 8) | (temp_r4[3] << 0x10) | (temp_r4[4] << 0x18);
    _Z20__DecodeSignedNumberPcPl(_Z22__DecodeUnsignedNumberPcPm(temp_r4 + 5, &sp8), &spC);
    func_02025dac(arg0, &s, temp_r4);
    func_02026a70(arg0, spC, sp0);
    _Z17__TransferControlP12ThrowContextP13ExceptionInfoPc(arg0, &s, s.a + sp8);
}
