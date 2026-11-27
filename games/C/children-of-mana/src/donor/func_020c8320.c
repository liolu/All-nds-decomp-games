/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02003b50 from https://github.com/banatic/acww-decomp src/main/func_02003b50.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020c7a64(void *);
extern void func_0209d50c(void *);
extern void func_0200f2c4(void *);
extern unsigned char data_0210a614[];
void *func_020c8320(void *obj) {
    *(unsigned int *) obj = (unsigned int) data_0210a614;
    func_020c7a64(obj);
    func_0209d50c((char *) obj + 12);
    func_0200f2c4(obj);
    return obj;
}
