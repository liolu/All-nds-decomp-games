/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203a35c from projets/battle-of-giants-dinosaurs/src/auto/func_0203a35c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02006048(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm void func_02005fc0(register void* c);
// clang-format on
int func_02006048(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_02005fc0(&buffer[i]);
    }

    return 0;
}
