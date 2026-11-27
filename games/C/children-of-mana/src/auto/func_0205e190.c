/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_0205e46c(void);
extern void func_0205ddfc(int param);
extern void func_0205dacc(int a, int b, int c, int d);
extern volatile int data_0211b430;
extern int data_0211b434;
int func_0205e190(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_0205e46c()) {
        return 1;
    }
    data_0211b430 = 0;
    func_0205ddfc(0x3006000);
    p = &data_0211b430;
    while (!*p) {
    }
    *p            = 0;
    data_0211b434 = 0;
    func_0205dacc(0, 2, 0, 0);
    func_0205ddfc((a & 0xff) | 0x2006100);
    func_0205ddfc((b & 0xffff) | 0x1010000);
    return 0;
}
