#include<bits/stdc++.h>
#define ll long long
#define ss string
#define nl endl
#define sp " "
#define sort(ar) sort(ar,ar+n);
#define vso() sort(v.begin(),v.end());
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
void merge(int ar[],int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = ar[l + i];
    for (int j = 0; j < n2; j++)
        M[j] = ar[m + 1 + j];
    int i=0, j=0, k=l;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            ar[k] = L[i];
            i++;
        } else {
            ar[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        ar[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        ar[k] = M[j];
        j++;
        k++;
    }

     return;
}
void mergesort(int ar[],int left,int right){
	if(left>=right)return;
	int mid=left+(right-left)/2;
	mergesort(ar,left,mid);
	mergesort(ar,mid+1,right);
	merge(ar,left,mid,right);
	return;
}
int main(){


    op();
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
    	cin>>ar[i];
      }
    mergesort(ar,0,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<sp;
        }
   return 0;

}
