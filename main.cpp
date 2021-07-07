#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "Printing vector1..." << endl;
	for (int i=0;i<vector1.size();++i) {
		cout << vector1.at(i) << endl;
	}
	
	vector2.push_back(100);
	vector2.push_back(200);	
	
	cout << "Printing vector2..." << endl;
	for (int i=0;i<vector2.size();++i) {
		cout << vector2.at(i) << endl;
	}
	
	vector <vector<int>> vector_2d;
	
	//Add vector1 to vector_2d
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	vector<vector<int>>::const_iterator row;
	vector<int>::const_iterator col;
	
	cout << "Printing vector_2d..." << endl;
	for (row=vector_2d.begin();row!=vector_2d.end();++row) {
		// (*row) and row-> are equivalent for dereferencing iterator
		for (col=(*row).begin();col!=row->end();++col) {
			cout << *col << " ";
		}
		cout << endl;
	}
	
	vector1.at(0) = 1000;

	cout << "Printing vector_2d after changing vector1.at(0)..." << endl;
	for (row=vector_2d.begin();row!=vector_2d.end();++row) {
		// (*row) and row-> are equivalent for dereferencing iterator
		for (col=(*row).begin();col!=row->end();++col) {
			cout << *col << " ";
		}
		cout << endl;
	}
	
		cout << "Printing vector1..." << endl;
	for (int i=0;i<vector1.size();++i) {
		cout << vector1.at(i) << endl;
	}
	
	return 0;
}