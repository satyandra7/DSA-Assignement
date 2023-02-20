//Q8. [Josephus circle:] N people decided to elect a leader by arranging themselves in a 
//circle and eliminating every mth person around the circle, closing ranks as each drops 
//out. Find which person will be the last one remaining (with rank 1).

#include <bits/stdc++.h>

using namespace std;

void Josh(vector<int> person, int k, int index)
{
	// Base case , when only one person is left
	if (person.size() == 1) {
		cout << person[0] << endl;
		return;
	}

	// find the index of first person which will die
	index = ((index + k) % person.size());

	// remove the first person which is going to be killed
	person.erase(person.begin() + index);

	// recursive call for n-1 persons
	Josh(person, k, index);
}

int main()
{
	int n;
	cout<<"Enter the number of persons:";
	cin>>n;
	int m;
	cout<<"Enter the value of m:";
	cin>>m;
	m--; 
	int index
		= 0; // The index where the person which will die

	vector<int> person;
	// fill the person vector
	for (int i = 1; i <= n; i++) {
		person.push_back(i);
	}

	Josh(person, m, index);
}
