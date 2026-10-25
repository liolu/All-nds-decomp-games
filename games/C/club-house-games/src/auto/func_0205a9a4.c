/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_02262f2c[];
extern u8 data_02262f20[];
void func_02057db0(void *, void *);
void func_02057ee8(void *, void *);

typedef struct Seq {
    u32 *a;
    u8 *owner;
    u32 *c;
    u8 pad[0x20];
    u8 state;
} Seq;

void func_0205a9a4(Seq *p) {
    u8 *owner;
    if (p->a != NULL) {
        *p->a = 0;
        p->a  = NULL;
    }
    owner = p->owner;
    func_02057db0(owner, p);
    p->owner = NULL;
    if (p->c != NULL) {
        func_02057ee8(owner + 0xc, p->c);
        p->c[3] = 0;
        p->c    = NULL;
    }
    func_02057db0(data_02262f2c, p);
    func_02057ee8(data_02262f20, p);
    p->state = 0;
}
