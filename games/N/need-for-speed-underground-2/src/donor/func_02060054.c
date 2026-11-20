/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e334 from projets/children-of-mana/src/auto/func_0205e334.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern unsigned short data_0217cd00;
extern int data_0217cd18[2];
extern short data_0217cd3c;
extern char data_0217cd28;
extern int data_0217cd10;
extern void func_0205ff68(void);
extern void func_0205ca74(void);
extern int func_0205cc58(int bit, int word);
extern void func_0205cc80(int a, void *b);
extern void func_0205a648(char *p);
#pragma opt_strength_reduction off
void func_02060054(void) {
    int i;
    if (data_0217cd00 != 0) {
        return;
    }
    data_0217cd00    = 1;
    data_0217cd18[0] = 0;
    data_0217cd18[1] = 0;
    func_0205ca74();
    while (func_0205cc58(8, 1) == 0)
        ;
    func_0205cc80(8, (void *) func_0205ff68);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0217cd3c + (i << 3)) = 0;
    }
    func_0205a648(&data_0217cd28);
    data_0217cd10 = *(int *) 0x27ffc3c;
}
