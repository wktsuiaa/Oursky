#include <iostream>
#include <vector>

using namespace std;


void nextFibonacci(const vector<int> &);

int main() {
	vector<int> t_1= { 1,22,9 }; 
	nextFibonacci(t_1);

}

void nextFibonacci(const vector<int> & t_1) {

	vector<int> hash = { 1,1 };		//Create a dynamic array to store the fibonacci number

	for (int i = 0; i < t_1.size(); i++) {	//Loop through all the element of the array t_1
		if (t_1[i] < hash.back())			//Check if the current element of the set is larger than the last fibonacci number 
		{									//if yes then performan binary search then cout the result
			int min = 0, last = hash.size() - 1, mid;	
			do {
				mid= (min + last) / 2;
				if (t_1[i] < hash[mid])
					last = mid;
				else
					min = mid + 1;
			} while (min != last);

			cout << hash[min]<<endl;
		}
		else {
			while (t_1[i] >= hash.back()) {	//if no then generate the new fibonacci number untill the one is large than the current element
				hash.push_back(hash[hash.size() - 1] + hash[hash.size() - 2]);
			}
			cout << hash.back()<<endl;
		}
	}
}