/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_0212f820;
extern int data_0212f838[2];
extern short data_0212f85c;
extern char data_0212f848;
extern int data_0212f830;
extern void func_020c56c4(void);
extern void func_020c11cc(void);
extern int func_020c13b0(int bit, int word);
extern void func_020c13d8(int a, void *b);
extern void func_020be414(char *p);
#pragma opt_strength_reduction off
void func_020c57b0(void) {
    int i;
    if (data_0212f820 != 0) {
        return;
    }
    data_0212f820    = 1;
    data_0212f838[0] = 0;
    data_0212f838[1] = 0;
    func_020c11cc();
    while (func_020c13b0(8, 1) == 0)
        ;
    func_020c13d8(8, (void *) func_020c56c4);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0212f85c + (i << 3)) = 0;
    }
    func_020be414(&data_0212f848);
    data_0212f830 = *(int *) 0x27ffc3c;
}
