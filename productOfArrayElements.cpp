long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     long long int i;
     long long int p=1;
     for(i=0;i<n;i++){
         p = p * ar[i] % mod;
     }
     return p;
     
 }
