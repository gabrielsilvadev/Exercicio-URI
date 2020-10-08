#include <stdio.h>
#include <queue> 

using namespace std;
int main()
{
   queue <int>fila;
   int cont=1;
   int contador=0;
   int x;
   while (scanf("%d",&x)!=EOF&& x!=0){
    for(int i=1;i<=x;i++){
         fila.push(i);
    }
    printf("Discarded cards:");
    while(fila.size()>=2){
     printf(" %d",fila.front());
     if (fila.size()>2){
         printf(",");
     }
     fila.pop();
     fila.push(fila.front());
     fila.pop();
    }
    printf("\n");
    printf("Remaining card: %d",fila.front());
    fila.pop();
    printf("\n");
   }
 

    return 0;
}
