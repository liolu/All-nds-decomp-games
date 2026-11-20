#include "m2c.h"

extern u8 data_021e3674;

typedef struct {
    void *p;
    s32 v;
} PtrVal;

void func_020d87a0(void *arg0, void *arg1) {
    PtrVal t;
    t.p              = &data_021e3674;
    t.v              = *(s32 *) ((u8 *) arg1 + 0x18);
    *(PtrVal *) arg0 = t;
}
