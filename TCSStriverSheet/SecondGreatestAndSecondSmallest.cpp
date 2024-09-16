vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int min=INT_MAX ,second_min=INT_MAX;
    int max=INT_MIN ,second_max=INT_MIN;
    vector<int>res(2);
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else if(a[i]<second_min && a[i]!=min)
        {
            second_min=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max && a[i]!=max)
        {
            second_max=a[i];
        }
    }
    res[0]=second_max;
    res[1]=second_min;
    return res;
}
