// P.1
#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int timeInput, timeOutput;

    printf("Enter the time in [hh:mm:ss] format: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    timeInput = (hours * 10000) + (minutes * 100) + seconds;

    printf("Time stored successfully!\n");

    hours = timeInput / 10000;
    minutes = (timeInput % 10000) / 100;
    seconds = timeInput % 100;

    printf("Retrieved time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

// P.2
#include <stdio.h>
#include <stdbool.h>

bool isCharacterUnique(char c, char* uniqueChars, int size) {
for (int i = 0; i < size; i++) {
if (uniqueChars[i] == c) {
return false;
}
}
return true;
}

int main() {
const int MAX_SIZE = 100;
char input[MAX_SIZE];
char uniqueChars[MAX_SIZE];
int uniqueCharsCount = 0;
char stopCode = '!';

while (true) {
printf("Enter a string (or enter \"%c\" to stop): ", stopCode);
scanf(" %[^\n]", input);

if (input[0] == stopCode && input[1] == '\0') {
break; // Stop the program if the stop code is entered
}

for (int i = 0; input[i] != '\0'; i++) {
char currentChar = input[i];

if (isCharacterUnique(currentChar, uniqueChars, uniqueCharsCount)) {
uniqueChars[uniqueCharsCount] = currentChar;
uniqueCharsCount++;
}
}
}

printf("Unique characters entered:\n");
for (int i = 0; i < uniqueCharsCount; i++) {
printf("%c ", uniqueChars[i]);
}
printf("\n");

return 0;
}