/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020754b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0205c948(void);
extern u32 func_0205c95c(u32 irq_flag);
extern void *func_02075484(void *arc);
extern void *func_02075148(u32 fileId);
extern void func_0207512c(u32 fileId, void *mem);
extern void func_02075e24(void *mem, void *arc, u32 fileId);
void func_02075e24(void *mem, void *arc, u32 fileId) {
    void *prev;
    int irq;

    if (arc == 0) {
        return;
    }

    irq  = func_0205c948();
    prev = func_02075484(arc);
    if (mem == func_02075148(fileId)) {
        func_0207512c(fileId, 0);
    }
    func_02075484(prev);
    func_0205c95c(irq);
}
