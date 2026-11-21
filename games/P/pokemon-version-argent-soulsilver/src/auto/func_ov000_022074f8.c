#include "m2c.h"
char *func_ov000_022074f8(int **a, int k) {
    char *c = *(char **) (*(char **) a + 0x434);
    while (c) {
        if (*(int *) (c + 0xc) == k && *(int *) c == 0x69) {
            return c;
        }
        c = *(char **) (c + 0x3c);
    }
    return 0;
}