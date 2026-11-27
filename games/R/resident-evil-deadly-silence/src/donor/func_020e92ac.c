/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204b5f4 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_mpa_l2.c (license: none), reused by
 * tools/donor_match.py */
typedef struct Bs Bs;
typedef struct QEnt {
    short grp, bits, cls, pad;
    int mul, add;
} QEnt;
typedef struct SbInfo {
    int i0;
    int nch;
    int i8;
    int ic;
    int sblimit;
    int bound;
    QEnt (*alloc)[16];
    int pad1c[6];
    short sel[4];
} SbInfo;
extern int func_020ec950(Bs *, int);
void func_020e92ac(Bs *bs, SbInfo *si, int (*alloc)[32], int (*sfsel)[32], int (*scf)[3][32]) {
    int sblimit = si->sblimit;
    int nch     = si->nch;
    int sb, ch;
    short m;
    if (alloc[0][0] != 0) {
        sfsel[0][0] = func_020ec950(bs, 2);
    } else {
        sfsel[0][0] = 0;
    }
    m = si->sel[sfsel[0][0]];
    for (sb = 1; sb < sblimit; sb++) {
        if (alloc[0][sb] != 0) {
            sfsel[0][sb] = func_020ec950(bs, 2);
            sfsel[0][sb] ^= m & 3;
        }
        m >>= 2;
    }
    for (sb = sblimit; sb < 32; sb++) {
        for (ch = 0; ch < nch; ch++) {
            sfsel[ch][sb] = 0;
        }
    }
    for (sb = 0; sb < sblimit; sb++) {
        for (ch = 0; ch < nch; ch++) {
            if (alloc[ch][sb] != 0) {
                switch (sfsel[ch][sb]) {
                    case 0:
                        scf[ch][0][sb] = func_020ec950(bs, 6);
                        scf[ch][1][sb] = func_020ec950(bs, 6);
                        scf[ch][2][sb] = func_020ec950(bs, 6);
                        break;
                    case 1:
                        scf[ch][0][sb] = scf[ch][1][sb] = func_020ec950(bs, 6);
                        scf[ch][2][sb]                  = func_020ec950(bs, 6);
                        break;
                    case 3:
                        scf[ch][0][sb] = func_020ec950(bs, 6);
                        scf[ch][1][sb] = scf[ch][2][sb] = func_020ec950(bs, 6);
                        break;
                    case 2:
                        scf[ch][0][sb] = scf[ch][1][sb] = scf[ch][2][sb] = func_020ec950(bs, 6);
                        break;
                }
            } else {
                scf[ch][0][sb] = scf[ch][1][sb] = scf[ch][2][sb] = 0x3f;
            }
        }
    }
    for (; sblimit < 32; sblimit++) {
        for (ch = 0; ch < nch; ch++) {
            scf[ch][0][sblimit] = scf[ch][1][sblimit] = scf[ch][2][sblimit] = 0x3f;
        }
    }
}
