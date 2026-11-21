typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef struct S {
    u8 pad[0x1024];
    char buf[0x100];
    char *p;
    char *q;
    int unk;
    int kind;
    s16 port;
} S;
u32 func_020e9580(char *);
void func_020e9664(char *, char *, int);
char *func_020e9ad0(char *, void *);
s16 func_020eb82c(char *);
extern char data_ov000_02216810[];
extern char data_ov000_02216818[];
extern char data_ov000_02216824[];
extern char data_ov000_02216828[];
s32 func_ov000_021e9ca4(S *s, char *arg1) {
    char *a = 0;
    char *t;
    if (func_020e9580(arg1) >= 0x100U) {
        return 0;
    }
    func_020e9664(s->buf, arg1, 0x100);
    if (func_020e9580(arg1) != func_020e9580(s->buf)) {
        return 0;
    }
    if (func_020e9ad0(s->buf, data_ov000_02216810) != 0) {
        s->p    = s->buf + 7;
        s->kind = 0;
        s->port = 0x50;
    } else {
        t = func_020e9ad0(s->buf, data_ov000_02216818);
        if (t == 0) {
            return 0;
        }
        s->p    = t + 8;
        s->kind = 1;
        s->port = 0x1BB;
    }
    t = func_020e9ad0(s->p, data_ov000_02216824);
    if (t != 0) {
        *t = 0;
        a  = t + 1;
    }
    t = func_020e9ad0(s->p, data_ov000_02216828);
    if (t == 0) {
        s->q = 0;
    } else {
        *t   = 0;
        s->q = t + 1;
    }
    if (a != 0) {
        s->port = func_020eb82c(a);
    }
    return 1;
}
