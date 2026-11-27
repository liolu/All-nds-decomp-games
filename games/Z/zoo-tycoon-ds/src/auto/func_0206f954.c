/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_02186640;
extern int data_02186658[2];
extern short data_0218667c;
extern char data_02186668;
extern int data_02186650;
extern void func_0206f868(void);
extern void func_0206c608(void);
extern int func_0206c7ec(int bit, int word);
extern void func_0206c814(int a, void *b);
extern void func_0206a3f0(char *p);
#pragma opt_strength_reduction off
void func_0206f954(void) {
    int i;
    if (data_02186640 != 0) {
        return;
    }
    data_02186640    = 1;
    data_02186658[0] = 0;
    data_02186658[1] = 0;
    func_0206c608();
    while (func_0206c7ec(8, 1) == 0)
        ;
    func_0206c814(8, (void *) func_0206f868);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0218667c + (i << 3)) = 0;
    }
    func_0206a3f0(&data_02186668);
    data_02186650 = *(int *) 0x27ffc3c;
}
