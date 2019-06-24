#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<float.h>
#define random_cont_max 12
#define Calculation_count 1000000

float nor_rand(){
	float nrm=0.0;
	srand((float)time(NULL));


    for(int random_cont=0;random_cont< random_cont_max;random_cont++){ //nor_rand()と同じ
		   nrm+= (float)rand()/RAND_MAX;
		}

    return nrm-6.0;
}




int main(){

 srand((float)time(NULL));
 float rnd=0.0,nnd[Calculation_count],nnd_sum=0.0,ls_hd[Calculation_count];
 float max,min;
for (size_t i = 0; i < Calculation_count ; i++){
	rnd = nor_rand();
	nnd[i] = (float)rand()/RAND_MAX;
	ls_hd[i] = 256 * nor_rand() +1024;
	// printf("%d \n",rnd); //ここのprintfは使うとすごいことになる
	nnd_sum+=rnd;

	if(i==0){
	max=nnd[i];
	min=nnd[i];
	}else if(nnd[i]>max){
		max=nnd[i];
	}else if(nnd[i]<min)
	{
		min=nnd[i];
	}
	
}

min=FLT_MAX;
max=FLT_MIN;



printf("average %lf\n",nnd_sum/Calculation_count);
printf("min %f \n",min);
printf("max %f \n",max);

}

