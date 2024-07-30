#include <stdio.h>
int main(){
    int c;
    for(c=1;c<=50;c++){
        if(c%2==0){
            printf("Numero %i\n",c);
        }
    }
    return 0;
}