/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e334 from projets/children-of-mana/src/auto/func_0205e334.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern unsigned short data_0206d980;
extern int data_0206d998[2];
extern short data_0206d9bc;
extern char data_0206d9a8;
extern int data_0206d990;
extern void func_0204f3a8(void);
extern void func_0204be7c(void);
extern int func_0204c060(int bit, int word);
extern void func_0204c088(int a, void *b);
extern void func_0204942c(char *p);
#pragma opt_strength_reduction off
void func_0204f494(void) {
    int i;
    if (data_0206d980 != 0) {
        return;
    }
    data_0206d980    = 1;
    data_0206d998[0] = 0;
    data_0206d998[1] = 0;
    func_0204be7c();
    while (func_0204c060(8, 1) == 0)
        ;
    func_0204c088(8, (void *) func_0204f3a8);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0206d9bc + (i << 3)) = 0;
    }
    func_0204942c(&data_0206d9a8);
    data_0206d990 = *(int *) 0x27ffc3c;
}
