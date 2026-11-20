/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_02262f20[];
extern u8 data_02262f2c[];
void *func_02057d98(void *, void *);
void func_0205aaa4(void *);
void func_02057db0(void *, void *);
void func_0205aadc(void *);

u8 *func_0205aa30(s32 prio) {
    u8 *seq = func_02057d98(data_02262f20, NULL);
    if (seq == NULL) {
        seq = func_02057d98(data_02262f2c, NULL);
        if (prio < seq[0x3d]) {
            return NULL;
        }
        func_0205aaa4(seq);
    }
    func_02057db0(data_02262f20, seq);
    seq[0x3d] = prio;
    func_0205aadc(seq);
    return seq;
}
