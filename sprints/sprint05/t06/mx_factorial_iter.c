int mx_factorial_iter(int n) {
    int k = 1;
    
    if (n < 0 || n > 12)
        return 0;
    else if (n == 0)
        return 1;
    else  
        for (int i = 1; i <= n; i++)
            k = k * i;
         return k;
}
