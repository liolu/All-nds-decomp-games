/* Reconstructed from USA ARM9 at 0x020c4b9c (868 bytes). */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

typedef struct {
    s32 v[16];
} Mtx44;

typedef struct {
    s32 v[12];
} Mtx43;

typedef struct {
    u8 *unk0;
    u32 unk4;
    u32 unk8;
    u8 pad[0x20];
    void (*unk2c)(void *);
    u8 pad2[0x64];
    u8 unk94;
} Sbc;

extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da508;
extern s32 data_02110b74;
extern s32 data_02110b78;
extern s32 data_02110b80[9];
extern s32 data_02110ba4[3];
extern s32 data_02110bb0[3];

void func_020c2528(s32 op, void *param, s32 count);
void func_020c23f4(void);
s32 func_020cf884(void *dest);
void func_020d4830(const void *src, volatile void *dest, u32 size);
void func_020cb6d4(const Mtx43 *src, Mtx44 *dst);
void func_020cc1e8(const Mtx44 *a, const Mtx44 *b, Mtx44 *out);
M2C_UNK *func_020bf3e0(void);
M2C_UNK *func_020bf418(void);
M2C_UNK *func_020bf0f8(void);
s32 func_020ccf80(const VecFx32 *v);
void func_020ccfe0(const VecFx32 *src, VecFx32 *dst);

void func_020c0e50(void *arg0, s32 arg1) {
    Sbc *s = (Sbc *) arg0;
    s32 n  = 2;
    /* The original keeps the global addresses live in callee-saved registers
     * (r11/r6/r7) for the whole function; naming them as locals reproduces that. */
    s32 *g80 = data_02110ba4;
    s32 *g8c = data_02110bb0;
    s32 *m   = data_02110b80;
    s32 sp4;
    s32 sp0;
    Mtx44 clip;
    Mtx44 wv;
    Mtx44 iv;
    s32 st;
    s32 r1;
    s32 r0;

    if (s->unk8 & 0x200) {
        if ((arg1 == 0x40) || (arg1 == 0x60)) {
            n++;
        }
        if ((arg1 == 0x20) || (arg1 == 0x60)) {
            n++;
        }
        s->unk0 = s->unk0 + n;
        return;
    }
    if ((arg1 == 0x40) || (arg1 == 0x60)) {
        n++;
        if (!(s->unk8 & 0x100)) {
            if (arg1 == 0x40) {
                sp4 = s->unk0[2];
            } else {
                sp4 = s->unk0[3];
            }
            func_020c2528(0x14, &sp4, 1);
        }
    }
    st = s->unk2c ? s->unk94 : 0;
    if (st == 1) {
        s->unk8 = s->unk8 & ~0x40;
        s->unk2c(s);
        st = s->unk2c ? s->unk94 : 0;
        r1 = s->unk8 & 0x40;
    } else {
        r1 = 0;
    }
    if (!(s->unk8 & 0x100) && (r1 == 0)) {
        func_020c23f4();
        *(volatile u32 *) 0x04000400 = 0x151110;
        *(volatile u32 *) 0x04000400 = 0;
        *(volatile u32 *) 0x04000400 = 0;
        while (func_020cf884(&clip) != 0) {
        }
        if (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 1) {
            func_020cb6d4((const Mtx43 *) func_020bf3e0(), &wv);
            func_020cc1e8(&clip, &wv, &clip);
        } else if (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 2) {
            func_020cb6d4((const Mtx43 *) &data_021da508, &iv);
            func_020cc1e8(&clip, &iv, &clip);
        }
        g80[0] = clip.v[12];
        g80[1] = clip.v[13];
        g80[2] = clip.v[14];
        g8c[0] = func_020ccf80((const VecFx32 *) &clip.v[0]);
        g8c[1] = func_020ccf80((const VecFx32 *) &clip.v[4]);
        g8c[2] = func_020ccf80((const VecFx32 *) &clip.v[8]);
        if (clip.v[5] != 0 || clip.v[6] != 0) {
            func_020ccfe0((const VecFx32 *) &clip.v[4], (VecFx32 *) &m[3]);
            m[7] = -m[5];
            m[8] = m[4];
        } else {
            func_020ccfe0((const VecFx32 *) &clip.v[8], (VecFx32 *) &m[6]);
            m[5] = -m[7];
            m[4] = m[8];
        }
        if (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 1) {
            *(volatile u32 *) 0x04000400 = 0x171012;
            func_020d4830(&data_02110b78, (volatile void *) 0x04000400, 8);
            func_020d4830(func_020bf418(), (volatile void *) 0x04000400, 0x30);
            *(volatile u32 *) 0x04000400 = 0x1b19;
            func_020d4830(data_02110b80, (volatile void *) 0x04000400, 0x3c);
        } else if (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 2) {
            *(volatile u32 *) 0x04000400 = 0x171012;
            func_020d4830(&data_02110b78, (volatile void *) 0x04000400, 8);
            func_020d4830(func_020bf0f8(), (volatile void *) 0x04000400, 0x30);
            *(volatile u32 *) 0x04000400 = 0x1b19;
            func_020d4830(data_02110b80, (volatile void *) 0x04000400, 0x3c);
        } else {
            func_020d4830(&data_02110b74, (volatile void *) 0x04000400, 0x48);
        }
    }
    if (st == 3) {
        s->unk8 = s->unk8 & ~0x40;
        s->unk2c(s);
        r0 = s->unk8 & 0x40;
    } else {
        r0 = 0;
    }
    if ((arg1 == 0x20) || (arg1 == 0x60)) {
        n++;
        if ((r0 == 0) && !(s->unk8 & 0x100)) {
            sp0 = s->unk0[2];
            func_020c2528(0x13, &sp0, 1);
        }
    }
    s->unk0 = s->unk0 + n;
}
