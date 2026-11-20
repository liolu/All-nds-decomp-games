/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203b87c from projets/battle-of-giants-dinosaurs/src/auto/func_0203b87c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_020a011c;
void func_0200750c(void) {
    struct Node72 *head = data_020a011c;
    if (head == 0) {
        return;
    }
    do {
        data_020a011c = head->next;
        head->fn(head->object, -1);
        head = data_020a011c;
    } while (head != 0);
}
