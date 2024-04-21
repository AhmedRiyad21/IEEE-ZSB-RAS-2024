// Problem 1
#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

void inputDate(Date* date) {
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &date->day, &date->month, &date->year);
}

int compareDates(Date date1, Date date2) {
    if (date1.year != date2.year) {
        return 0;
    } else if (date1.month != date2.month) {
        return 0;
    } else if (date1.day != date2.day) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    Date date1, date2;

    printf("Input first date:\n");
    inputDate(&date1);

    printf("Input second date:\n");
    inputDate(&date2);

    if (compareDates(date1, date2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}

// Problem 2

#include <stdio.h>

struct info {
  char name[50];
  int age;
};

int main() {
  struct info person;

  strcpy(person.name, "Ahmed");
  person.age = 22;

  struct info *ptr = &person;

  printf("Name: %s\n", ptr->name);
  printf("Age: %d\n", ptr->age);

  return 0;
}
