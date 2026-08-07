#include <stdio.h>
#include <string.h>
#include <dirent.h>

#include "include/cheking_lang.h"
#include "include/filesystem.h"
#include "include/PROJECT_CREATOR.h"

int main(int argc, char *argv[]) {

    if (argc >= 2 &&
            (strcmp(argv[1], "-h") == 0 ||
             strcmp(argv[1], "--help") == 0)) {

            printf(
                "fnew - Project generator\n"
                "\n"
                "Usage:\n"
                "    fnew <language> <project_name> [flag]\n"
                "\n"
                "Languages:\n"
                "    C           Create a C project\n"
                "    C++         Create a C++ project\n"
                "    Python      Create a Python project\n"
                "    Java        Create a Java project\n"
                "    Go          Create a Go project\n"
                "    Rust        Create a Rust project\n"
                "    CSharp      Create a C# project\n"
                "    JavaScript  Create a JavaScript project\n"
                "    TypeScript  Create a TypeScript project\n"
                "    Kotlin      Create a Kotlin project\n"
                "    Swift       Create a Swift project\n"
                "\n"
                "Flags:\n"
                "    -s          Create a standard project (default)\n"
                "    -f          Create a full project\n"
                "    -h, --help  Show this help message\n"
                "\n"
                "Examples:\n"
                "    fnew C hello\n"
                "    fnew C hello -f\n"
                "    fnew Rust server -f\n"
                "    fnew Python script -s\n"
            );

            return 0;
        }

    if (argc < 3) {
        printf("Usage: fnew {lang} [name_folder] (-s|-f)\n");
        return 1;
    }

    Language lang = checking_language(argv[1]);

    if (lang == LANG_UNKNOWN) {
        printf("====================\n");
        printf("  UNKNOWN LANGUAGE  \n");
        printf("====================\n");
        return 1;
    }

    handle_existing_project(argv[2]);
    const char *flag = "-s";

    if (argc >= 4)
        flag = argv[3];

    switch (lang)
    {
        case LANG_C:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_c();
            } else if (strcmp(flag, "-f") == 0){
                create_full_project_c();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_CPP:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_cpp();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_cpp();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_CSHARP:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_csharp();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_csharp();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_PY:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_python();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_python();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_JAVA:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_java();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_java();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_GO:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_go();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_go();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_RUST:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_rust();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_rust();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_JS:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_javascript();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_javascript();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_TS:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_typescript();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_typescript();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_KT:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_kotlin();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_kotlin();
            } else {
                printf("Unknown flag.\n");
            }
            break;
        case LANG_SWIFT:
            if (strcmp(flag, "-s") == 0) {
                create_standard_project_swift();
            } else if (strcmp(flag, "-f") == 0) {
                create_full_project_swift();
            } else {
                printf("Unknown flag.\n");
            }
            break;

        default:
                printf("Language is not implemented.\n");
                return 1;
    };
}
