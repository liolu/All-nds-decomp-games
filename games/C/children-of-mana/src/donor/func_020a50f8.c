/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205dbf0 from https://github.com/watamelonman/smtsj-decomp libs/NitroSDK/sdk_0205dacc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {
    u32 unk_00[4];
    u32 count;
    u32 groupCount;
    u8 entries[1];
} Unk05dacc_Resource;
typedef struct {
    u32 unk_00[4];
    char name[32];
    void *output;
    u8 unk_34[0x24];
    u8 ready;
} Unk05dacc_Item;
typedef struct {
    u32 unk_00[3];
    u32 count;
    u32 unk_10;
    u8 entries[1];
} Unk05dacc_Group;
typedef struct {
    Unk05dacc_Resource *resource;
    Unk05dacc_Item **items;
    u32 count;
    Unk05dacc_Group *group;
    u8 *groupBegin;
    u8 *groupEnd;
    u32 borrowed;
} Unk05dacc_Handle;
extern void func_020a50f8(Unk05dacc_Handle *handle, Unk05dacc_Item *item);
void func_020a50f8(Unk05dacc_Handle *handle, Unk05dacc_Item *item) {
    handle->items[handle->count] = item;
    handle->count                = handle->count + 1;
}
