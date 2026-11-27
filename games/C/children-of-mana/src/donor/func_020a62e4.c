/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Obj_Release from https://github.com/Yokimitsuro/khdays-decomp src/engine/Obj_Release.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020a62e4(void *object);
extern void func_020a621c(void *p);
extern void func_020983ec(void *p);
int func_020a62e4(void *object) {
    func_020983ec(object);
    func_020a621c(object);
    return 1;
}
