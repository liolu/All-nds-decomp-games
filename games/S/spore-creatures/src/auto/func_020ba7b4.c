/* Reconstructed from USA ARM9 at 0x020d28c0 (324 bytes).
 * func_020ba7b4: resolves a path into an FS_File normalize request.
 * The local "ok" flag forces the FS_Record flag test to be materialised
 * as 0/1, which is what the original code does.
 */
/* Reconstructed from USA ARM9 at 0x020d28c0 (324 bytes). */
#include "m2c.h"

typedef struct FS_Record {
    u32 name;
    struct FS_Record *next;
    struct FS_Record *prev;
    u32 unk_0C;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 flags;
} FS_Record;

typedef struct FS_FilePosition {
    FS_Record *record;
    u16 id;
    u16 index;
    u32 position;
} FS_FilePosition;

typedef struct FS_FileIdentifier {
    FS_Record *record;
    u32 fileID;
} FS_FileIdentifier;

typedef struct FS_File {
    void *prev;
    void *next;
    FS_Record *record;
    u32 status;
    u32 unk_10;
    s32 result;
    void *queueNext;
    void *queueHead;
    u32 unk_20;
    u32 startPosition;
    u32 endPosition;
    u32 currentPosition;
    struct {
        FS_FilePosition position;
        const char *path;
        s32 isDirectory;
        union {
            FS_FileIdentifier *file;
            FS_FilePosition *directory;
        } response;
    } normalize;
} FS_File;

extern FS_FilePosition data_020f390c;
extern FS_Record *func_020ba15c(const char *name, s32 nameLen);
extern s32 func_020b9f8c(FS_File *file, u32 command);

s32 func_020ba7b4(FS_File *file, const u8 *path, FS_FileIdentifier *fileID, FS_FilePosition *dir) {
    FS_FilePosition pos;
    s32 i;
    s32 ok;

    if (path[0] == '/' || path[0] == '\\') {
        pos.record   = data_020f390c.record;
        pos.id       = 0;
        pos.position = 0;
        pos.index    = 0;
        path++;
    } else {
        pos = data_020f390c;
        for (i = 0; i <= 3; i++) {
            u8 c = path[i];
            if (c == '\0' || c == '/' || c == '\\') {
                break;
            }
            if (c == ':') {
                FS_Record *rec = func_020ba15c((const char *) path, i);
                if (rec == 0) {
                    return 0;
                }
                ok = (rec->flags & 2) != 0;
                if (ok == 0) {
                    return 0;
                }
                pos.record   = rec;
                pos.position = 0;
                pos.index    = 0;
                pos.id       = 0;
                path += i + 1;
                if (*path == '/' || *path == '\\') {
                    path++;
                }
                break;
            }
        }
    }
    file->record             = pos.record;
    file->normalize.path     = (const char *) path;
    file->normalize.position = pos;
    if (dir != 0) {
        file->normalize.isDirectory        = 1;
        file->normalize.response.directory = dir;
    } else {
        file->normalize.isDirectory   = 0;
        file->normalize.response.file = fileID;
    }
    return func_020b9f8c(file, 4);
}
