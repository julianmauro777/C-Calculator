#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>
#define _USE_MATH_DEFINES

main()

{
	system("COLOR 02");
	int inicio,op,n,c,i=1,z;
	float x[n],r=0,y,w;
	for (inicio=0;inicio>=0;inicio++)
		{

		printf("*** La Calculadora de los pibes del grupo 7, wacheeen)***\n");
		printf("\n1.Suma \n2.Resta \n3.Multiplicaci%cn \n4.Divisi%cn", 162, 162);
		printf(" \n5.Ra%cz Cuadrada \n6.Elevar al cuadrado \n7.Seno \n8.Coseno \n9.Tangente", 161);
		printf("\n------------------------------------------\n0.Salir del programa\n\n");
		i=1;
		r=0;		

		do 
		{
			printf("Eleg%c la operacion matem%ctica a realizar:\n",161, 160);
			scanf("%d",&op);
			printf("No capo, no hay opci%cn %d. Volv%c a intentarlo\n", 162,op,130);
		} while (op<0 || op>9);
		system("cls");

		switch (op) 
		{
			case 0:
				return 0;
			case 1:
				printf("Suma\n\n");
				printf("Escrib%c cu%cntos n%cmeros vas a sumar:",161,160,163);
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escrib%c el %d n%cmero a sumar:",161,i,163);
					scanf("%f",&x[c]);
					r=r+x[c];
					i++;
				}
				printf("El resultado de la suma es: %.2f",r);
				getch();
				system("cls");
				break;
			case 2:
				printf("Resta\n\n");
				printf("Escrib%c cu%cntos n%cmeros vas a restar:",161,160,163);
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escrib%c el %d n%cmero a restar:",161,i,163);
					scanf("%f",&x[c]);
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r=r-x[c];
				}
				printf("El resultado de la resta es: %.2f",r);	
				getch();
				system("cls");
				break;
			case 3:
				printf("Multiplicaci%cn\n\n", 162);
				printf("Escrib%c cu%cntos n%cmeros vas a multiplicar:",161,160,163);
				scanf("%d",&n);
				r=r+1;
				for(c=0;c<n;c++)
				{
					printf("Escrib%c el %d n%cmero a multiplicar:",161,i,163);
					scanf("%f",&x[c]);
					r=r*x[c];
					i++;
				}
				printf("El resultado de la multiplicaci%cn es: %.2f",162,r);
				getch();
				system("cls");
				break;
			case 4:
				printf("Divisi%cn\n\n",162);
				printf("Escrib%c cu%cntos n%cmeros vas a dividir:",161,160,163);
				scanf("%d",&n);
				for(c=0;c<n;c++)
				{
					printf("Escrib%c el %d n%cmero a dividir:",161,i,163);
					scanf("%f",&x[c]);
					i++;
				}
				r=x[0];
				for(c=1;c<n;c++)
				{
					r=r/x[c];
				}
				printf("El resultado de la divisi%cn es: %.2f",162,r);	
				getch();
				system("cls");
				break;
			case 5:
				printf("Ra%cz Cuadrada\n\n",161);
				printf("Escrib%c el n%cmero al que quer%cs calcularle la ra%cz:",161,163,130,161);
				scanf("%d",&n);
				r=pow(n,(double)1/2);
				if (n>=0) {
					printf("\nLa ra%cz cuadrada de %d es: %.3f",161,n,r);
					getch();
					system("cls");
				}
				if (n<0) {
		          	system("COLOR 4F");
		          	printf("Una ra%cz negativa da un n%cmero imaginario i\a\n",161,163);
		          	getch();
		          	system("cls");
		          	system("COLOR 02");}
				break;
			case 6:
				printf("Potenciaci%cn\n\n",162);
				printf("Escrib%c el n%cmero que quer%cs elevar al cuadrado:",161,163,130);
				scanf("%d",&n);
				r=pow(n,2);
				printf("\nEl cuadrado de %d es: %.2f",n,r);
				getch();
				system("cls");
				break;			
			case 7:
				printf("Seno\n\n");
				printf("Escrib%c el %cngulo para calcular el seno:",161,160);
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=sin(y);
				printf("El seno de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;
			case 8:
				printf("Coseno\n\n");
				printf("Escrib%c el %cngulo para calcular el coseno:",161,160);
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=cos(y);
				printf("El coseno de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;
			case 9:
				printf("Tangente\n\n");
				printf("Escrib%c el %cngulo para calcular la tangente:",161,160);
				scanf("%f",&w);
				y=(w*M_PI)/180;
				r=tan(y);
				printf("La tangente de %.0f grados es: %.4f\n",w,r);
				getch();
				system("cls");
				break;			
			}
		}
	}
			
