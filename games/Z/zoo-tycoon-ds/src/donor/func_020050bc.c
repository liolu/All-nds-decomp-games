/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02011688 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02011688.c (license: MIT), reused by
 * tools/donor_match.py */
extern const short data_0207aa58[];
void func_020050bc(int *m, int angle) {
    int s = data_0207aa58[(angle >> 4) * 2];
    int c = data_0207aa58[(angle >> 4) * 2 + 1];
    m[0]  = c;
    m[1]  = 0;
    m[2]  = -s;
    m[3]  = 0;
    m[4]  = 0x1000;
    m[5]  = 0;
    m[6]  = s;
    m[7]  = 0;
    m[8]  = c;
    m[9]  = 0;
    m[10] = 0;
    m[11] = 0;
}
