/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02022438 from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_02022438.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern void func_0205a12c(u16 value, void *destination, u32 size);
void func_02066530(void *state) {
    volatile u16 fill_value;

    fill_value = 0;
    func_0205a12c(fill_value, (char *) state + 4, 0x18);
    *(u32 *) ((char *) state + 4) = 0x1000;
    *(u32 *) ((char *) state + 8) = 0x1000;
}
