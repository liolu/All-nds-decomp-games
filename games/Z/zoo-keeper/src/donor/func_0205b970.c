/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200e104 from projets/children-of-mana/src/auto/func_0200e104.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_0206f5e8;
void func_0205b970(void) {
    struct Node72 *head = data_0206f5e8;
    if (head == 0) {
        return;
    }
    do {
        data_0206f5e8 = head->next;
        head->fn(head->object, -1);
        head = data_0206f5e8;
    } while (head != 0);
}
