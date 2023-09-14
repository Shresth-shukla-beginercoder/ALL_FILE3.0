#include<stdio.h>
int arearectangle(float r);
int areasquare(float s);
int areacircle(float c);
int main (){
    int r, s , c ;

arearectangle(r);
    areasquare(s);
    areacircle(c);

    return 0;
    
}int arearectangle(float r){
    int a,b;
    printf("enter value lenghth:");
    scanf("%d",&a);

    printf("enter value breadth:");
    scanf("%d",&b);

    int A= (a*b);
    printf("%d \n",A);
}int areasquare(float s){
    int side;
     printf("  enter side:");
     scanf("%d",&side);

     int A = side *side;
     printf("%d \n",A);

}int areacircle(float c){
    int radius;
    printf("  enter radius:");
    scanf("%d",&radius);
    float A = radius * radius ;

    printf("%f \n",3.14 * A);}