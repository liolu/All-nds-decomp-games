/* compiler: 1.2/sp2p3 */
typedef struct {
    short a;
    unsigned short e;
} G;
void func_02002480(int);
void func_02002460(int);
void func_02000d94(G *g) {
    if (g->e != 0) {
        func_02002480(9);
        func_02002460(g->e);
    } else {
        func_02002480(1);
    }
}
