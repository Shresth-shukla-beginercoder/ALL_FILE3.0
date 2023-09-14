# include<stdio.h>

int main(){
    int n;
    printf("number of index :");
scanf("%d",&n);

int aadhar[n];
int *ptr = &aadhar[0];

//input 

for(int i = 0; i <n; i++){//increment

    printf("%d index :",i);
scanf("%d", (ptr+i));

}
//output
for(int i = 0;i < n; i++){//decrement

 printf("\n%d index :%d\n",i,*(ptr+i));

}

    return 0 ;

}