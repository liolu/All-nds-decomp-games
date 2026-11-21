typedef struct {
    char pad[0x84];
    int arr[1];
} P;
void func_ov000_02213f78(void *, int);
void func_ov000_02214880(P *p) {
    int i;
    for (i = 0; i < *(int *) ((char *) p + 0x480); i++) {
        func_ov000_02213f78(p, p->arr[i]);
    }
    *(int *) ((char *) p + 0x480) = 0;
}
