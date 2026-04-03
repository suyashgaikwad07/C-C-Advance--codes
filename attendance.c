#include <stdio.h>
#include <stdlib.h>

struct student
 {
    int roll;
    char name[50];
    int attendance;
};

void addStudent() {
    FILE *fp;
    struct student s;

    fp = fopen("attendance.txt", "ab");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    s.attendance = 0;

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("Student added successfully!\n");
}

void markAttendance() {
    FILE *fp;
    struct student s;
    int roll, found = 0;

    fp = fopen("attendance.txt", "rb+");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) 
        {
            s.attendance += 1;
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("Attendance marked!\n");
    else
        printf("Student not found!\n");
}

void viewStudents() {
    FILE *fp;
    struct student s;

    fp = fopen("attendance.txt", "rb");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\nRoll\tName\tAttendance\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("%d\t%s\t%d\n", s.roll, s.name, s.attendance);
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n===== Student Attendance System =====\n");
        printf("1. Add Student\n");
        printf("2. Mark Attendance\n");
        printf("3. View Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: markAttendance(); break;
            case 3: viewStudents(); break;
            case 4: printf("Thank you!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
