/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b3d68 from projets/pokemon-dash/src/donor/func_020b3d68.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_0200d328(void *a, void *b, int d);
extern void func_0200c954(void *a, void *b, int x);
void func_0200d0dc(char *a, void *b, char *c, int d) {
    char *buf;
    int off;

    func_0200d328(a, b, d);

    off                                    = *(int *) (c + 8);
    buf                                    = *(char **) (a + 0x18) + off;
    *(int *) (*(char **) (a + 0x18) + off) = *(int *) (a + 4);
    *(int *) (buf + 4)                     = *(int *) a;
    *(int *) (buf + 8)                     = *(int *) (a + 8);
    *(int *) (buf + 0x14)                  = d;

    func_0200c954(a, b, *(int *) b + *(int *) (c + 4));
}
