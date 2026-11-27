/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b070 from https://github.com/tangosdev/sm64ds-decomp src/func_0205b070.c (license: MIT), reused by
 * tools/donor_match.py */
extern volatile int data_021617a8;
extern volatile int data_021617b8;
extern int data_021617bc;
extern int data_02161a80;
extern volatile int data_021617c4[];
extern int data_021617c0;
extern int data_021617ac;
extern void func_020574fc(unsigned int a, unsigned int b);
extern int func_02058468(unsigned int a, unsigned int c, unsigned int b);
extern int func_0205b508(int a);
int func_0205b304(int x) {
    if (data_021617a8 == 0) {
        return 1;
    }
    if (data_021617bc >= 8) {
        if (x == 0) {
            return 0;
        }
        do {
            func_0205b508(1);
        } while (data_021617bc >= 8);
    }
    func_020574fc((unsigned int) &data_02161a80, 0x1800);
    if (func_02058468(7, data_021617a8, 0) < 0) {
        if (x == 0) {
            return 0;
        }
        while (func_02058468(7, data_021617a8, 0) < 0)
            ;
    }
    int temp           = data_021617a8;
    int idx            = data_021617b8;
    data_021617c4[idx] = temp;
    idx++;
    data_021617b8 = idx;
    if (idx > 8) {
        data_021617b8 = 0;
    }

    data_021617a8 = 0;
    data_021617ac = 0;
    data_021617bc = data_021617bc + 1;
    data_021617c0 = data_021617c0 + 1;
    return 1;
}
