#include<stdio.h>
double binary_search(int n,int k){
    int low=0;
    int high=n;
    int mid;
    float answer;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==n){
        answer=mid;
        break;
    }
    else if(mid*mid<n){
        answer=mid;
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
float increment=0.5;
for(int i=0;i<k;i++){
    while((answer+increment)*(answer*increment)<=n){
        answer+=increment;
    }
    increment/=10;
}
return answer;
}
int main()
{
    float k=binary_search(80,3);
    printf("%f",k);

}