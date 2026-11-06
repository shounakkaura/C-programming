#include <stdio.h>
#include <string.h>
#define SUBJECT 5
#define PASS_MARKS 33
#define MAX_MARKS 100

struct student
{
    char name[50];
    char rollNo[20];
    int marks[SUBJECT];
    int total;
    float percentage;
    char grade[3];
    int isPassed;
};

const char *subjectNames[SUBJECT] =
    {
        "Mathematics",
        "Physics",
        "Chemistry",
        "Computer Science",
        "English"};

// Function declarations
void clearInputBuffer();
int readInteger(const char *message);
void menu();
void Grades();
void studentDetails(struct student *s);
void inputMarks(struct student *s);
int calculateTotal(struct student s);
float calculatePercentage(int total);
int checkPass(struct student s);
void calculateGrade(struct student *s);
void result(struct student s);

int main()
{
    int choice;
    while (1)

    {
        menu();
        choice = readInteger("Enter your choice: ");
        switch (choice)
        {
        case 1:
        {
            struct student s;
            studentDetails(&s);
            inputMarks(&s);
            s.total = calculateTotal(s);
            s.percentage = calculatePercentage(s.total);
            s.isPassed = checkPass(s);

            calculateGrade(&s);
            result(s);
            break;
        }
        case 2:
            Grades();
            break;

        case 3:
            printf("\nThank you for using Student Grade Calculator!\n");
            return 0;
        default:
            printf("\nInvalid choice! Please select 1, 2 or 3.\n");
        }
    }
    return 0;
}

// Clear leftover input from keyboard
void clearInputBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}
// Read an integer safely
int readInteger(const char *message)
{
    int value;
    while (1)
    {
        printf("%s", message);
        if (scanf("%d", &value) == 1)
        {
            clearInputBuffer();
            return value;
        }
        printf("Invalid Input! Please Enter a Number.\n");
        clearInputBuffer();
    }
}

// Display main menu
void menu()
{
    printf("\n========================================\n");
    printf("         STUDENT GRADE CALCULATOR\n");
    printf("========================================\n");
    printf("1. Calculate New Result\n");
    printf("2. View Grading Criteria\n");
    printf("3. Exit\n");
    printf("========================================\n");
}
// Display grading criteria
void Grades()
{
    printf("\n========== GRADING CRITERIA ==========\n");
    printf("90 - 100%%  : A+\n");
    printf("80 - 89%%   : A\n");
    printf("70 - 79%%   : B\n");
    printf("60 - 69%%   : C\n");
    printf("50 - 59%%   : D\n");
    printf("33 - 49%%   : E\n");
    printf("Below 33%%  : F\n");
    printf("\nMinimum passing marks per subject: %d\n", PASS_MARKS);
    printf("======================================\n");
}

// Input student details
void studentDetails(struct student *s)
{
    printf("\n========== STUDENT DETAILS ==========\n");
    printf("Enter Student Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    printf("Enter Roll Number: ");
    fgets(s->rollNo, sizeof(s->rollNo), stdin);
    s->rollNo[strcspn(s->rollNo, "\n")] = '\0';
}

// Input marks for five subjects
void inputMarks(struct student *s)
{
    printf("\n========== ENTER SUBJECT MARKS ==========\n");
    for (int i = 0; i < SUBJECT; i++)
    {
        char message[100];
        sprintf(message, "Enter marks in %s (0-100): ", subjectNames[i]);
        while (1)
        {
            s->marks[i] = readInteger(message);
            if (s->marks[i] >= 0 && s->marks[i] <= MAX_MARKS)
            {
                break;
            }
            printf("Invalid marks! Enter between 0 and 100.\n");
        }
    }
}

// Calculate total marks
int calculateTotal(struct student s)
{
    int total = 0;
    for (int i = 0; i < SUBJECT; i++)
    {
        total += s.marks[i];
    }
    return total;
}
// calculate percentage
float calculatePercentage(int total)
{
    return (total / (float)(SUBJECT * MAX_MARKS)) * 100;
}

// check passing criteria
int checkPass(struct student s)
{
    for (int i = 0; i < SUBJECT; i++)
    {
        if (s.marks[i] < PASS_MARKS)
        {
            return 0;
        }
    }
    return 1;
}

// calculate overall grade
void calculateGrade(struct student *s)
{
    if (s->percentage >= 90)
        strcpy(s->grade, "A+");
    else if (s->percentage >= 80)
        strcpy(s->grade, "A");
    else if (s->percentage >= 70)
        strcpy(s->grade, "B");
    else if (s->percentage >= 60)
        strcpy(s->grade, "C");
    else if (s->percentage >= 50)
        strcpy(s->grade, "D");
    else if (s->percentage >= 33)
        strcpy(s->grade, "E");

    else
        strcpy(s->grade, "F");
}

// display result
void result(struct student s)
{
    printf("\n\n========================================\n");
    printf("             STUDENT RESULT\n");
    printf("========================================\n");
    printf("Student Name : %s\n", s.name);
    printf("Roll Number  : %s\n", s.rollNo);

    printf("\n----------- SUBJECT DETAILS -----------\n");
    printf("%-20s %-10s %-10s\n", "Subject", "Marks", "Status");
    for (int i = 0; i < SUBJECT; i++)
    {
        printf("%-20s %-10d %-10s\n",
               subjectNames[i],
               s.marks[i],
               s.marks[i] >= PASS_MARKS ? "PASS" : "FAIL");
    }

    printf("----------------------------------------\n");

    printf("Total Marks : %d / %d\n", s.total, SUBJECT * MAX_MARKS);

    printf("Percentage  : %.2f%%\n", s.percentage);

    printf("Grade       : %s\n", s.grade);

    printf("Final Result: %s\n",
           s.isPassed ? "PASS" : "FAIL");

    printf("========================================\n");
}