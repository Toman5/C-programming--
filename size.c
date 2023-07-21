 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
     int max;
     int min;
   int K;
   int N;
   int*a[N];
   int i;
   int sum=0;
   int sub=0;
   int res;
   int b[N];
   scanf("%d",&K);
   scanf("%d",&N);
   for(i=0;i<=N;i++)
   {
     scanf("%d, ",&a[N]);
   }
   for(i=0;i<=N;i++)
   {
     if(a[i]<=K)
     {
       sum=K+a[i];
     }
     else if(a[i]>K)
     {
       sub=a[i]-K;
     }
   }
   for(i=0;i<=N;i++)
   {
    if()
   }
   printf("Minimum Possible Difference:",res);
   return res;

 }
