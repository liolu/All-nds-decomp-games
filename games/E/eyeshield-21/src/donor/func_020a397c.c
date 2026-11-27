/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207eb08 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0207eb08.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    unsigned short first, last;
    int pad04;
    int mode;
    int *recs;
} Seg;
typedef struct {
    int *cur;
    int dir;
    int active;
    int fc;
    int len;
    int mode;
    Seg *seg;
    int callback_enabled;
    int callback_arg;
    void (*callback)(int, int);
} Obj;
extern int func_020a36a4();
void func_020a397c(Obj *o) {
    int mode = o->mode ? o->mode : o->seg->mode;
    switch (mode) {
        case 3:
        case 4:
            o->dir ^= 1;
            if (o->cur <= (int *) ((char *) o->seg->recs + (o->seg->last << 3) - 8)) {
                if (o->callback_enabled == 1) {
                    o->callback(o->callback_arg, o->fc);
                }
                mode = o->mode ? o->mode : o->seg->mode;
                if (mode != 2 && mode != 4) {
                    o->active = 0;
                } else {
                    func_020a36a4(o);
                }
            }
            break;
        default:
            if (o->callback_enabled == 1) {
                o->callback(o->callback_arg, o->fc);
            }
            mode = o->mode ? o->mode : o->seg->mode;
            if (mode != 2 && mode != 4) {
                o->active = 0;
            } else {
                func_020a36a4(o);
            }
    }
    {
        Seg *seg = o->seg;
        int *cur = o->cur;
        int *end = (int *) ((char *) seg->recs + (seg->first << 3) - 8);
        if (cur > end) {
            o->cur = end;
        } else if (cur < seg->recs) {
            o->cur = seg->recs;
        }
    }
}
