#include "m2c.h"

extern u8 *data_ov013_0224f5c0;
void func_ov013_02239de4(void *obj);
s32 func_ov013_02239c54(void);
void func_020d3f48(void);

void func_ov013_02239d80(u8 *obj) {
    u8 *q;
    s32 t;
    if (*(u16 *) (obj + 2) != 0) {
        return;
    }
    q = data_ov013_0224f5c0 + 0x1000;
    if (q[0xE5C] != 0) {
        return;
    }
    if (*(u16 *) obj != 0x26) {
        return;
    }
    t = *(u16 *) (obj + 8);
    if (t == 4) {
        goto L4;
    }
    if (t != 5) {
        goto Ld;
    }
    func_ov013_02239de4(obj);
    func_ov013_02239c54();
    return;
L4:
    func_ov013_02239c54();
    return;
Ld:
    func_020d3f48();
}
