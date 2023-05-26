#include<stdio.h>

int sum(int n);
double avg(int n);

int main(){
	
	int n = 0;
	printf("Enter a number:\n");
	scanf("%d", &n);
	printf("The sum of the first %d integers is %d.\n",n, sum(n));
	printf("The average of the first %d intgers is %.1f.\n", n, avg(n));
	//printf("%f", avg(6));

}

int sum(int n){
	int i;
	int sum = 0;
	for(i = 0; i < n; i++){
		sum += i+1;
	}
	return sum;
}

double avg(int n){
	
	return (float)(sum(n)/n);
}

