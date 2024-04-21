// P.1
#include <stdio.h>

struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

int main() {

    struct student_info students[15];

    students[0] = (struct student_info){101, "Ahmed", 19, "qawmia-Zagazig", 80.0};
    students[1] = (struct student_info){102, "Mohamed", 20, "zamalek-Cairo", 70.0};
    students[2] = (struct student_info){103, "Mahmoud", 21, "mokattam-Cairo", 90.0};


    for (int i = 0; i < 15; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-------------------------\n");
    }

    return 0;
}

// P.2
#include <stdio.h>

struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

void input_student_info(struct student_info *student) {
    printf("Enter information for the student.\n");
    printf("Roll Number: ");
    scanf("%d", &student->roll_number);
    printf("Name: ");
    scanf("%s", student->name);
    printf("Age: ");
    scanf("%d", &student->age);
    printf("Address: ");
    scanf("%s", student->address);
    printf("Marks (out of 20): ");
    scanf("%f", &student->marks);
}

int print_student_info(struct student_info students[], int num_students) {
    int count_low_marks = 0;

    for (int i = 0; i < num_students; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-------------------------\n");

        if (students[i].marks < 12) {
            count_low_marks++;
        }
    }

    return count_low_marks;
}

int main() {
    int num_students = 15;
    struct student_info students[num_students];

    for (int i = 0; i < num_students; ++i) {
        input_student_info(&students[i]);
    }

    int low_marks_count = print_student_info(students, num_students);
    printf("Number of students with marks less than 12: %d\n", low_marks_count);

    return 0;
}

