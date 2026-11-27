/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b274 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205b274.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int func_0205b834(void);
extern int data_021617a4;
extern int data_021617b4;
extern void **data_021617c4[];
extern void **data_021617b0;
extern void **data_021617a0;
extern int data_021617bc;
void **func_0205b508(int flag) {
    void **head;
    void **node;
    int idx;

    if (flag == 0) {
        if (func_0205b834() == (unsigned int) data_021617a4) {
            return 0;
        }
    } else {
        while (func_0205b834() == (unsigned int) data_021617a4) {
        }
    }

    idx           = data_021617b4;
    head          = *(void ***) ((int) data_021617c4 + idx * 4);
    idx           = idx + 1;
    data_021617b4 = idx;
    if (idx > 8) {
        data_021617b4 = 0;
    }

    node = head;
    while (*node != 0) {
        node = (void **) *node;
    }

    if (data_021617b0 != 0) {
        *data_021617b0 = head;
    } else {
        data_021617a0 = head;
    }
    data_021617b0 = node;
    data_021617bc = data_021617bc - 1;
    data_021617a4 = data_021617a4 + 1;
    return head;
}
