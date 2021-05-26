#include <stdio.h>
int main(){
int n;

printf( "digite 1 numero:");
scanf("%d", &n);

for(int i = 2 ; i <= n ; i++){
    if(n%i==0) printf("%d, ", i);
}
}