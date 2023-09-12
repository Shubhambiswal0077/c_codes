#include <stdio.h>

int main()
 {
    float u, a, t, distance;
   
        printf("Enter initial velocity (m/s): ");
        scanf("%f", &u);
        printf("Enter acceleration (m/s^2): ");
        scanf("%f", &a);
        printf("Enter time interval (s): ");
        scanf("%f", &t);

        distance = u * t + 0.5 * a * t * t;

        printf("Distance travelled: %.2f meters\n", distance);

    return 0;
}