int max_subarray_sum(int a[]){
    for(int i = 1; i <= 7; i++)
    {
        a[i] = a[i - 1] + a[i];
    }
    int ret = -1e9;
    int prevmin = 0;
    for(int i = 0; i <= 7; i++)
    {
        ret = max(ret, a[i] - prevmin);
        prevmin = min(prevmin, a[i]);
    }
    return ret;
}