/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ov114_02260060 from https://github.com/pret/pokeplatinum src/overlay114/ov114_02260044.c (license: none), reused by
 * tools/donor_match.py */
typedef struct UnkStruct_ov114_0225D678_t UnkStruct_ov114_0225D678;
extern void func_02040884(UnkStruct_ov114_0225D678 *param0);
typedef unsigned char u8;
typedef int (*UnkFuncPtr_02032868)(void);
typedef u8 *(*UnkFuncPtr_0203290C)(int, void *, int);
typedef void (*UnkFuncPtr_020F8E60)(int, int, void *, void *);
typedef struct CommCmdTable {
    UnkFuncPtr_020F8E60 unk_00;
    UnkFuncPtr_02032868 unk_04;
    UnkFuncPtr_0203290C unk_08;
} CommCmdTable;
extern const CommCmdTable *func_0203eef4(void);
extern int func_0203f484(void);
extern void func_020408b8(const CommCmdTable *param0, int param1, void *param2);
void func_02040884(UnkStruct_ov114_0225D678 *param0) {
    func_020408b8(func_0203eef4(), func_0203f484(), param0);
}
