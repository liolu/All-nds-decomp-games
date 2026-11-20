/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_02006be0(void);
extern void func_02006bf4(int state);
extern void func_020075b0(void *dst, int value, int size);
extern void func_020050e0(void *queue);
extern void func_02004ef8(void);
extern char data_02150aa8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_02018258(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020075b0(&job, 0, 0x24);
        enabled = func_02006be0();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020050e0(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_02006bf4(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_02006be0();
        done                              = job.done;
        *((char *) &data_02150aa8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_02150aa8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_02006bf4(enabled);
        } else {
            func_02004ef8();
            return;
        }
    }
}
