/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204d78c from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_mpa_synth.c (license: none), reused by
 * tools/donor_match.py */
typedef struct MpSyn {
    signed char used;
    char pad1[3];
    int pos[2];
    short *win;
    short *coef;
    short buf[2][1024];
} MpSyn;
typedef struct MpTab {
    int count;
    char *coefCopy;
    char *winCopy;
    int ready;
} MpTab;
extern MpTab data_02218f20;
extern char *data_02218f30;
extern char *data_02218f34;
extern void (*data_02132614[16])(short *, short *, short *);
extern void func_020ea3c0(short *, short *, short *);
extern void memset(void *, int, int);
extern void func_0204ad00(void);
extern void func_0204d864(void);
void func_020ebcd8(MpSyn *s, short *in, int ch, short *out) {
    short *dst;
    short *win;
    int pos;
    s->pos[ch] = (s->pos[ch] - 0x40) & 0x3ff;
    pos        = s->pos[ch];
    dst        = &s->buf[ch][pos];
    win        = s->win;
    if (((unsigned) in & 0x1f) != 0 || ((unsigned) win & 0x1f) != 0) {
        for (;;) {
        }
    }
    func_020ea3c0(in, win, dst);
    pos = s->pos[ch];
    data_02132614[pos >> 6](&s->buf[ch][pos], s->coef, out);
}
void func_0204d814(char *p);
void func_0204d824(char *p);
void func_0204d834(void);
void func_0204d864(void);
void func_0204d8e4(void);
MpSyn *func_0204d8fc(MpSyn *o, int size);
void func_0204d944(MpSyn *o);
void func_0204d95c(void);
