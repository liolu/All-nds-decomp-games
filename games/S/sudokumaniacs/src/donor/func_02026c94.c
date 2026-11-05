/* compiler: 1.2/sp3  */
/* func_0203b4ac from projets/battle-of-giants-dinosaurs/src/auto/func_0203b4ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 w0;
    s32 w1;
    u8 *s;
    s32 w3;
    s32 w4;
    s32 w5;
} A;
typedef struct {
    s32 w[7];
} B;
typedef struct {
    s32 w[21];
} C;
typedef struct {
    B b;
    C c;
} P;
typedef struct {
    A a;
    B b;
    C c;
} St;
extern s32 func_02025e08(St *);
extern s32 func_02025e24(St *);
extern u8 *func_02025c10(u8 *, s32 *);
extern u8 *func_02025b84(u8 *, s32 *);
extern s32 func_0202720c(s32, s32, s32);
extern s32 func_02026bb0(s32, s32 *);
extern void func_02026c34(P *, A *, s32 *, u8 *);
extern void func_020271f4(void);
u8 *func_02026c94(P *p, A *a, s32 arg2) {
    St st;
    s32 s0;
    s32 s4;
    s32 s8;
    volatile s32 sc;
    volatile s32 s10;
    s32 s14;
    s32 s18;
    s32 tok;
    u8 *t;

    st.a.w0   = a->w0;
    st.a.w1   = a->w1;
    st.a.s    = a->s;
    st.a.w3   = a->w3;
    st.a.w4   = a->w4;
    st.a.w5   = a->w5;
    st.b.w[0] = p->b.w[0];
    st.b.w[1] = p->b.w[1];
    st.b.w[2] = p->b.w[2];
    st.b.w[3] = p->b.w[3];
    st.b.w[4] = p->b.w[4];
    st.b.w[5] = p->b.w[5];
    st.b.w[6] = p->b.w[6];
    st.c      = p->c;
    tok       = func_02025e08(&st);
    while (1) {
        switch (tok) {
            case 12:
                t   = st.a.s;
                s10 = t[1] | (t[2] << 8) | (t[3] << 16) | (t[4] << 24);
                func_02025b84(func_02025c10(t + 5, &s14), &s18);
                if (func_0202720c(p->b.w[0], s10, arg2) != 0) {
                    goto done;
                }
                break;
            case 15:
                t  = func_02025c10(st.a.s + 1, &s0);
                t  = func_02025c10(t, &s4);
                sc = (s32) func_02025b84(t, &s8);
                if (func_02026bb0(p->b.w[0], &s0) == 0) {
                    func_02026c34(p, a, &s0, st.a.s);
                }
                break;
            case 1:
            case 14:
            default:
                func_020271f4();
                goto done;
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 16:
            case 17:
            case 18:
            case 19:
                break;
        }
        tok = func_02025e24(&st);
    }
done:
    return st.a.s;
}
