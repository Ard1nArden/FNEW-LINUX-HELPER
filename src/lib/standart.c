#include <stdio.h>

// 1. Python
void create_standard_project_python() {
    FILE *f = fopen("main.py", "w");
    if (!f) return;
    fprintf(f,
        "if __name__ == '__main__':\n"
        "    print(\"Hello, World!\")\n"
    );
    fclose(f);
}

// 2. C
void create_standard_project_c() {
    FILE *f = fopen("main.c", "w");
    if (!f) return;
    fprintf(f,
        "#include <stdio.h>\n\n"
        "int main() {\n"
        "    printf(\"Hello, World!\\n\");\n"
        "    return 0;\n"
        "}\n"
    );
    fclose(f);
}

// 3. C++
void create_standard_project_cpp() {
    FILE *f = fopen("main.cpp", "w");
    if (!f) return;
    fprintf(f,
        "#include <iostream>\n\n"
        "int main() {\n"
        "    std::cout << \"Hello, World!\" << std::endl;\n"
        "    return 0;\n"
        "}\n"
    );
    fclose(f);
}

// 4. Java
void create_standard_project_java() {
    FILE *f = fopen("Main.java", "w");
    if (!f) return;
    fprintf(f,
        "public class Main {\n"
        "    public static void main(String[] args) {\n"
        "        System.out.println(\"Hello, World!\");\n"
        "    }\n"
        "}\n"
    );
    fclose(f);
}

// 5. Go
void create_standard_project_go() {
    FILE *f = fopen("main.go", "w");
    if (!f) return;
    fprintf(f,
        "package main\n\n"
        "import \"fmt\"\n\n"
        "func main() {\n"
        "    fmt.Println(\"Hello, World!\")\n"
        "}\n"
    );
    fclose(f);
}

// 6. Rust
void create_standard_project_rust() {
    FILE *f = fopen("main.rs", "w");
    if (!f) return;
    fprintf(f,
        "fn main() {\n"
        "    println!(\"Hello, World!\");\n"
        "}\n"
    );
    fclose(f);
}

// 7. C#
void create_standard_project_csharp() {
    FILE *f = fopen("Program.cs", "w");
    if (!f) return;
    fprintf(f, "Console.WriteLine(\"Hello, World!\");\n");
    fclose(f);
}

// 8. JavaScript
void create_standard_project_javascript() {
    FILE *f = fopen("index.js", "w");
    if (!f) return;
    fprintf(f, "console.log(\"Hello, World!\");\n");
    fclose(f);
}

// 9. TypeScript
void create_standard_project_typescript() {
    FILE *f = fopen("index.ts", "w");
    if (!f) return;
    fprintf(f, "console.log(\"Hello, World!\");\n");
    fclose(f);
}

// 10. Kotlin
void create_standard_project_kotlin() {
    FILE *f = fopen("main.kt", "w");
    if (!f) return;
    fprintf(f,
        "fun main() {\n"
        "    println(\"Hello, World!\")\n"
        "}\n"
    );
    fclose(f);
}

// 11. Swift
void create_standard_project_swift() {
    FILE *f = fopen("main.swift", "w");
    if (!f) return;
    fprintf(f, "print(\"Hello, World!\")\n");
    fclose(f);
}
