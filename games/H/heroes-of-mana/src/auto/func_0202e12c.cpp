/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* func_0203a638 from projets/battle-of-giants-dinosaurs/src/donor/func_0203a638.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
inline char *__DecodeAddress(char *p, void **paddr) {
    unsigned long addr;

    addr = ((unsigned char *) p)[0] | (((unsigned char *) p)[1] << 8) | (((unsigned char *) p)[2] << 16) |
           (((unsigned char *) p)[3] << 24);

    *paddr = (void *) addr;
    return (p + 4);
}
extern "C" char *func_0202de8c(char *p, long *pnum);
extern "C" char *func_0202df18(char *p, unsigned long *pnum);
typedef struct ExceptionTableIndex {
    char *function_address;
    unsigned long function_size;
    char *exception_table;
} ExceptionTableIndex;
typedef unsigned char exaction_type;
extern "C" {
typedef short vbase_ctor_arg_type;
typedef unsigned char local_cond_type;
typedef struct CatchInfo {
    void *location;
    void *typeinfo;
    void *dtor;
    void *sublocation;
    long pointercopy;
    void *stacktop;
} CatchInfo;
}
typedef struct TargetContext {
    unsigned long GPR[16];
    char *throwSP;
    unsigned long frame_size;
    unsigned long argument_size;
    unsigned short saved_GPRs;
    bool has_flushback;
    bool has_frame_ptr;
    bool is_Thumb;
} TargetContext;
typedef struct ThrowContext {
    unsigned char *throwtype;
    void *location;
    void *dtor;
    CatchInfo *catchinfo;
    char *returnaddr;
    char *SP;
    char *FP;
    TargetContext target;
} ThrowContext;
typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;
typedef struct ExceptionInfo {
    char *current_function;
    char *exception_record;
    char *action_pointer;
    ExceptionTableIndex *exception_table_start;
    ExceptionTableIndex *exception_table_end;
    TargetExceptionInfo target;
} ExceptionInfo;
extern "C" char *func_0202fadc(ThrowContext *context, ExceptionInfo *info);
extern "C" void func_0202fb38(ThrowContext *context, ExceptionInfo *info);
enum {
    SKIP  = 0,
    APPLY = 1
};
typedef void (*DeleteFunc)(void *);
typedef struct ActionIterator {
    ExceptionInfo info;
    ThrowContext context;
} ActionIterator;
inline void Branch(ExceptionInfo *info, ThrowContext *context) {
    long target;
    func_0202de8c(info->action_pointer + sizeof(exaction_type), &target);
    info->action_pointer += target;
}
inline void DestroyLocal(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    long local;
    void *dtor;

    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &local);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        (((void (*)(void *, short))(dtor))(((context)->FP + (local)), (-1)));
    }

    info->action_pointer = ap;
}
inline void DestroyLocalCond(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regcond;
    long cond, local;
    void *dtor;
    local_cond_type destroyIt;

    regcond = *(exaction_type *) ap & 0x40;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &cond);
    ap = func_0202de8c(ap, &local);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regcond) {
            destroyIt = (local_cond_type) ((context)->target.GPR[cond]);
        } else {
            destroyIt = *(local_cond_type *) ((context)->FP + (cond));
        }

        if (destroyIt) {
            (((void (*)(void *, short))(dtor))(((context)->FP + (local)), (-1)));
        }
    }

    info->action_pointer = ap;
}
inline void DestroyLocalPointer(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr;
    long ptr;
    void *dtor, *objectptr;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr) {
            objectptr = (void *) ((context)->target.GPR[ptr]);
        } else {
            objectptr = *(void **) ((context)->FP + (ptr));
        }

        (((void (*)(void *, short))(dtor))(objectptr, (-1)));
    }

    info->action_pointer = ap;
}
inline void DestroyLocalArray(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    long array;
    unsigned long nelements, elemsize, i;
    void *dtor;
    char *arrayptr;

    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &array);
    ap = func_0202df18(ap, &nelements);
    ap = func_0202df18(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        arrayptr = (char *) ((context)->FP + (array));
        for (arrayptr += nelements * elemsize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            (((void (*)(void *, short))(dtor))(arrayptr, (-1)));
        }
    }

    info->action_pointer = ap;
}
inline void DestroyVarLenArray(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr1, regptr2;
    long ptr1, ptr2;
    unsigned long nelements, elemsize, i;
    void *dtor;
    char *arrayptr, *arraysize;

    regptr1 = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap      = func_0202de8c(ap, &ptr1);
    regptr2 = *(unsigned char *) ap & 0x20;
    ap += sizeof(char);
    ap = func_0202de8c(ap, &ptr2);
    ap = func_0202df18(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr1) {
            arrayptr = (char *) ((context)->target.GPR[ptr1]);
        } else {
            arrayptr = *(char **) ((context)->FP + (ptr1));
        }

        if (regptr2) {
            arraysize = (char *) ((context)->target.GPR[ptr2]);
        } else {
            arraysize = *(char **) ((context)->FP + (ptr2));
        }

        nelements = (unsigned long) arraysize / elemsize;
        for (arrayptr += (unsigned long) arraysize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            (((void (*)(void *, short))(dtor))(arrayptr, (-1)));
        }
    }

    info->action_pointer = ap;
}
inline void FreeVarLenArray(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr1;
    long ptr1, spaddend;
    long *arrayptr;

    regptr1 = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr1);

    if (apply) {
        if (regptr1) {
            arrayptr = (long *) ((context)->target.GPR[ptr1]);
        } else {
            arrayptr = *(long **) ((context)->FP + (ptr1));
        }
    }

    info->action_pointer = ap;
}
inline void DestroyBaseVTTObject(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr;
    long ptr, offset, vtt_offset;
    void *dtor;
    char *objectptr, *vtt;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = func_0202de8c(ap, &offset);
    ap = __DecodeAddress(ap, (void **) &vtt);
    ap = func_0202de8c(ap, &vtt_offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr) {
            objectptr = (char *) ((context)->target.GPR[ptr]);
        } else {
            objectptr = *(char **) ((context)->FP + (ptr));
        }

        (((void (*)(void *, void *))(dtor))(objectptr + offset, vtt + vtt_offset));
    }

    info->action_pointer = ap;
}
inline void DestroyBaseVTTPointer(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr1, regptr2;
    long ptr1, ptr2, offset, vtt_offset;
    void *dtor;
    char *objectptr, *vtt;

    regptr1 = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap      = func_0202de8c(ap, &ptr1);
    ap      = func_0202de8c(ap, &offset);
    regptr2 = *(unsigned char *) ap & 0x20;
    ap += sizeof(char);
    ap = func_0202de8c(ap, &ptr2);
    ap = func_0202de8c(ap, &vtt_offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr1) {
            objectptr = (char *) ((context)->target.GPR[ptr1]);
        } else {
            objectptr = *(char **) ((context)->FP + (ptr1));
        }

        if (regptr2) {
            vtt = (char *) ((context)->target.GPR[ptr2]);
        } else {
            vtt = *(char **) ((context)->FP + (ptr2));
        }

        (((void (*)(void *, void *))(dtor))(objectptr + offset, vtt + vtt_offset));
    }

    info->action_pointer = ap;
}
inline void DestroyBase(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr;
    long ptr, offset;
    void *dtor;
    char *objectptr;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = func_0202de8c(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr) {
            objectptr = (char *) ((context)->target.GPR[ptr]);
        } else {
            objectptr = *(char **) ((context)->FP + (ptr));
        }

        (((void (*)(void *, short))(dtor))(objectptr + offset, (0)));
    }

    info->action_pointer = ap;
}
inline void DestroyMember(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr;
    long ptr, offset;
    void *dtor;
    char *objectptr;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = func_0202de8c(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr) {
            objectptr = (char *) ((context)->target.GPR[ptr]);
        } else {
            objectptr = *(char **) ((context)->FP + (ptr));
        }

        (((void (*)(void *, short))(dtor))(objectptr + offset, (-1)));
    }

    info->action_pointer = ap;
}
inline void DestroyMemberCond(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr, regcond;
    long cond, ptr, offset;
    void *dtor;
    char *objectptr;
    vbase_ctor_arg_type destroyIt;

    regcond = *(exaction_type *) ap & 0x40;
    regptr  = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &cond);
    ap = func_0202de8c(ap, &ptr);
    ap = func_0202de8c(ap, &offset);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regcond) {
            destroyIt = (vbase_ctor_arg_type) ((context)->target.GPR[cond]);
        } else {
            destroyIt = *(vbase_ctor_arg_type *) ((context)->FP + (cond));
        }

        if (destroyIt) {
            if (regptr) {
                objectptr = (char *) ((context)->target.GPR[ptr]);
            } else {
                objectptr = *(char **) ((context)->FP + (ptr));
            }

            (((void (*)(void *, short))(dtor))(objectptr + offset, (-1)));
        }
    }

    info->action_pointer = ap;
}
inline void DestroyMemberArray(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    int regptr;
    long ptr, offset;
    unsigned long nelements, elemsize, i;
    void *dtor;
    char *arrayptr;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = func_0202de8c(ap, &offset);
    ap = func_0202df18(ap, &nelements);
    ap = func_0202df18(ap, &elemsize);
    ap = __DecodeAddress(ap, &dtor);

    if (apply) {
        if (regptr) {
            arrayptr = (char *) ((context)->target.GPR[ptr]) + offset;
        } else {
            arrayptr = *(char **) ((context)->FP + (ptr)) + offset;
        }

        for (arrayptr += nelements * elemsize, i = nelements; i > 0; i--) {
            arrayptr -= elemsize;
            (((void (*)(void *, short))(dtor))(arrayptr, (-1)));
        }
    }

    info->action_pointer = ap;
}
inline void DeletePointer(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    long ptr;
    void *deletefunc;
    char *objectptr;
    int regptr;

    regptr = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &ptr);
    ap = __DecodeAddress(ap, &deletefunc);

    if (apply) {
        if (regptr) {
            objectptr = (char *) ((context)->target.GPR[ptr]);
        } else {
            objectptr = *(char **) ((context)->FP + (ptr));
        }

        ((DeleteFunc) (deletefunc))(objectptr);
    }

    info->action_pointer = ap;
}
inline void DeletePointerCond(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    long cond, ptr;
    void *deletefunc;
    char *objectptr;
    int regptr, regcond;
    local_cond_type deleteIt;

    regcond = *(exaction_type *) ap & 0x40;
    regptr  = *(exaction_type *) ap & 0x20;
    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &cond);
    ap = func_0202de8c(ap, &ptr);
    ap = __DecodeAddress(ap, &deletefunc);

    if (apply) {
        if (regcond) {
            deleteIt = (local_cond_type) ((context)->target.GPR[cond]);
        } else {
            deleteIt = *(local_cond_type *) ((context)->FP + (cond));
        }

        if (deleteIt) {
            if (regptr) {
                objectptr = (char *) ((context)->target.GPR[ptr]);
            } else {
                objectptr = *(char **) ((context)->FP + (ptr));
            }

            ((DeleteFunc) (deletefunc))(objectptr);
        }
    }

    info->action_pointer = ap;
}
inline void CatchBlock(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    void *catch_type;
    unsigned long pcoffset;
    long cinfo_ref;

    ap += sizeof(exaction_type);
    ap = __DecodeAddress(ap, &catch_type);
    ap = func_0202df18(ap, &pcoffset);
    ap = func_0202de8c(ap, &cinfo_ref);

    if (apply) {
    }

    info->action_pointer = ap;
}
inline void ActiveCatchBlock(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    long cinfo_ref;
    CatchInfo *catchinfo;

    ap += sizeof(exaction_type);
    ap = func_0202de8c(ap, &cinfo_ref);

    if (apply) {
        catchinfo = (CatchInfo *) ((context)->FP + (cinfo_ref));
        if (catchinfo->dtor) {
            if (context->location == catchinfo->location) {
                context->dtor = catchinfo->dtor;
            } else {
                (((void (*)(void *, short)) catchinfo->dtor)(catchinfo->location, (-1)));
            }
        }
    }

    info->action_pointer = ap;
}
inline void Specification(int apply, ExceptionInfo *info, ThrowContext *context) {
    char *ap = info->action_pointer;
    unsigned long nspecs, pcoffset;
    long cinfo_ref;

    ap += sizeof(exaction_type);
    ap = func_0202df18(ap, &nspecs);
    ap = func_0202df18(ap, &pcoffset);
    ap = func_0202de8c(ap, &cinfo_ref);
    ap += nspecs * sizeof(char *);

    if (apply) {
    }

    info->action_pointer = ap;
}
extern "C" void func_0202e008(char *return_address, ExceptionInfo *info);
extern "C" exaction_type func_0202e12c(ActionIterator *iter) {
    ExceptionInfo *info   = &iter->info;
    ThrowContext *context = &iter->context;
    exaction_type action;

    while (true) {
        if (!info->action_pointer || *(exaction_type *) info->action_pointer & 0x80) {
            func_0202e008(func_0202fadc(context, info), info);
            if (!info->exception_record) {
                return -1;
            }
            func_0202fb38(context, info);
            if (!info->action_pointer) {
                continue;
            }
        } else {
            switch (*(exaction_type *) info->action_pointer & 0x1F) {
                case 2:
                    DestroyLocal(SKIP, info, context);
                    break;
                case 3:
                    DestroyLocalCond(SKIP, info, context);
                    break;
                case 4:
                    DestroyLocalPointer(SKIP, info, context);
                    break;
                case 5:
                    DestroyLocalArray(SKIP, info, context);
                    break;
                case 6:
                    DestroyBase(SKIP, info, context);
                    break;
                case 7:
                    DestroyMember(SKIP, info, context);
                    break;
                case 8:
                    DestroyMemberCond(SKIP, info, context);
                    break;
                case 9:
                    DestroyMemberArray(SKIP, info, context);
                    break;
                case 10:
                    DeletePointer(SKIP, info, context);
                    break;
                case 11:
                    DeletePointerCond(SKIP, info, context);
                    break;
                case 12:
                    CatchBlock(SKIP, info, context);
                    break;
                case 13:
                    ActiveCatchBlock(SKIP, info, context);
                    break;
                case 15:
                    Specification(SKIP, info, context);
                    break;
                case 16:
                    DestroyBaseVTTObject(SKIP, info, context);
                    break;
                case 17:
                    DestroyBaseVTTPointer(SKIP, info, context);
                    break;
                case 18:
                    DestroyVarLenArray(SKIP, info, context);
                    break;
                case 19:
                    FreeVarLenArray(SKIP, info, context);
                    break;
                default:
                    return -1;
            }
        }

        while ((action = *(exaction_type *) info->action_pointer & 0x1F) == 1) {
            Branch(info, context);
        }

        return (action);
    }
}
