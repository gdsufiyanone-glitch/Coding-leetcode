bool isPalindrome(int x) {
    long long rev = 0,temp = x;
    if(x < 0){
        return false;
    }
    while(x != 0){
        int ld = x % 10;
        rev = rev*10 + ld;
        x = x / 10;
    }
    if(rev == temp){
        return true;
    }else{
        return false;
    }
    
}