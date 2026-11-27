/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(int state);
extern void func_020d4994(void *dst, int value, int size);
extern void func_020d1e7c(void *queue);
extern void func_020d1bd0(void);
extern char data_021e4f88;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_020e357c(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020d4994(&job, 0, 0x24);
        enabled = _Z20DisableIRQInterruptsv();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020d1e7c(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        _Z20SetIRQInterruptStatei(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = _Z20DisableIRQInterruptsv();
        done                              = job.done;
        *((char *) &data_021e4f88 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_021e4f88 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            _Z20SetIRQInterruptStatei(enabled);
        } else {
            func_020d1bd0();
            return;
        }
    }
}
