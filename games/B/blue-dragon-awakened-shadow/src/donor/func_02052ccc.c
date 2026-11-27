/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02050118 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02050118.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
struct Func02050118Target {
    char pad[972];
    unsigned char f972;
    unsigned char f973;
};
extern struct Func02050118Target *func_02059234(void);
void func_02052ccc(void) {
    func_02059234()->f972 = 0xff;
    func_02059234()->f973 = 0;
}
