/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct List {
    void *head;
    void *tail;
    u16 count;
    u16 offset;
} List;
typedef struct Link {
    void *prev;
    void *next;
} Link;
void func_0200dc1c();
void func_0200dbbc(List *list, void *obj) {
    Link *l;
    if (list->head == NULL) {
        func_0200dc1c();
        return;
    }
    l                                                  = (Link *) ((u32) obj + list->offset);
    l->prev                                            = list->tail;
    l->next                                            = NULL;
    ((Link *) ((u32) list->tail + list->offset))->next = obj;
    list->tail                                         = obj;
    list->count++;
}
