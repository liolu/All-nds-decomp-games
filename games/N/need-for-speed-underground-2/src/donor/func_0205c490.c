/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e910 from projets/pokemon-dash/src/donor/func_0209e910.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern unsigned int func_0205c7f0(void);
extern int data_0217b094;
extern int data_0217b0a4;
extern void **data_0217b0b4[];
extern void **data_0217b0a0;
extern void **data_0217b090;
extern int data_0217b0ac;
void **func_0205c490(int flag) {
    void **head;
    void **node;
    int idx;

    if (flag == 0) {
        if (func_0205c7f0() == (unsigned int) data_0217b094) {
            return 0;
        }
    } else {
        while (func_0205c7f0() == (unsigned int) data_0217b094) {
        }
    }

    idx           = data_0217b0a4;
    head          = *(void ***) ((int) data_0217b0b4 + idx * 4);
    idx           = idx + 1;
    data_0217b0a4 = idx;
    if (idx > 8) {
        data_0217b0a4 = 0;
    }

    node = head;
    while (*node != 0) {
        node = (void **) *node;
    }

    if (data_0217b0a0 != 0) {
        *data_0217b0a0 = head;
    } else {
        data_0217b090 = head;
    }
    data_0217b0a0 = node;
    data_0217b0ac = data_0217b0ac - 1;
    data_0217b094 = data_0217b094 + 1;
    return head;
}
