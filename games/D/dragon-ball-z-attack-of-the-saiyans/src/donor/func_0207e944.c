/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_ReadRomCallback from projets/blue-dragon-awakened-shadow/src/auto/FSi_ReadRomCallback.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern int func_02089bc4(int a, int b, int c, int d, int e, int f, int g);
extern int func_0207e920();
extern int *data_020d84cc[];
int func_0207e944(int a, int b, int c, int d) {
    func_02089bc4((int) data_020d84cc[1], c, b, d, (int) func_0207e920, a, 1);
    return 6;
}
