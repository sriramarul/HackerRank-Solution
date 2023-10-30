#include<bits/stdc++.h>
using namespace std;

bool isPower(int x, long int y)
{
    if (x == 1)
        return (y == 1);
 
    long int pow = 1;
    while (pow < y)
        pow *= x;
 
    return (pow == y);
}

int main() {

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int size;
		cin>>size;
		int numbers[size]; 
		for (int j = 0; j < size; j++) { 
        cin >> numbers[j]; 
    	}  
    	string result = "YES";
    	for(int j = size - 1; j > 0 ; j--) {
    		if(numbers[j-1] > numbers[j]) {
    			int number = j;
    			int isPowerOfTwo = isPower(2,number);
    			if(!isPowerOfTwo) {
    				result = "NO";
    			}
    		}
    	}
    	cout<<result;
    	cout<<endl;
	}
}


