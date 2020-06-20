	
// A Stack based C++ program to find next 
// greater element for all array elements. 
#include <bits/stdc++.h> 
using namespace std; 

/* prints element and NGE pair for all 
elements of arr[] of size n */
void printNGE(int arr[], int n) { 
stack < int > s; 
s.push(arr[0]); 


for (int i = 1; i < n; i++) { 

	if (s.empty()) { 
	s.push(arr[i]); 
	continue; 
	} 

	while (s.empty() == false && s.top() < arr[i]) 
	{		 
		cout << s.top() << " --> " << arr[i] << endl; 
		s.pop(); 
	} 


	s.push(arr[i]); 
} 
while (s.empty() == false) { 
	cout << s.top() << " --> " << -1 << endl; 
	s.pop(); 
} 
} 

/* Driver program to test above functions */
int main() { 
int arr[] = {8,7,2,4}; 
int n = sizeof(arr) / sizeof(arr[0]); 
printNGE(arr, n); 
return 0; 
}

