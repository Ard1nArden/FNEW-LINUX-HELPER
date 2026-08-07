#include <dirent.h>
#include <stdio.h>
#include <string.h>

typedef enum {
    LANG_UNKNOWN = 0,

    LANG_PY,    // 1 - .py
    LANG_C,     // 2 - .c
    LANG_CPP,   // 3 - .cpp
    LANG_JAVA,  // 4 - .java
    LANG_GO,    // 5 - .go
    LANG_RUST,  // 6 - .rs
    LANG_CSHARP, // 7 - .cs
    LANG_JS,    // 8 - .js
    LANG_TS,    // 9 - .ts
    LANG_KT,    // 10 - .kt (Kotlin)
    LANG_SWIFT, // 11 - .swift
} Language;


Language checking_language(const char *lang) {

    if (strcmp(lang, "Python") == 0 || strcmp(lang, "py") == 0 || strcmp(lang, "python") == 0)
        return LANG_PY;

    if (strcmp(lang, "C") == 0 || strcmp(lang, "c") == 0)
        return LANG_C;

    if (strcmp(lang, "C++") == 0 || strcmp(lang, "CPP") == 0 || strcmp(lang, "cpp") == 0)
        return LANG_CPP;

    if (strcmp(lang, "Java") == 0 || strcmp(lang, "java") == 0)
        return LANG_JAVA;

    if (strcmp(lang, "Go") == 0 || strcmp(lang, "go") == 0 || strcmp(lang, "golang") == 0)
        return LANG_GO;

    if (strcmp(lang, "Rust") == 0 || strcmp(lang, "rust") == 0 || strcmp(lang, "rs") == 0)
        return LANG_RUST;

    if (strcmp(lang, "CSharp") == 0 || strcmp(lang, "csharp") == 0 || strcmp(lang, "cs") == 0)
        return LANG_CSHARP;

    if (strcmp(lang, "JavaScript") == 0 || strcmp(lang, "javascript") == 0 || strcmp(lang, "js") == 0)
        return LANG_JS;

    if (strcmp(lang, "TypeScript") == 0 || strcmp(lang, "typescript") == 0 || strcmp(lang, "ts") == 0)
        return LANG_TS;

    if (strcmp(lang, "Kotlin") == 0 || strcmp(lang, "kotlin") == 0 || strcmp(lang, "kt") == 0)
        return LANG_KT;

    if (strcmp(lang, "Swift") == 0 || strcmp(lang, "swift") == 0)
        return LANG_SWIFT;

    return LANG_UNKNOWN;
}
