// #include<stdio.h>
// int main()
// {
//     int n = (1,2,3,5);
//     printf("%d",n);
//     return 0;
// }


// #include<stdio.h>
// junk(int i,int j)
// {
//     i =i*i;
//     j = j*j;
// }
// int main()
// {

//     int i = 5,j = 2;
//     junk(i,j);
//     printf("\n%d%d",i,j);
    
// }
// #include<stdio.h>
// int main()
// {
//     int i = 10;
//     while(i = 20){
//         printf("\nA computer buff");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int m = 5;
//     do{
//   m++;
//   ++m;
//     }while(m++>7);
//     printf("%d",m);
//     return 0;
// }
#include<stdio.h>
// int main()
// {
//     float m = 3.0;
//     switch((int)m)
//     {
//         case 1 :
//          printf("0k");
//          break;
//           case 2 :
//          printf("Hii");
//          break;
//           case 3 :
//          printf("");
//          break;
//     }
//     return 0;
// }
// int func(int n)
// {
//     if(n==4) return n;
//     return func(n+1)+func(n+1)+func(n+1);
// }
// int main(){
//     int fun =func(2);
//     printf("%d",fun);
//     return 0;
// }

int func(int n)
{
    if(n==0) 
    return n+n*func(n-1);
    else{
       return n;
    }
}
int main(){
    int fun =func(4);
    printf("%d",fun);
    return 0;
}