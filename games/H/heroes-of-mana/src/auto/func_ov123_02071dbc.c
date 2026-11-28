/* compiler: 1.2/sp2p3 */
int *func_ov123_02070e98(void *, int, int);
void func_ov123_02070d58(int, int *);
void func_ov123_02071c68(void);
void func_ov123_02071dbc(int a, int b, int c, int d, int e) {
    int *p = func_ov123_02070e98(func_ov123_02071c68, a, 1);
    p[4]   = b;
    p[5]   = c;
    p[6]   = d;
    p[7]   = e;
    func_ov123_02070d58(a, p);
}
