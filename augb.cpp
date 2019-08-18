//https://www.codechef.com/AUG19B/problems/ZOMCAV

//question can be found in above link



#include <bits/stdc++.h>
#define lln long long int
using namespace std;
void merge(lln arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
   
    lln L[n1], R[n2]; 
  
   
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    k = l; 
    i = 0;
    j = 0; // Initial index of se 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(lln arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
  
        
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void add(lln arr[], int N, int lo, int hi) 
{ 
    arr[lo] += 1; 
   if (hi != N){ 
       arr[hi+1] -= 1; }
} void updateArray(lln arr[], int N) 
{ 
    
    for (int i = 2; i < N+1; i++) 
        arr[i] += arr[i - 1]; 
} 
int main() {
	int t;cin>>t;while(t--){
	    int n;cin>>n;
	    lln a[n+1],b[n+1],cc[n+1];memset(a,0,sizeof(a));
	   
	   
	    for(int i=1;i<n+1;i++){
	        cin>>cc[i];}for(int i=1;i<n+1;i++){
	        lln l=i-cc[i];if(l<1){l=1;}lln r=i+cc[i];if(r>n){r=n;}
	        add(a,n,(int)l,(int)r);
	       
	        
	    } updateArray(a,n);for(int i=1;i<n+1;i++){cin>>b[i];}int xx=n+1;mergeSort(a,1,n);mergeSort(b,1,n);
	    int d=0;
	     
	    for(int i=1;i<n+1;i++){
	    if(a[i]!=b[i]){d=1;break;}}
	    
	    if(d==1){cout<<"NO"<<endl;}
	    else {cout<<"YES"<<endl;}
	}
	return 0;
}
