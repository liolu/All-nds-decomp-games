#include "m2c.h"

/* Reconstructed from USA ARM9 at 0x020534f4 (72 bytes).
 *
 * The fourth argument is a single halfword struct that is passed by value
 * in r3.  The original code hands the same struct on to func_0208ca00 (which
 * takes it by value too), so the incoming halfword is reloaded from its
 * argument home slot with an unsigned halfword load, written back as a
 * halfword into the outgoing argument area and reloaded as a word for r1.
 */
typedef struct {
    u16 v;
} HalfWord;

extern void func_0208ca00(void *indices, HalfWord h);
extern void func_0208ca48(void *self);
extern void func_0208cc24(void *self, s32 flag);

void func_0208c8a0(void *self, s32 a, s32 b, HalfWord h) {
    M2C_FIELD(self, s32 *, 0) = a;
    M2C_FIELD(self, s32 *, 4) = b;
    func_0208ca00(self, h);
    func_0208ca48(self);
    func_0208cc24(self, 1);
}
