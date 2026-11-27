/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriHdrARead from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_hdrparse.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriHdrA {
    short w0, w2;
    int i4, i8, ic, i10;
} CriHdrA;
extern void func_020ec6e0(unsigned char *, CriHdrA *);
void func_020ec6e0(unsigned char *s, CriHdrA *d) {
    d->w0  = (s[0] << 8) | s[1];
    d->w2  = (s[2] << 8) | s[3];
    d->i4  = (s[4] << 24) | (s[5] << 16) | (s[6] << 8) | s[7];
    d->i8  = (s[8] << 24) | (s[9] << 16) | (s[10] << 8) | s[11];
    d->ic  = (s[12] << 24) | (s[13] << 16) | (s[14] << 8) | s[15];
    d->i10 = (s[16] << 24) | (s[17] << 16) | (s[18] << 8) | s[19];
}
