/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_0211b42c;
extern int data_0211b444[2];
extern short data_0211b468;
extern char data_0211b454;
extern int data_0211b43c;
extern void func_0205e248(void);
extern void func_0205cbe0(void);
extern int func_0205cdc4(int bit, int word);
extern void func_0205cdec(int a, void *b);
extern void func_0205bb24(char *p);
#pragma opt_strength_reduction off
void func_0205e334(void) {
    int i;
    if (data_0211b42c != 0) {
        return;
    }
    data_0211b42c    = 1;
    data_0211b444[0] = 0;
    data_0211b444[1] = 0;
    func_0205cbe0();
    while (func_0205cdc4(8, 1) == 0)
        ;
    func_0205cdec(8, (void *) func_0205e248);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0211b468 + (i << 3)) = 0;
    }
    func_0205bb24(&data_0211b454);
    data_0211b43c = *(int *) 0x27ffc3c;
}
