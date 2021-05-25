int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    if(n<=1) return 0;
    int prevMx1=A[0]+0;
    int prevMx2=A[0]-0;
    int prevMx3=-A[0]+0;
    int prevMx4=-A[0]-0;
    int ret=0;
    for(int i=0;i<n;i++){
        int mx1=prevMx1-A[i]-i;
        int mx2=prevMx2-A[i]+i;
        int mx3=prevMx3+A[i]-i;
        int mx4=prevMx4+A[i]+i;
        ret = max({ret,mx1,mx2,mx3,mx4});
        prevMx1= max(prevMx1,A[i]+i);
        prevMx2=max(prevMx2,A[i]-i);
        prevMx3=max(prevMx3,-A[i]+i);
        prevMx4=max(prevMx4,-A[i]-i);
    }
    return ret;
}
