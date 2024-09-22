#include <stdio.h>

int main() {
    float h, b, area ;
    printf("base triangolo: ");
    scanf("%f", &h);
    printf("altezza triangolo: ");
    scanf("%f", &b );
    area = (h*b)/2;
    printf("area = %f", area);
    return 0;
}
