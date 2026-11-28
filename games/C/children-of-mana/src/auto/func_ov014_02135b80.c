/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203f2a8 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_hdr.c (license: none), reused by
 * tools/donor_match.py */
int func_ov014_02135f1c(unsigned char *p, int len, unsigned char *o0, unsigned char *o1);
int func_ov014_02135b80(unsigned char *p, int len, int *r0, short *r1, short *r2, int *r3, int *r4, int *r5, int *r6) {
    unsigned char c1, c0;
    int need, off, rc;
    unsigned char *q;
    *r1 = 0;
    rc  = func_ov014_02135f1c(p, len, &c1, &c0);
    if (rc != 0) {
        return rc;
    }
    need = 0x18;
    need += 0x18;
    if (c1 == 4) {
        need += 0xc;
    }
    if (len < need) {
        return -1;
    }
    if ((unsigned short) (short) (((((*(unsigned short *) (p))) >> 8) & 0xff) |
                                  ((((*(unsigned short *) (p))) << 8) & 0xff00)) != 0x8000) {
        return -2;
    }
    if ((short) (((((*(short *) (p + 2))) >> 8) & 0xff) | ((((*(short *) (p + 2))) << 8) & 0xff00)) < need - 4) {
        return -1;
    }
    off = 0x14;
    if (c1 == 4) {
        off += 0xc;
    }
    q   = p + off;
    *r0 = (short) (((((*(short *) (q))) >> 8) & 0xff) | ((((*(short *) (q))) << 8) & 0xff00));
    *r1 = (((((*(short *) (q + 2))) >> 8) & 0xff) | ((((*(short *) (q + 2))) << 8) & 0xff00));
    if (*r1 != 1) {
        return -2;
    }
    *r2 = (((((*(short *) (q + 6))) >> 8) & 0xff) | ((((*(short *) (q + 6))) << 8) & 0xff00));
    *r3 = (((((*(int *) (q + 8))) >> 24) & 0xff) | ((((*(int *) (q + 8))) >> 8) & 0xff00) |
           ((((*(int *) (q + 8))) << 8) & 0xff0000) | (((*(int *) (q + 8))) << 24));
    *r4 = (((((*(int *) (q + 0xc))) >> 24) & 0xff) | ((((*(int *) (q + 0xc))) >> 8) & 0xff00) |
           ((((*(int *) (q + 0xc))) << 8) & 0xff0000) | (((*(int *) (q + 0xc))) << 24));
    *r5 = (((((*(int *) (q + 0x10))) >> 24) & 0xff) | ((((*(int *) (q + 0x10))) >> 8) & 0xff00) |
           ((((*(int *) (q + 0x10))) << 8) & 0xff0000) | (((*(int *) (q + 0x10))) << 24));
    *r6 = (((((*(int *) (q + 0x14))) >> 24) & 0xff) | ((((*(int *) (q + 0x14))) >> 8) & 0xff00) |
           ((((*(int *) (q + 0x14))) << 8) & 0xff0000) | (((*(int *) (q + 0x14))) << 24));
    return 0;
}
