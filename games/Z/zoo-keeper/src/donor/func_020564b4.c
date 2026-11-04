/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020684a8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_020684a8.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned char data_0206ef04[];
extern void func_02056490(void);
void func_020564b4(void) {
    *(int *) &data_0206ef04[0] = 0;
    *(int *) &data_0206ef04[4] = 0;
    data_0206ef04[0xc]         = 1;
    func_02056490();
}
