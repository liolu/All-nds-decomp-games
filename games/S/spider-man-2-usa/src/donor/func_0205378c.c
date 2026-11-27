/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205d96c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205d96c.c (license: MIT), reused
 * by tools/donor_match.py */
extern void *data_021611d8;
extern int data_021611d4;
extern int data_021611dc[2];
extern int data_021611e4[2];
extern int data_021611ec;
extern int data_02157c34;
extern int func_020538b4;
extern int func_0205394c;
extern int func_02053944;
extern int func_020566e4(void);
extern void func_02050c64(void);
extern void func_02052b80(void *o);
extern int func_02052acc(void *thiz, void *a, void *b);
extern void func_02052940(int *p, int a, int b);
extern int func_02052a50(int *self, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
#pragma opt_propagation off
void func_0205378c(void *arg) {
    int *a;
    int *b;

    data_021611d8    = arg;
    data_021611d4    = func_020566e4();
    data_021611dc[0] = 0;
    data_021611dc[1] = 0;
    data_021611e4[0] = 0;
    data_021611e4[1] = 0;
    func_02050c64();

    a = ((int *) 0x27ffe40);
    b = ((int *) 0x27ffe48);
    func_02052b80(&data_021611ec);
    func_02052acc(&data_021611ec, &data_02157c34, (void *) 3);
    if (a[0] == -1) {
        return;
    }
    if (a[0] == 0) {
        return;
    }
    if (b[0] == -1) {
        return;
    }
    if (b[0] == 0) {
        return;
    }
    func_02052940(&data_021611ec, (int) &func_020538b4, 0x602);
    func_02052a50(&data_021611ec, 0, b[0], b[1], a[0], a[1], (int) &func_0205394c, (int) &func_02053944);
}
