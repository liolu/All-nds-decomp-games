/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_InterpTarget from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
struct InterpTargetParam {
    int target;
    s16 speed;
    u16 mode : 2;
    u16 rest : 14;
};
struct InterpState {
    char _00[0x74];
    int target;
};
struct InterpTrack {
    char reserved0[0xc];
    int step;
    char reserved1[8];
    int value;
    char reserved2[8];
    u16 hold;
    u16 state;
    char reserved3[0x14];
    int position;
};
extern void func_0209dab8(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
extern void func_0209dab8(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
void func_0209dab8(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c) {
    int target;
    int v;

    target = a->target;
    if (c->target != 0x80000000) {
        target = c->target;
    }

    switch (a->mode) {
        case 0:
            v = s->position;
            if (v < target) {
                if (v + s->step > target) {
                    s->step  = target - v;
                    s->state = s->hold;
                    return;
                }
            }
            if (v < target) {
                return;
            }
            if (v + s->step < target) {
                s->step  = target - v;
                s->state = s->hold;
            }
            return;
        case 1:
            v = s->position;
            if (v < target) {
                if (v + s->step > target) {
                    s->step  = target - v;
                    s->value = -(int) (((long long) s->value * a->speed + 0x800) >> 12);
                    return;
                }
            }
            if (v < target) {
                return;
            }
            if (v + s->step < target) {
                s->step  = target - v;
                s->value = -(int) (((long long) s->value * a->speed + 0x800) >> 12);
            }
            return;
    }
}
