/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e70c from projets/pokemon-dash/src/donor/func_0209e70c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern volatile int data_0217b098;
extern volatile int data_0217b0a8;
extern int data_0217b0ac;
extern int data_0217b360;
extern volatile int data_0217b0b4[];
extern int data_0217b0b0;
extern int data_0217b09c;
extern void func_0205a6d8(unsigned int a, unsigned int b);
extern int func_0205cba4(unsigned int a, unsigned int c, unsigned int b);
extern int func_0205c490(int a);
int func_0205c28c(int x) {
    if (data_0217b098 == 0) {
        return 1;
    }
    if (data_0217b0ac >= 8) {
        if (x == 0) {
            return 0;
        }
        do {
            func_0205c490(1);
        } while (data_0217b0ac >= 8);
    }
    func_0205a6d8((unsigned int) &data_0217b360, 0x1800);
    if (func_0205cba4(7, data_0217b098, 0) < 0) {
        if (x == 0) {
            return 0;
        }
        while (func_0205cba4(7, data_0217b098, 0) < 0)
            ;
    }
    int temp           = data_0217b098;
    int idx            = data_0217b0a8;
    data_0217b0b4[idx] = temp;
    idx++;
    data_0217b0a8 = idx;
    if (idx > 8) {
        data_0217b0a8 = 0;
    }

    data_0217b098 = 0;
    data_0217b09c = 0;
    data_0217b0ac = data_0217b0ac + 1;
    data_0217b0b0 = data_0217b0b0 + 1;
    return 1;
}
