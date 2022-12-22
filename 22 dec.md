```c
#include <stdio.h>
struct{
    char *engine;
    char *fuel;
    int tank;
    int seats;
    float mileage;
} car1,car2;
int main(){
    car1.engine="Ddis 190 Engine";
    car1.fuel="petrol";
    car1.tank=37;
    car1.seats=5;
    car1.mileage=19.74;
    car2.engine="1.2L Kappa Dual VTVT";
    car2.fuel="diesel";
    car2.tank=37;
    car2.seats=5;
    car2.mileage=22.74;
    printf("CAR 1 SPECIFICATIONS \n");
    printf("%s \n",car1.engine);
    printf("%s \n",car1.fuel);
    printf("%d Litres\n",car1.tank);
    printf("%d Seats\n",car1.seats);
    printf("%f Km/pl\n",car1.mileage);
    printf("\n");
    printf("CAR 2 SPECIFICATIONS \n");
    printf("%s \n",car2.engine);
    printf("%s \n",car2.fuel);
    printf("%d Litres\n",car2.tank);
    printf("%d Seats\n",car2.seats);
    printf("%f Km/pl\n",car2.mileage);
    return 0;
}
```
