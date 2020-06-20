vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
   int l,r;   
    for(int i=0; i<n; i+=k)
    {
        l=i;
        if(n-1<i+k-1)
         r=n-1;
        else 
         r=i+k-1;
        
        reverse(mv.begin()+l,mv.begin()+r+1);
    }

    return mv;
    
    
    
    }
