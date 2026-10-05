/*
 * week4_2_struct_student.c
 * Author: Adil
 * Student ID: Yuksel
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[50]), id (int), grade (float)
// Example:
struct Student {
     char name[50];
     int id;
     float grade;
 };

int main(void) {
    // TODO: Declare two Student variables
struct Student student1; 
struct Student student2;
strcpy(student1.name, "Alice Johnson");
student1.id = 1001;
student1.grade = 9.1;
strcpy(student2.name, "Bob Smith");
student2.id = 1002;
student2.grade = 8.7;
printf ("Student 1: %s, ID: %d, Grade: %.1f\n", student1.name, student1.id, student1.grade);
printf ("Student 2: %s, ID: %d, Grade: %.1f\n", student2.name, student2.id, student2.grade);
    // TODO: Assign the values (use strcpy for the name):
    //      Student 1: Alice Johnson, 1001, 9.1
    //       Student 2: Bob Smith,     1002, 8.7

    // TODO: Print each student exactly as:
    //       Student <k>: <name>, ID: <id>, Grade: <grade with 1 decimal, %.1f>

    return 0;
}
