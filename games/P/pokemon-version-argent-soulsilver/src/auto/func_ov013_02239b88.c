#include "m2c.h"

typedef struct Blk {
    s32 a[17];
} Blk;

void func_020d4790(s32, void *, s32);
s16 func_020df064(void);
s32 func_020df3f8(void *, void *, s32);
s32 func_020decc4(void *);
s32 func_ov013_02239c54(void);
extern Blk data_ov013_022457c4;
extern u8 *data_ov013_0224f5c0;
extern void func_ov013_02239d80(void);

s32 func_ov013_02239b88(void) {
    u8 *b;
    func_020d4790(0, data_ov013_0224f5c0 + 0x1300, 0x348);
    if (func_020df3f8(data_ov013_0224f5c0, func_ov013_02239d80, 3) != 2) {
        return 0;
    }
    do {
        func_020decc4(data_ov013_0224f5c0 + 0x168c);
        b = data_ov013_0224f5c0;
    } while (*(u16 *) (b + 0x168c) != 2);
    *(Blk *) (b + 0x1648)                   = data_ov013_022457c4;
    *(void **) (b + 0x1648)                 = b + 0xf00;
    *(s16 *) (data_ov013_0224f5c0 + 0x1650) = func_020df064();
    if (func_ov013_02239c54() != 0) {
        return 1;
    }
    return 0;
}
