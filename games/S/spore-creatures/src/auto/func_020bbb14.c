#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Cal;
typedef struct {
    u8 pad[8];
    Cal cal;
    u8 pad2[0x28];
    u16 flags;
} TpWork;
extern TpWork data_020f3990;
void func_020bbf10(Cal *a, Cal *b);
s32 func_020bbb14(Cal *out) {
    if (data_020f3990.flags & 1) {
        return 1;
    }
    *out = data_020f3990.cal;
    func_020bbf10(out, out);
    return 0;
}
