/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020116ec from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020116ec.c (license: MIT), reused by
 * tools/donor_match.py */
extern const short data_0207aa58[];
void func_02005058(int *m, int angle) {
    int s = data_0207aa58[(angle >> 4) * 2];
    int c = data_0207aa58[(angle >> 4) * 2 + 1];
    m[0]  = c;
    m[1]  = s;
    m[2]  = 0;
    m[3]  = -s;
    m[4]  = c;
    m[5]  = 0;
    m[6]  = 0;
    m[7]  = 0;
    m[8]  = 0x1000;
    m[9]  = 0;
    m[10] = 0;
    m[11] = 0;
}
