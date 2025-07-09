    int low=0, high=n, ans=0;

    for(;low<=high;){
        int mid=low+(high-low)/2;
        if(1L*mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }

    return ans;
}

int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int result=srt(n);
    printf("Square root: %d",result);

    return 0;
}
