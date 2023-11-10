/*
 ============================================================================
 Name        : Repaso.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float sistolica,diastolica,sistolica2,diastolica2;
	float resSis, resDia;

	printf("Introduce el primer valor de tensión sistólica: ");
	fflush(stdout);
	scanf("%f",&sistolica);

	printf("Introduce el segundo valor de tensión sistólica: ");
	fflush(stdout);
	scanf("%f",&sistolica2);

	printf("Introduce el primer valor de tensión diastólica: ");
	fflush(stdout);
	scanf("%f",&diastolica);

	printf("Introduce el segundo valor de tensión diastólica: ");
	fflush(stdout);
	scanf("%f",&diastolica2);

	resSis=(sistolica+sistolica2)/2;
	resDia=(diastolica+diastolica2)/2;

	if(resSis<80 ||resDia<60){
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de hipotenso",resSis,resDia);
	}else if((resSis>=80 && resSis<=120) && (resDia>=60 && resDia<80)){
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de tensión normal",resSis,resDia);
	}else if((resSis>120 && resSis<140) || (resDia>80 && resDia<90)){
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de tensión normal-alta",resSis,resDia);
	}else if((resSis>=140 && resSis<160) || (resDia>=90 && resDia<100)){
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de hipertensión grado 1",resSis,resDia);
	}else if((resSis>=160 && resSis<180) || (resDia>=100 && resDia<110)){
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de hipertensión grado 2",resSis,resDia);
	}else
		printf("El paciente de tensión sistólica %.2f mmHG y diastólica %.2f mmHG tiene un diagnóstico de crisis hipertensiva (emergencia médica)",resSis,resDia);
}
