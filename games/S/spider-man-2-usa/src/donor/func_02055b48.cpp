/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020554bc from https://github.com/tangosdev/sm64ds-decomp src/engine/gx/G3X.cpp (license: MIT), reused by
 * tools/donor_match.py */
extern "C" {
extern int data_02157c3c;
extern void func_02057dac(unsigned int ch, unsigned int src, unsigned int dst, unsigned int size, void (*cb)(unsigned int),
                          unsigned int cbArg);
extern void func_02057f64(unsigned int channel, void *dst, unsigned int data, unsigned int size);
extern void func_020580bc(int val, int *dst, int len);
}
extern "C" void func_02055b48(void) {
    int i;
    if (data_02157c3c != -1) {
        func_02057dac(data_02157c3c, 0x4000330, 0, 0x10, 0, 0);
        func_02057f64(data_02157c3c, (void *) 0x4000360, 0, 0x50);
    } else {
        volatile int a = 0;
        volatile int b;
        func_020580bc(a, (int *) 0x4000330, 0x10);
        b = 0;
        func_020580bc(b, (int *) 0x4000360, 0x50);
    }
    for (i = 0; i < 0x20; i++) {
        *(volatile int *) 0x40004d0 = 0;
    }
}
