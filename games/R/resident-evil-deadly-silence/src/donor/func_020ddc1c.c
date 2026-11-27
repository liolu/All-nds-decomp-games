/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203ef70 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_hdr.c (license: none), reused by
 * tools/donor_match.py */
int func_020ddc1c(unsigned char *p, int len, short *hdr, signed char *c, signed char *d, signed char *f, signed char *e,
                  int *rate, int *total, int *spb) {
    if (len < 16) {
        return -1;
    }
    if ((unsigned short) ((p[0] << 8) | p[1]) != 0x8000) {
        return -2;
    }
    *hdr   = ((p[2] << 8) | p[3]) + 4;
    *c     = ((signed char *) p)[4];
    *f     = ((signed char *) p)[5];
    *d     = ((signed char *) p)[6];
    *e     = ((signed char *) p)[7];
    *rate  = (p[8] << 24) | (p[9] << 16) | (p[10] << 8) | p[11];
    *total = (p[12] << 24) | (p[13] << 16) | (p[14] << 8) | p[15];
    if (*d == 0) {
        *spb = 0;
    } else {
        *spb = (*f - 2) * 8 / *d;
    }
    return 0;
}
