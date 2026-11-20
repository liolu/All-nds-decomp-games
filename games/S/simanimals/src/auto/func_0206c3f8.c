/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_02064a3c(void);
extern void func_02064a50(int state);
extern void func_020650c4(void *dst, int value, int size);
extern void func_0206329c(void *queue);
extern void func_0206318c(void);
extern char data_020911c8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_0206c3f8(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020650c4(&job, 0, 0x24);
        enabled = func_02064a3c();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_0206329c(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_02064a50(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_02064a3c();
        done                              = job.done;
        *((char *) &data_020911c8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_020911c8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_02064a50(enabled);
        } else {
            func_0206318c();
            return;
        }
    }
}
