#include <stdio.h>

int main() {
    int math_marks, physics_marks, chemistry_marks, total_marks;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &math_marks);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics_marks);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry_marks);

    total_marks = math_marks + physics_marks + chemistry_marks;

    if (math_marks >= 60 && physics_marks >= 50 && chemistry_marks >= 40 && (total_marks >= 200 || (math_marks + physics_marks) >= 150)) {
        printf("Candidate is eligible for admission to the professional course.\n");
    } else {
        printf("Candidate is not eligible for admission to the professional course.\n");
    }

    return 0;
}