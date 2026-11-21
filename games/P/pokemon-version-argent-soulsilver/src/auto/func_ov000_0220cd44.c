#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    u32 t;
} E;
typedef struct {
    u8 pad[0x60];
    void *list;
} O;
extern s32 func_ov000_021fe704(void *);
extern E *func_ov000_021fe70c(void *, s32);
extern s32 func_ov000_0220ee20(O *, E *);
s32 func_ov000_0220cd44(O *o, u32 now) {
    s32 i;
    s32 n = func_ov000_021fe704(o->list);
    for (i = 0; i < n; i++) {
        E *e = func_ov000_021fe70c(o->list, i);
        if (now - e->t > 1000) {
            if (func_ov000_0220ee20(o, e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
