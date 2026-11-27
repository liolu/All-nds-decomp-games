/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206811c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0206811c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    int f_0;
    int f_4;
    int f_8;
} state_3vc_t;
extern void FIFOClear(state_3vc_t *p);
extern void func_0205c5f8();
extern int socket(int unused0, int unused1, int unused2);
extern int __GSIACResult;
void func_02073bc4(char *o, int a, int b, int force, int c, int d) {
    if (force == 0 && __GSIACResult != 1) {
        return;
    }
    func_0205c5f8();
    *(int *) (o + 0)    = b;
    *(int *) (o + 4)    = a;
    *(int *) (o + 0x40) = 0;
    *(int *) (o + 0x44) = c;
    *(int *) (o + 0x48) = d;
    *(int *) (o + 0x28) = 0;
    *(int *) (o + 0x20) = socket(2, 2, 0);
    FIFOClear((state_3vc_t *) (o + 0x14));
    FIFOClear((state_3vc_t *) (o + 8));
}
