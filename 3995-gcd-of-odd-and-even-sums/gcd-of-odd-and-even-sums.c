int gcdOfOddEvenSums(int n) {
    int sum_odd = n*(2*1+(n-1)*2)/2;
    int sum_even = n*(2*2 + (n-1)*2)/2;
    while(sum_odd > 0  && sum_even > 0){
        if(sum_odd >= sum_even){
            sum_odd = sum_odd % sum_even;
        }else{
            sum_even = sum_even % sum_odd;
        }
    }
    if(sum_even == 0){
        return sum_odd;
    }else{
        return sum_even;
    }
    
}