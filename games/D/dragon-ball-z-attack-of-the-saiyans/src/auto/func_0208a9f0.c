/* compiler: 2.0/sp1p5 -O2,p */
typedef struct S {
    char *head;
    int p4;
    unsigned short cnt;
    unsigned short off;
} S;
extern void func_0208a970(S *, char *);
void func_0208a9f0(S *s, char *n) {
    unsigned short *pc;
    unsigned short o;
    if (s->head == 0) {
        func_0208a970(s, n);
        return;
    }
    o                             = s->off;
    pc                            = &s->cnt;
    *(int *) (n + o)              = 0;
    *(char **) (n + o + 4)        = s->head;
    *(char **) (s->head + s->off) = n;
    s->head                       = n;
    *pc                           = *pc + 1;
}
