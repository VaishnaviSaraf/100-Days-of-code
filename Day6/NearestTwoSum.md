You are given a list of integers and must find the nearest pair that sum to a given target. For instance, given the list (1 5 3 6 4 2), if the target is 7, there are three pairs with the required sum, (1 6), (5 2) and (3 4), but pair (1 6) has two intervening numbers, pair (5 2) has three intervening numbers, and pair (3 4) has only one intervening number, so (3 4) is the nearest pair.


Solutions:

-Brute force

--Less space complexity 

--Time Complexity O(n*n)
```c
#include<stdio.h>
int main(){
    long n,tar;
    printf("enter n :");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("\nEnter target : \n");
    scanf("%d",&tar);
    long f=0,diff=n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(A[i]+A[j]==tar){
                if(j-i<diff){
                    diff=j-i;
                    f=i;
                }
            }
        }
    }
    printf("pair is (%d,%d)",A[f],A[f+diff]);
}
```
-Using Hash Table

--High space complexity 

--Time Complexity O(n)
```c
#include<stdio.h>
int main(){
    long n,tar;
    printf("enter n :");
    scanf("%d",&n);
    int A[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]>max){
            max=A[i];
        }
    }
    printf("\nEnter target : \n");
    scanf("%d",&tar);
    long f=0,diff=n;
    int hash[max+1];
    for(int i=0;i<max+1;i++){
        hash[i]=-1;
    }
    for(int i=0;i<n;i++){
        hash[A[i]]=i;
        if(hash[tar-A[i]]>=0){
            if((i-hash[tar-A[i]])<diff){
                    diff=i-hash[tar-A[i]];
                    f=hash[tar-A[i]];
                }
    }
    }
    printf("pair is (%d,%d)",A[f],A[f+diff]);
}
```
-Most optimised : Using Map  

--Less space complexity 

--Time Complexity O(n)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tar;
    // cout<<"Enter length of array"<<endl;
    cin >> n;
    vector<int> vec(n);
    map<int,int>map1;
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
        
    }
    // cout<<"Enter target"<<endl;
    cin>>tar;
    long diff=n,f=0;
    
    for(int i = 0; i < vec.size(); i++){
        if(map1.find(tar-vec[i])!=map1.end()){
            if((i-map1[tar-vec[i]])<diff){
            diff=i-map1[tar-vec[i]];
            f=map1[tar-vec[i]];
            }
        }else{
            map1[vec[i]]=i;
        }
    }
    if(diff!=n){
    cout<<"("<<vec[f]<<","<<vec[f+diff]<<")";
    }else{
        cout<<"Pair does not exists";
    }
    //twosum(vec,tar);//for (auto it : vec)
        //cout << it;
    return 0;
}
```
