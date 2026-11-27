/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0204fe5c from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
struct E {
    int field0;
    int field4;
};
extern "C" {
extern struct E data_02163ae8[];
extern void func_0205ae90(void *a, int b, int c);
extern u16 func_0205b89c(int x);
extern void func_0205cc84(char *obj, int arg1);
}
extern "C" void func_0205cc84(char *obj, int arg1) {
    unsigned char new_var;
    int i                   = 0;
    *((int *) (obj + 0x24)) = arg1;
    if ((*((int *) (obj + 0x30))) > 0) {
        if (1) {
        }
        do {
            unsigned char idx = new_var = *((unsigned char *) ((obj + 0x34) + i));
            int r = ((int (*)(int arg)) func_0205b89c)((*((int *) (obj + 0x24))) + data_02163ae8[idx].field4);
            func_0205ae90((void *) (1 << idx), r & 0xff, r >> 8);
            i++;
        } while (i < (*((int *) (obj + 0x30))));
    }
}
