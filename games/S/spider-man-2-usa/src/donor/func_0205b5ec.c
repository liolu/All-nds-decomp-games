/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b358 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205b358.c (license: MIT), reused
 * by tools/donor_match.py */
struct Node5b1a4;
typedef struct N5b358 {
    struct N5b358 *next;
    int pad[5];
} N5b358;
extern N5b358 data_02161a80[256];
extern N5b358 *data_021617a0;
extern unsigned char data_02162a80[];
extern int data_021617a8;
extern int data_021617ac;
extern int data_021617bc;
extern int data_021617b4;
extern int data_021617b8;
extern int data_021617a4;
extern void *data_02163268;
extern void *data_021617b0;
extern int data_021617c0;
extern int data_02161800;
extern void *data_021632e0;
extern void func_0205b0f8(void);
extern void func_0205b7b4(char *p);
extern void *func_0205b46c(int arg);
extern void func_0205b438(struct Node5b1a4 *node);
extern void func_0205b304(int arg);
void func_0205b5ec(void) {
    int i;
    void *p;

    func_0205b0f8();

    data_021617a0 = data_02161a80;
    for (i = 0; i < 0xff; i++) {
        data_02161a80[i].next = &data_02161a80[i + 1];
    }

    *(int *) (data_02162a80 + 0x7e8) = 0;
    data_021617b0                    = &data_02163268;
    data_021617a8                    = 0;
    data_021617ac                    = 0;
    data_021617bc                    = 0;
    data_021617b4                    = 0;
    data_021617b8                    = 0;
    data_021617c0                    = 1;
    data_021617a4                    = 0;
    data_021632e0                    = &data_02161800;

    func_0205b7b4((char *) &data_02161800);

    p = func_0205b46c(1);
    if (p == 0) {
        return;
    }

    *(int *) ((char *) p + 4)   = 0x19;
    *(void **) ((char *) p + 8) = data_021632e0;
    func_0205b438((struct Node5b1a4 *) p);
    func_0205b304(1);
}
