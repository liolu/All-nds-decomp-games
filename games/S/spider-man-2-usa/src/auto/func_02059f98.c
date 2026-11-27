/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021424e8 from https://github.com/RonyxDumb/mkds src/arm9/021424e8_func_021424e8.c (license: none), reused by
 * tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_02161670;
void func_02059f98(void) {
    struct Node72 *head = data_02161670;
    if (head == 0) {
        return;
    }
    do {
        data_02161670 = head->next;
        head->fn(head->object, -1);
        head = data_02161670;
    } while (head != 0);
}
