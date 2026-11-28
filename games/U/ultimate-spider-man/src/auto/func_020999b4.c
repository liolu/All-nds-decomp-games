/* compiler: 1.2/sp2p3 */
/* func_020b3d68 from projets/pokemon-dash/src/donor/func_020b3d68.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_02099c10(void *a, void *b, int d);
extern void func_02099254(void *a, void *b, int x);
void func_020999b4(char *a, void *b, char *c, int d) {
    char *buf;
    int off;

    func_02099c10(a, b, d);

    off                                    = *(int *) (c + 8);
    buf                                    = *(char **) (a + 0x18) + off;
    *(int *) (*(char **) (a + 0x18) + off) = *(int *) (a + 4);
    *(int *) (buf + 4)                     = *(int *) a;
    *(int *) (buf + 8)                     = *(int *) (a + 8);
    *(int *) (buf + 0x14)                  = d;

    func_02099254(a, b, *(int *) b + *(int *) (c + 4));
}
