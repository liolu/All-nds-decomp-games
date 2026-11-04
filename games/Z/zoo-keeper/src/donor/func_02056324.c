/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206834c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206834c.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned char data_0206ef04;
void func_02056324(void) {
    unsigned char *p;
    if (((unsigned char *) &data_0206ef04)[0xc] != 2) {
        return;
    }
    p = *(unsigned char **) (((unsigned char *) &data_0206ef04) + 4);
    if (p[0x4aa] == 0) {
        ((unsigned char *) &data_0206ef04)[0x10]                     = 9;
        *(unsigned char **) (((unsigned char *) &data_0206ef04) + 8) = p;
    } else {
        ((unsigned char *) &data_0206ef04)[0x10]                     = 4;
        *(unsigned char **) (((unsigned char *) &data_0206ef04) + 8) = p + 0x220;
    }
    ((unsigned char *) &data_0206ef04)[0xc] = 3;
}
