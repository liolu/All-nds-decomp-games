typedef struct {
    short a;
    unsigned short e;
} G;
void func_ov013_0223d6c8(int);
void func_ov013_0223d744(int);
void func_ov013_0223dec4(G *g) {
    if (g->e != 0) {
        func_ov013_0223d6c8(9);
        func_ov013_0223d744(g->e);
    } else {
        func_ov013_0223d6c8(1);
    }
}
