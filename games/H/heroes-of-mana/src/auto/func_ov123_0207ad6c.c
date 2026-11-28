/* compiler: 1.2/sp3 */
typedef struct {
    unsigned char b[8];
} B;
int func_ov123_02073bd0(int, int, int, int, B *);
int func_ov123_0207af6c(int, int);
int func_ov123_0207ad6c(int a, int b, int c, int d, B *src, int e) {
    B x;
    int i;
    B *p = &x;
    B *q = src;
    for (i = 0; i < 1; i++) {
        *p = *q;
    }
    x.b[0] = e;
    return func_ov123_0207af6c(func_ov123_02073bd0(a, b, c, d, &x), -1);
}
