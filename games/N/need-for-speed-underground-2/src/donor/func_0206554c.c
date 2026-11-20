/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200cbac from projets/children-of-mana/src/donor/func_0200cbac.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_0206554c(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int func_020654e8(void);
// clang-format on
int func_0206554c(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_020654e8();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}
