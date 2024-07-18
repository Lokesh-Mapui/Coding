// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf(" * ");
            
//         }
//         printf("\n");
   
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             printf(" * ");
            
//         }
//         printf("\n");
   
//     }

//     return 0;
// }







#include<bits/stdc++.h>
using namespace std;


int main()
{
int num;
printf("enter the number: ");
scanf("%d",&num);


if(num%5==0)
{
    printf("%d is divisible by 5\n",num);
}
else
{
    printf("%dis not divisible by 5 \n",num);
}


if(num % 5==0 && num % 11==0)
{
    printf("%d is divisible by 5 and 11 \n",num);
}
else
{
    printf("%dis not divisible by 5 and 11 \n",num);
}
return 0;
}