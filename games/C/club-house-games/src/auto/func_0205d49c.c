/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_0205d468(void *);
void *func_02057d98(void *, void *);
void func_02057db0(void *, void *);
s32 func_0206094c(void);
void func_02060960(s32);

void func_0205d49c(void *list, s32 tag) {
    s32 irq;
    void *cur;
    void *next;
    irq = func_0206094c();
    cur = func_02057d98(list, NULL);
    while (cur != NULL) {
        next = func_02057d98(list, cur);
        if (*(s32 *) ((u8 *) cur + 8) == tag) {
            func_02057db0(list, cur);
            func_0205d468(cur);
        }
        cur = next;
    }
    func_02060960(irq);
}
