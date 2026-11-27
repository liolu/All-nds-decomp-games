/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_FriendInit from https://github.com/Project-Holon/aletheia src/matched/ov_sdk/ov009_func_021689BC.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
extern char data_0210e8cc[];
extern void func_0204804c(void *frienddata, int setflag);
void func_0204fcac(char *p, int a1, int a2, int a3, int n) {
    int i;
    char *q;

    *(char **) (data_0210e8cc + 0xc)                    = p;
    *(int *) p                                          = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 4)     = a1;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 8)     = 0;
    q                                                   = *(char **) (data_0210e8cc + 0xc);
    *(int *) (q + 0xc)                                  = 0;
    *(int *) (q + 0x10)                                 = 0;
    *(int *) (q + 0x14)                                 = n;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x18)  = a3;
    *(char *) (*(char **) (data_0210e8cc + 0xc) + 0x1c) = 0;
    *(char *) (*(char **) (data_0210e8cc + 0xc) + 0x1d) = 0;
    *(char *) (*(char **) (data_0210e8cc + 0xc) + 0x1e) = 0;
    *(char *) (*(char **) (data_0210e8cc + 0xc) + 0x1f) = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x20)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x24)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x28)  = a2;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x2c)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x30)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x34)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x38)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x3c)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x40)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x44)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x48)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x4c)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x50)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x54)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x58)  = 0;
    *(int *) (*(char **) (data_0210e8cc + 0xc) + 0x5c)  = 0;

    for (i = 0; i < n; i++) {
        func_0204804c((void *) (*(int *) (*(char **) (data_0210e8cc + 0xc) + 0x18) + i * 12), 0);
    }
}
