/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b3838 from projets/pokemon-dash/src/donor/func_020b3838.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_0200cbac(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int func_0200cb48(void);
// clang-format on
int func_0200cbac(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_0200cb48();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}
