/* Reconstructed from USA ARM9 at 0x020d14ac (400 bytes).
 * Names and types are inferred from the binary.
 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;

/* The file system record a command is executed on. Its "method" callback and
 * the method flags that select it live at 0x54 and 0x58, its status word
 * (0x1c) carries the busy bits. */
typedef struct FS_Record {
    u32 name;
    void *next;
    void *prev;
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    u32 flags;
    u8 pad_20[0x34];
    s32 (*methodCB)(void *, s32);
    u32 methodFlags;
} FS_Record;

/* A queued file system command. */
typedef struct FS_File {
    void *prev;
    void *next;
    FS_Record *record;
    volatile u32 status;
    u32 unk_10;
    s32 result;
    u8 pad_18[4];
} FS_File;

extern void func_020b51e0(s32);
extern s32 func_020b6bd0(void);
extern s32 func_020b6be4(s32);
extern void func_020b9068(void *, s32);
extern s32 (*data_020dd32c[])(void *);

s32 func_020b90c4(FS_File *file, s32 command) {
    s32 result;
    FS_Record *rec = file->record;
    u32 bit        = 1 << command;
    s32 sel;
    u32 st;
    s32 b;

    st = file->status;
    if (st & 4) {
        sel = 1;
    } else {
        sel = 0;
    }
    if (sel != 0) {
        rec->flags |= 0x200;
    } else {
        rec->flags |= 0x100;
    }
    if (rec->methodFlags & bit) {
        result = rec->methodCB(file, command);
        switch (result) {
            case 0:
            case 1:
            case 4:
                file->result = result;
                break;
            case 8:
                rec->methodFlags &= ~bit;
                result = 7;
                break;
            default:
                break;
        }
    } else {
        result = 7;
    }
    if (result == 7) {
        result = data_020dd32c[command](file);
    }
    if (result == 6) {
        if (file->status & 4) {
            b = 1;
        } else {
            b = 0;
        }
        if (b != 0) {
            s32 temp_r5 = func_020b6bd0();
            if (rec->flags & 0x200) {
                b = 1;
            } else {
                b = 0;
            }
            if (b != 0) {
                do {
                    func_020b51e0((s32) ((u8 *) rec + 0x0C));
                    if (rec->flags & 0x200) {
                        b = 1;
                    } else {
                        b = 0;
                    }
                } while (b != 0);
            }
            result = file->result;
            func_020b6be4(temp_r5);
        }
    } else {
        if (file->status & 4) {
            b = 1;
        } else {
            b = 0;
        }
        if (b == 0) {
            rec->flags &= ~0x100;
            func_020b9068(file, result);
        } else {
            rec->flags &= ~0x200;
            file->result = result;
        }
    }
    return result;
}
