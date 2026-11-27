/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_UpdateNode from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
struct RandomVecRange {
    s16 x;
    s16 y;
    s16 z;
    u16 interval;
};
struct RandomVecSource {
    char reserved0[0x26];
    u16 frame;
};
extern void func_0209dd30(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
extern void func_0209dd30(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
extern u32 data_021d43d8;
extern u32 data_021d43d8;
void func_0209dd30(struct RandomVecRange *o, struct RandomVecSource *s, int *dst) {
    int r;

    if (s->frame % o->interval != 0) {
        return;
    }

    data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173;
    r             = data_021d43d8 >> 23;
    dst[0]        = dst[0] + ((o->x * r - (o->x << 8)) >> 8);

    data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173;
    r             = data_021d43d8 >> 23;
    dst[1]        = dst[1] + ((o->y * r - (o->y << 8)) >> 8);

    data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173;
    r             = data_021d43d8 >> 23;
    dst[2]        = dst[2] + ((o->z * r - (o->z << 8)) >> 8);
}
extern u32 data_021d43d8;
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
