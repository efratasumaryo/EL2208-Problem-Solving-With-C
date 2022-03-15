#include <stdio.h>
#include <stdlib.h>

typedef struct heater
{
    int state;
    float setpoint;
    float hysterisis;
}heater ;

int main()
{	
	heater heater;
	float suhu[100];
	int n = 0;

    //template input
	printf("masukkan setpoint : ");
	scanf("%f", &heater.setpoint);
	printf("masukkan lebar hysterisis suhu : ");
	scanf("%f", &heater.hysterisis);
	while (suhu[n-1] != -1){	
		printf("Masukkan suhu : ");
		scanf("%f",&suhu[n]);
		n += 1;
	}

	//template output
	for (heater.state = 0; heater.state < n - 1;){
		if (suhu[heater.state] <= 65){
			printf("heater on!\n");
			heater.state += 1;
		}
		else if (suhu[heater.state] >= 75){
			printf("heater off!\n");
			heater.state += 1;
		}
		else{
			int m = 0;
			while (suhu[heater.state] >= 65 && suhu[heater.state] <= 75){
				heater.state -= 1;
				m += 1;
			}
			if (suhu[heater.state] <= 65){
				printf("heater on!\n");
				heater.state += m + 1;
				m = 0;
			}
			else if (suhu[heater.state] >= 75){
				printf("heater off!\n");
				heater.state += m + 1;
				m = 0;
			}
		}
	}	
	return 0;
}