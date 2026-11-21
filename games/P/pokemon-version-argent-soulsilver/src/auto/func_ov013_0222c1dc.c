#include "m2c.h"

typedef struct {
    u16 pri : 2;
    u16 rest : 14;
} Bf;

extern u8 data_ov013_02246054[];
extern s32 data_ov013_0224f518;
extern u8 *data_ov013_02246038[];
extern u8 data_ov013_02246064[], data_ov013_02246078[], data_ov013_0224608c[], data_ov013_022460a0[];
extern u8 data_ov013_022460b4[], data_ov013_022460cc[], data_ov013_022460e4[], data_ov013_022460fc[];
extern u8 data_ov013_02246114[], data_ov013_0224612c[], data_ov013_02246144[], data_ov013_02246158[];

extern void func_020d0344(void);
extern void func_020cfcc0(void);
extern void func_020cfecc(void);
extern void func_020cfd70(void);
extern void func_020d03a4(void);
extern void func_020cfc6c(void);
extern void func_020cfe74(void);
extern void func_020cfd18(void);
extern void func_020d0044(void);
extern void func_ov013_0222c3bc(void);

void func_ov013_02239fb8(void);
void func_ov013_0222ba28(void);
void func_ov013_02227b54(void);
void func_ov013_02227d78(void);
void func_ov013_022277c4(void);
u8 func_ov013_0222b990(void);
s32 func_ov013_0222b9b8(s32);
s32 func_ov013_0222ba78(void *);
void *func_ov013_022278e4(void *);
void func_ov013_022400b8(s32, void *);
void func_ov013_02227944(void *, void *);
u32 func_ov013_0222b9a0(void);
void func_ov013_02240ec8(s32, s32);
void func_ov013_0222b908(void *);

void func_ov013_0222c1dc(void) {
    u32 m;
    func_ov013_02239fb8();
    func_ov013_0222ba28();
    func_ov013_02227b54();
    func_ov013_02227d78();
    func_ov013_022277c4();
    if (func_ov013_0222b990() == 1 && func_ov013_0222b9b8(2) != 0) {
        data_ov013_0224f518 = func_ov013_0222ba78(data_ov013_02246054);
    } else {
        data_ov013_0224f518 = func_ov013_0222ba78(data_ov013_02246038[func_ov013_0222b990()]);
    }
    func_ov013_022400b8(1, func_ov013_022278e4(data_ov013_02246064));
    func_ov013_022400b8(0, func_ov013_022278e4(data_ov013_02246078));
    func_ov013_02227944(data_ov013_0224608c, func_020d0344);
    func_ov013_02227944(data_ov013_022460a0, func_020cfcc0);
    func_ov013_02227944(data_ov013_022460b4, func_020cfecc);
    func_ov013_02227944(data_ov013_022460cc, func_020cfd70);
    func_ov013_02227944(data_ov013_022460e4, func_020d03a4);
    func_ov013_02227944(data_ov013_022460fc, func_020cfc6c);
    func_ov013_02227944(data_ov013_02246114, func_020cfe74);
    func_ov013_02227944(data_ov013_0224612c, func_020cfd18);
    switch (func_ov013_0222b9a0()) {
        case 0:
            func_ov013_02227944(data_ov013_02246144, func_020d0044);
            break;
        case 1:
            func_ov013_02227944(data_ov013_02246158, func_020d0044);
            break;
    }
    ((volatile Bf *) 0x400100a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    func_ov013_02240ec8(1, 2);
    func_ov013_02240ec8(0, 2);
    func_ov013_0222b908(func_ov013_0222c3bc);
}
