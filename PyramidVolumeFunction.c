//program to calculate volume of pyramid using function
#include <stdio.h>

float pyramidVolume(float base, float height, float length) {
    float volume = (base * height * length) / 3.0;
    return volume;
}

int main() {
    float base, height, length, volume;
    printf("Enter the base of the pyramid: ");
    scanf("%f", &base);
    printf("Enter the height of the pyramid: ");
    scanf("%f", &height);
    printf("Enter the length of the pyramid: ");
    scanf("%f", &length);
    volume = pyramidVolume(base, height, length);
    printf("The volume of the pyramid is: %f", volume);
    return 0;
}
