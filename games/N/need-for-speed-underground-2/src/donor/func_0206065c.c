/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a4064 from projets/pokemon-dash/src/donor/func_020a4064.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
struct T867bc {
    int key;
    char pad[0x24];
};
extern struct T867bc data_0206c174[];
struct T867bc *func_0206065c(int arg) {
    struct T867bc *p = data_0206c174;
    for (;;) {
        if (p->key == arg) {
            return p;
        }
        if (p->key == 0) {
            return 0;
        }
        p++;
    }
}
