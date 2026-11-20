/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203a30c from projets/battle-of-giants-dinosaurs/src/auto/func_0203a30c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02025af8(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int func_02025ad4(void);
// clang-format on
int func_02025af8(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_02025ad4();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}
