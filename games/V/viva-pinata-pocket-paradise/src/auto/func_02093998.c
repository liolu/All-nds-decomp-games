/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    struct {
        u8 pad[0x6c];
        s32 id;
    } *cur;
} TI;

typedef struct {
    void (*fn)(void);
    s32 pad;
    volatile s32 n;
} CE;

extern TI data_020d3c04;
extern void (*data_020d77c4[])(void);
extern CE data_020d77b4;
extern u8 data_020d790c[];
extern s32 data_020d78c4;
extern s32 data_020d78e8;

void func_0208ad24(void *);
void func_0208ad78(void *);
s32 func_0208addc(void *);
void func_02093af4(s32);
void func_02098a70(void);

void func_02093998(void) {
    s32 t;
    void (*f)(void);

    if (func_0208addc(data_020d790c) == 0) {
        data_020d78c4 = data_020d3c04.cur->id;
        data_020d78e8 = 1;
    } else if (data_020d78c4 == data_020d3c04.cur->id) {
        data_020d78e8 += 1;
    } else {
        func_0208ad24(data_020d790c);
        data_020d78c4 = data_020d3c04.cur->id;
        data_020d78e8 = 1;
    }
    if (data_020d77b4.n > 0) {
        do {
            t               = data_020d77b4.n - 1;
            f               = data_020d77c4[t];
            data_020d77b4.n = t;
            f();
        } while (data_020d77b4.n > 0);
    }
    data_020d78e8 -= 1;
    if (data_020d78e8 == 0) {
        func_0208ad78(data_020d790c);
    }
    if (data_020d77b4.fn != 0) {
        data_020d77b4.fn();
        data_020d77b4.fn = 0;
    }
    func_02093af4(0);
    func_02098a70();
}
