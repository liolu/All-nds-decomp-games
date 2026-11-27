/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* LogThrowAssertion from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_0213442c.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern char data_020fa668[];
extern void func_02001ebc(const char *fmt, ...);
extern void func_02001048(void);
void func_020014d8(const char *cond, const char *file, const char *func, int line) {
    func_02001ebc(data_020fa668, cond, file, func, line);
    func_02001048();
}
