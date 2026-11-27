/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_021640e8;
extern int data_021640f8[2];
extern short data_0216411c;
extern char data_02164108;
extern int data_021640f4;
extern void func_0205f32c(void);
extern void func_02058338(void);
extern int func_0205851c(int bit, int word);
extern void func_02058544(int a, void *b);
extern void func_02057458(char *p);
#pragma opt_strength_reduction off
void func_0205f418(void) {
    int i;
    if (data_021640e8 != 0) {
        return;
    }
    data_021640e8    = 1;
    data_021640f8[0] = 0;
    data_021640f8[1] = 0;
    func_02058338();
    while (func_0205851c(8, 1) == 0)
        ;
    func_02058544(8, (void *) func_0205f32c);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0216411c + (i << 3)) = 0;
    }
    func_02057458(&data_02164108);
    data_021640f4 = *(int *) 0x27ffc3c;
}
