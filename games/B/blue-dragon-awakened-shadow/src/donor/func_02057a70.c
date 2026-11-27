/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204b0a8 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204b0a8.c (license: MIT), reused by
 * tools/donor_match.py */
struct Func0204b0a8Target {
    char pad[429];
    unsigned char f429;
    char pad2[74];
    int f504;
    int f508;
};
extern struct Func0204b0a8Target *func_02059234(void);
extern long long OS_GetTick(void);
void func_02057a70(void) {
    long long v;
    struct Func0204b0a8Target *p;
    func_02059234()->f429 = 0;
    p                     = func_02059234();
    v                     = OS_GetTick();
    p->f504               = (int) v;
    p->f508               = (int) (v >> 32);
}
