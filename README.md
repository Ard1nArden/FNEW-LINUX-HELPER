# FNEW-LINUX-HELPER

<img width="1536" height="1024" alt="logo_fnew" src="https://github.com/user-attachments/assets/eeab2562-747d-4556-ad19-bd92d68245b4" />

FNEW-LINUX-HELPER is a lightweight command-line project generator for Linux, written in C.

The main purpose of FNEW is to automate the repetitive work of creating a new programming project. Instead of manually creating directories, source files, header files, configuration files, Makefiles and other boilerplate, you can generate a ready-to-use project structure with a single command.

FNEW supports multiple programming languages and provides two project generation modes: Standard and Full.

## Features

- Create complete project structures from the terminal
- Support for multiple programming languages
- Standard (`-s`) project templates
- Full (`-f`) project templates
- Automatic creation of source and header directories
- Automatic creation of starter source files
- Language validation
- Project name and directory handling
- Detection of existing projects
- Optional project recreation
- Built-in command-line help
- Makefile generation
- Native Linux support
- Lightweight and dependency-free runtime
- Written in C

## Usage

```bash
fnew <language> <project_name> [flag]
