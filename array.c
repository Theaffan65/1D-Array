// #include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,4,6,8};
//     arr[0] = 10;
//     printf("%d ",arr[0]);
//      printf("%d ",arr[1]);
//       printf("%d ",arr[2]);
//        printf("%d ",arr[3]);
//         printf("%d ",arr[4]);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[4] = {1,2,4,6};
//     arr[0] = 10;
//     for(int i = 0;i<=4;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[8];
//     for(int i = 0;i<=8-1;i++)
//     {
      
//         printf("Enter a number %d ",i+1);
//        scanf("%d",&arr[i]);
//     }
//     for(int i = 8-1;i>=0;i--)
//     {
//     printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     for(int i = 0;i<=5-1;i++)
//     {
      
//         printf("Enter a number %d ",i+1);
//        scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<=5-1;i++)
//     {
//       //if(arr[i]<=35)
//       {
//         printf("%p ",&arr[i]);
//       }
//     }

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[50],i;
//     for(i=0;i<=48;i++)
//     {
//         arr[i] = i;
//         printf("%d ",arr[i]);
//     }
   
//     return 0;
// }
 

//  #include<stdio.h>
// int main()
// {
//     int arr[4] = {1,2,3,4};
//     int sum = 0;
//     for(int i=0;i<4;i++)
//     {
//        sum = sum+arr[i];
//     }
//        printf("%d ",sum);
   
//     return 0;
// }


//  #include<stdio.h>
// int main()
// {
//     int arr[4] = {5,2,3,4};
//     int product = 1;
//     for(int i=0;i<4;i++)
//     {
//        product = product*arr[i];
//     }
//        printf("%d ",product);
   
//     return 0;
// }



//  #include<stdio.h>
// int main()
// {
//     int arr[4] = {-5,-2,-3,- 4};
//     int max = arr[0];
//     for(int i=0;i<4;i++)
//    {
//     if(max<arr[i])
//     {
//         max = arr[i];
//     }
//    }
//       printf("%d ",max);

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     for(int i = 0;i<=7;i++){
//         if(i%2!=0){
//             printf("%d ",arr[i]*2);
//         }
//         else{
//             printf("%d ",arr[i]+10);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[8] = {10,22,3,4,5,1,7,8};
//     int num ;
//     printf("Enter yhe number ");
//     scanf("%d",&num);
//     for(int i = 0;i<=7;i++){
//         int count = 0;
//         if(arr[i]>num){
//             count++;
//             printf("%d ",arr[i]);
//         }
       
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     int odd = 0;
//     int even = 0;
//     for(int i = 0;i<=6;i++){
//        if(i%2==0){
//         even = even + arr[i];
//        }
//        else{
//         odd = odd + arr[i];
//        }
   
//     }
//     int total = even - odd;
//     printf("%d",total); 
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arr [8] = {1,2,3,4,5,6,7,8};
//     int num  = 12;
//     int totalTriplete = 0;
//     for(int i = 0;i<=7;i++){
//         for(int j = i+1; j<=7;j++){
//            for(int k = j+1;k<=7;k++)
//            {
//                if(arr[i]+ arr[j] + arr[k] == num)
//          {
//             totalTriplete++;
//             printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
//          }
//            }
//         }
//     }
//     printf("The total triplate is %d ",totalTriplete);

//     return 0;
// } 

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr [5] = {5,4,3,2,1 };
//     int max  = INT_MIN;
//     int smax = INT_MIN;
//     for(int i = 0;i<=4 ;i++){
//         if(max<arr[i])
//         {
//             smax = max;
//             max = arr[i];
//         }
//         else if(smax<arr[i]){
//             smax = arr[i];
//         }
       
//     }
//     printf(" %d ",smax);
//     return 0;
// } 


// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr [7] = {1,2,3,4,3,2,5};
//     int i = 0;
//     int j = 6;
//     for(i = 0;i<=6;i++)
//     {
//         if(arr[i]==arr[j])
//         {
//             arr[i]++;
//             arr[j]--;
//             printf("This is a palindrome");
//             break;
//         }
      
        
//     }
//     return 0;
// }  

// #include<stdio.h>
// void reverse(int arr[],int b,int c){
// for(int i = b,j = c;i<j;i++,j--){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
//     return;
// }
// int main()
// {
//     int arr [7] = {1,2,3,4,5,6,7};
//     int k = 50;
//     int n = 7;
//     k = k%n;
//      reverse(arr,0,n-1);
//      reverse(arr,0,k-1);
//      reverse(arr,k,n-1);
//    for(int i = 0;i<=6;i++){ 
//     printf("%d ",arr[i]);
//    }
//     return 0;
// }   


// #include<stdio.h>

// int main()
// {
//     int arr [10] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 11;
   
   
//    for(int i = 0;i<=9;i++){ 
//     if(arr[i] == k){
//     printf("The number is %d and the index is %d",k,i);
//     break;
//     }
//     else{
//         printf("The number is missing and the value is %d",k);
//         break;
//     }

//    }
//     return 0;
// }   


// #include<stdio.h>

// int main()
// {
//     int arr [11] = {1,2,3,4,5,6,7,8,3,9,10};
//    for(int i = 0;i<=9;i++){ 
//       for(int j = i+1;j<=9;j++){
//         if(arr[i]==arr[j]){
//             printf("%d is a duplicate value",arr[i]);
//             break;
//         }
       
//       }

//    }
//     return 0;
// }   



#include<stdio.h>

int main()
{
   int count = 0;
   for(int i = 0;i<5;i++){ 
      for(int j = 0;j<5;j++){
        count = count+1;
      }

   }
   printf("%d",count);
    return 0;
}   