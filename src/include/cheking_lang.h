#ifndef CHECKING_LANG_H
#define CHECKING_LANG_H

typedef enum {
    LANG_UNKNOWN = 0,

    LANG_PY,
    LANG_C,
    LANG_CPP,
    LANG_JAVA,
    LANG_GO,
    LANG_RUST,
    LANG_CSHARP,
    LANG_JS,
    LANG_TS,
    LANG_KT,
    LANG_SWIFT
} Language;

Language checking_language(const char *lang);

#endif
