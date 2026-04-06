#include <stdio.h>

#define MAX_STUDENTS 30
#define MAX_CLASSES 5

typedef struct {
    char name[50];
    double grade;
} Student;

typedef struct {
    char label; // 'A', 'B', 'V'...
    int studentCount;
    Student students[MAX_STUDENTS];
} Class;

typedef struct {
    int classCount;
    Class classes[MAX_CLASSES];
} GraduationYear;

int main() {
    GraduationYear vipusk;
    vipusk.classCount = 2;

    // Данни за 12А
    vipusk.classes[0].label = 'A';
    vipusk.classes[0].studentCount = 2;
    vipusk.classes[0].students[0] = (Student){"Ivan", 5.50};
    vipusk.classes[0].students[1] = (Student){"Maria", 6.00};

    // Данни за 12Б
    vipusk.classes[1].label = 'B';
    vipusk.classes[1].studentCount = 2;
    vipusk.classes[1].students[0] = (Student){"Petar", 4.80};
    vipusk.classes[1].students[1] = (Student){"Elena", 5.20};

    double totalSum = 0;
    int totalStudents = 0;

    for (int i = 0; i < vipusk.classCount; i++) {
        for (int j = 0; j < vipusk.classes[i].studentCount; j++) {
            totalSum += vipusk.classes[i].students[j].grade;
            totalStudents++;
        }
    }

    if (totalStudents > 0) {
        printf("Obsht sreden bal na vipuska: %.2f\n", totalSum / totalStudents);
    }

    return 0;
}