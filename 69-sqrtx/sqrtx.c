int mySqrt(int x) {
    int start = 0;
    int end = x;
    int ans;
    while(start <= end){
       long long mid = start + (end - start)/2;
        if(mid*mid <= x){
            start = mid+1;
            ans = mid;
        }else{
            end = mid - 1;
        }

    }
    return ans;
    
}