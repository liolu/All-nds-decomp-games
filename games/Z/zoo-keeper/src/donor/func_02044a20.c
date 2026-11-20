/* compiler: 1.2/sp2p3  */
/* func_0208e10c from projets/spyro-shadow-legacy/src/auto/func_0208e10c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204213c(void *);
extern M2C_UNK func_02044944(void *);
extern M2C_UNK func_02049324(M2C_UNK *);
extern M2C_UNK func_02049398(M2C_UNK *);
extern M2C_UNK func_0204d72c(void *);
extern M2C_UNK data_0206ab80;
void func_02044a20(void *arg0) {
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x10C))) << 0x1F) >> 0x1F) != 0) {
        func_0204d72c(arg0 + 0x5C);
    }
    func_02049398(&data_0206ab80);
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x10C))) << 0x1E) >> 0x1F) != 0) {
        func_0204213c(arg0);
    }
    func_02044944(arg0);
    func_02049324(&data_0206ab80);
}
