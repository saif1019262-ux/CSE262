#include<stdio.h>
#include<math.h>
int main(){
    int digits,range,c=0;
    if(scanf("%d",&range)!=1) return 0; 


    for(int i=100;i<=range;i++){
        
        int td=0;
         int j=i;
        while(j>0){
        j=j/10;
        td++;
        }
    int arm = 0;
    int temp = i;
    while(temp>0) {
      digits = temp%10;
     arm =arm+pow(digits,td);
     temp=temp/10;
    } if  (arm==i) {printf ("%d ",i);c++;}
    
      } if(c==0) printf("there are no armstrong number in the range");
    return 0;
}