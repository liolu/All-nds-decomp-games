#include "m2c.h"
typedef struct {
    u64 a;
    u64 b;
    s32 c;
} Q;
void func_0209e430(Q *);
s32 func_0209fa94(void) {
    Q q;
    func_0209e430(&q);
    if (q.b == 0 && q.a == 0) {
        return 1;
    }
    return 0;
}
