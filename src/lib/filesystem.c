#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
// ==============
// Create folder
// ==============

void create_project_folder(const char *project_name) {

    if (mkdir(project_name, 0755) == -1) {
        printf("Error: Mkdir\n");
        return;
    }

    if (chdir(project_name) == -1) {
        printf("Error: Chdir");
        return;
    }

}

// ==========================
//      REMOVE FILE
// =========================

void remove_directory(const char *directory)
{
    DIR *dir = opendir(directory);

    if (dir == NULL) {
        perror("ERROR: opendir");
        return;
    }

    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {

        if (strcmp(entry->d_name, ".") == 0 ||
            strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        char path[1024];

        snprintf(
            path,
            sizeof(path),
            "%s/%s",
            directory,
            entry->d_name
        );

        if (entry->d_type == DT_DIR) {
            remove_directory(path);
        } else {
            if (unlink(path) == -1) {
                perror("ERROR: unlink");
            }
        }
    }

    closedir(dir);

    if (rmdir(directory) == -1) {
        perror("ERROR: rmdir");
    }
}

// =========================
//       HANDLE FILE
// =========================
void handle_existing_project(const char *search_folder)
{
    if (access(search_folder, F_OK) != 0) {
        create_project_folder(search_folder);
        return;
    }

    printf(
        "Project %s already exists.\n"
        "Do you want to recreate it? [y/N]: ",
        search_folder
    );

    char answer;
    scanf(" %c", &answer);

    if (answer != 'Y' && answer != 'y') {
        return;
    }

    DIR *dir = opendir(search_folder);

    if (dir == NULL) {
        perror("ERROR: opendir");
        return;
    }

    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {

        if (strcmp(entry->d_name, ".") == 0 ||
            strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        char path[1024];

        snprintf(
            path,
            sizeof(path),
            "%s/%s",
            search_folder,
            entry->d_name
        );

        if (entry->d_type == DT_DIR) {
            remove_directory(path);
        } else {

            if (unlink(path) == -1) {
                perror("ERROR: unlink");
            }
        }
    }

    closedir(dir);

    if (rmdir(search_folder) == -1) {
        perror("ERROR: rmdir");
        return;
    }

    create_project_folder(search_folder);
}
