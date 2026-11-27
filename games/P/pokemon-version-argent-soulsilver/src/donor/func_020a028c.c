/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02052f04 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02052f04.c (license: MIT), reused by
 * tools/donor_match.py */
typedef struct {
    char _pad[4];
    unsigned int f_4;
    unsigned int f_8;
} state_v_t;
typedef struct {
    char pad[0x24];
    int f_24;
} context_t;
extern int func_0209fc0c();
extern int func_0209fbb0(void *p);
extern unsigned long long func_0209fb9c(state_v_t *p);
extern int func_0209fd28(unsigned long long id, int extra);
extern void *func_0209fd98(unsigned long long id, int extra);
int func_020a028c(context_t *self, state_v_t *p) {
    unsigned long long id;
    switch (func_0209fc0c(p)) {
        case 2:
            id = func_0209fb9c(p);
            if (!func_0209fd28(id, self->f_24)) {
                return 0;
            }
            return (int) func_0209fd98(id, self->f_24);
        case 3:
            return func_0209fbb0(p);
        case 1:
            return -1;
        default:
            return 0;
    }
}
