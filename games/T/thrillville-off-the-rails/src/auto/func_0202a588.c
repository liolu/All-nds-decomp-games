/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065a94 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02065a94.c (license: MIT), reused
 * by tools/donor_match.py */
struct Node65 {
    int key;
    char pad[0x24];
    struct Node65 *next;
};
extern struct Node65 *func_0202a5d4(void);
struct Node65 *func_0202a588(int key) {
    struct Node65 *p = func_0202a5d4();
    while (p != 0) {
        if (p->key == key) {
            return p;
        }
        p = p->next;
    }
    return 0;
}
