/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02068398 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02068398.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
struct G9d2c {
    u8 *fallback;
    u8 *current;
    char pad8[4];
    u8 state;
    char padd;
    u8 mode;
};
extern struct G9d2c data_0206ef04;
extern void func_02056490(void);
int func_02056370(void) {
    u8 *sel = data_0206ef04.fallback;
    u8 *p;
    u8 *res;

    if (sel == 0) {
        return 0;
    }

    p = data_0206ef04.current;
    if (p == 0 || (p = *(u8 **) (p + 0x4b4)) == 0) {
        res = sel;
    } else {
        res = p;
    }
    data_0206ef04.current = res;

    func_02056490();
    data_0206ef04.mode  = data_0206ef04.current[0x4ac];
    data_0206ef04.state = 2;
    return 1;
}
