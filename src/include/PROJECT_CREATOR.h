#ifndef PROJECT_CREATOR_H
#define PROJECT_CREATOR_H

#include <stdio.h>
#include <string.h>

typedef struct {
    char *LANG_PY;     // 1 - .py
    char *LANG_C;      // 2 - .c
    char *LANG_CPP;    // 3 - .cpp
    char *LANG_JAVA;   // 4 - .java
    char *LANG_GO;     // 5 - .go
    char *LANG_RUST;   // 6 - .rs
    char *LANG_CSHARP; // 7 - .cs
    char *LANG_JS;     // 8 - .js
    char *LANG_TS;     // 9 - .ts
    char *LANG_KT;     // 10 - .kt
    char *LANG_SWIFT;  // 11 - .swift
} LANG;

// --- Функции для Standard структуры (-s) ---
void create_standard_project_python(void);
void create_standard_project_c(void);
void create_standard_project_cpp(void);
void create_standard_project_java(void);
void create_standard_project_go(void);
void create_standard_project_rust(void);
void create_standard_project_csharp(void);
void create_standard_project_javascript(void);
void create_standard_project_typescript(void);
void create_standard_project_kotlin(void);
void create_standard_project_swift(void);

// --- Функции для Full структуры (-f) ---
void create_full_project_python(void);
void create_full_project_c(void);
void create_full_project_cpp(void);
void create_full_project_java(void);
void create_full_project_go(void);
void create_full_project_rust(void);
void create_full_project_csharp(void);
void create_full_project_javascript(void);
void create_full_project_typescript(void);
void create_full_project_kotlin(void);
void create_full_project_swift(void);

#endif // PROJECT_CREATOR_H
