int mx_factorial_iter(int n) {
    int result = n;
    
    if (n == 0 || n == 1) {
        result = 1; 
    } else if(result > 12){
        result = 0;
    }
    else {
        for (int i = 1; i < n; i++)
            result *= i;
    }
    return result;
}
