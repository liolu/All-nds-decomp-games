/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201ec1c from https://github.com/Yotona/twewy libs/cri/src/adx_cs.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef struct {
    char unk_00;
    int unk_04;
    int unk_08;
    int unk_0C;
    int unk_10;
    int unk_14;
    char unk_18;
    int unk_1C;
    int unk_20;
    int unk_24;
    int unk_28;
    char unk_2C[4];
    char unk_30[4];
    char unk_34[4];
    char unk_38[4];
    char unk_3C[4];
    char unk_40[4];
} ACSFDR;
typedef struct {
    char unk_00[0x0C];
    struct ACSSND *unk_0C;
    char unk_10[0x10];
    ACSFDR *fdrHndl;
    char unk_24[0x34];
    int unk_58;
    char unk_5C[0x4C];
    int numAdxt;
    char unk_AC;
    int unk_B0;
    int unk_B4;
    int unk_B8;
    int unk_BC;
    int unk_C0;
    char unk_C4[0x8];
    int unk_CC;
    int unk_D0;
    char unk_D4[0xC];
} ACSSND;
typedef struct ACSSVR ACSSVR;
typedef struct {
    ACSSND **snd;
    ACSFDR *unk_04;
    ACSFDR fdr;
    int unk_4C;
    char unk_50;
    char unk_51[0x3];
    int unk_54;
    int unk_58;
    int unk_5C;
} ACSVHL;
typedef struct ACSSVR {
    ACSSND **snd;
    char unk_04[0xC];
    ACSVHL *vhl;
    ACSVHL unk_14;
    int unk_74;
    int unk_78;
    int unk_7C;
    void (*unk_80)();
    int unk_84;
    void (*unk_88)();
    int unk_8C;
} ACSSVR;
extern ACSSND *func_02029910(ACSSVR *svr, int *param_2, ACSSND *work, unsigned int workSize);
extern ACSSND *func_0202f16c(int *param_1, ACSSND *work, unsigned int workSize);
extern ACSSVR *data_020e0ba0;
ACSSND *func_0202f16c(int *param_1, ACSSND *work, unsigned int workSize) {
    return func_02029910(data_020e0ba0, param_1, work, workSize);
}
