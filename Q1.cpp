#include <iostream>
#include <map>
#include <vector>

using namespace std;


bool isSubset(const vector<char> &, const vector<char> &);

int main() {
	vector<char> t_1= { 'A','B','C','D','E' }; 
	vector<char> s_1 = { 'A','E','D' };
	vector<char> t_2 = { 'A','B','C','D','E' };
	vector<char> s_2 = { 'A','D','Z' };
	vector<char> t_3 = { 'A','D','E' };
	vector<char> s_3 = { 'A','A','E','D' };

	cout<<isSubset(t_1, s_1)<<endl;
	cout << isSubset(t_2, s_2) << endl;
	cout << isSubset(t_3, s_3) << endl;

}

bool isSubset(const vector<char> & t, const vector<char> & s) {

	map<char, int> temp;				//use map to create a hash table
	for (int i = 0; i < t.size(); i++)	//initialie the hash table by t[i]
		temp[t[i]] = 1;

	for (int k = 0; k < s.size(); k++)	//Check if s[k] is in the hash table, if not then return false
		if (temp[s[k]] == 0)
			return false;

	return true;
}