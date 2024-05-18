#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
   int i, j, minIndex, temp;
   for (i = 0; i < n-1; i++) {
      minIndex = i;
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[minIndex])
            minIndex = j;
      temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
   }

}
void prin(int a[], int size){
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
		
	}

}
int main(){
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >>  a[i];
}
selectionSort(a,n);
prin(a,n);	
cout << endl;
}
}

