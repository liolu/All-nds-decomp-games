/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* func_02073004 from projets/nintendogs-shiba-friends/src/donor/func_02073004.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern "C" {
extern char *data_0206ab48;
extern int func_0204290c(unsigned int id);
}
extern "C" int func_0204290c(unsigned int id) {
    char *root = data_0206ab48;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0x14);
    char *tbl  = (off == 0) ? 0 : sub + off;
    if (tbl == 0) {
        return 0;
    }
    if ((int) id < 0) {
        return 0;
    }
    if (id >= *(unsigned *) tbl) {
        return 0;
    }
    int v      = ((int *) (tbl + id * 4))[1];
    char *base = *(char **) (root + 0x84);
    return (v == 0) ? 0 : (int) (base + v);
}
