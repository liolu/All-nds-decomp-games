/* compiler: 2.0/sp1p5 -profile -flag no-opt_addtogetherconstantpartsoftreeexpressions */
/* near start: 55 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct Ic {
    u8 pad0[0xC];
    u32 fc;
    u8 pad10[0x2E];
    u8 f3e;
    u8 pad3f[0x33];
    s16 f72;
} Ic;
void Ring_SoundEffect(s32);
Ic *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, u8 *, s32, s32);
extern s32 data_ov109_020ea1d4[];
extern u8 *data_ov109_020ea340;

void SetUpEffectForCreate(s32 a, s32 b, s32 c) {
    s32 t5;
    s32 v3;
    Ic *ic;
    s32 i;

    i  = a * 2;
    t5 = data_ov109_020ea1d4[i + 1];
    v3 = t5 + 0x11;
    if (b >= 2) {
        v3 = t5 + 9;
    }
    ic = SetStatusIcon(0xFFFF, b, data_ov109_020ea1d4[i], v3, data_ov109_020ea340[0x34D], 3, 0x11, data_ov109_020ea340 + 0x3C,
                       *(s32 *) (data_ov109_020ea340 + 0x1C + c * 4), 0);
    ic->f72 = 0;
    ic->fc |= 0x200000;
    ic->f3e |= 0x20;
    switch (b) {
        case 0:
            Ring_SoundEffect(0x70);
            break;
        case 1:
            Ring_SoundEffect(0x8A);
            break;
        default:
            Ring_SoundEffect(0x8A);
            break;
    }
}
