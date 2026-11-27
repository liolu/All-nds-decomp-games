/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206377c from projets/nintendogs-dachshund/src/donor/func_0206377c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_0200cb74(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm void func_0200cb34(register void* c);
// clang-format on
extern void func_0200cb34(void *c);
int func_0200cb74(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_0200cb34(&buffer[i]);
    }

    return 0;
}
