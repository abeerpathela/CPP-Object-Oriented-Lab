#include <bits/stdc++.h>
using namespace std;

class Movie {
public:
	string title;
	int year;
	float rating;

	Movie(string title, int year, float rating) {
		this -> title = title;
		this -> year = year;
		this -> rating = rating;
	}

	void display() {
		cout << title << " - " << year << " - " << rating << endl;
	}

};

int main() {
	int N;
	cin >> N;
	cin.ignore();

	vector <Movie> arr;

	for(int i = 0; i < N; i++) {
		string title;
		int year;
		float rating;

		getline(cin, title);
		cin >> year;
		cin >> rating;

		cin.ignore();
		arr.push_back(Movie(title, year, rating));
	}
	int Q;
	cin >> Q;
	cin.ignore();


	for(int i = 0; i < Q; i++) {
		string query;
		getline(cin, query);
		bool found = false;

		if(query == "ALL") {
			for(int j = 0 ; j < arr.size(); j++) {
				arr[j].display();
			}
		} else if(query.find("YEAR", 0) == 0) {
			int y = stoi(query.substr(5));
			for(int j = 0;  j < arr.size(); j++) {
				if(arr[j].year == y) {
					arr[j].display();
					found = true;
				}
			}
			if(!found) cout << "No movies found." << endl;
		} else if(query.rfind("RATING", 0) == 0) {
			float r = stof(query.substr(7));
			for(int j = 0; j < arr.size(); j++) {
			    if(arr[j].rating == r){
			        
				arr[j].display();
				found = true;
			    }
			}
		}
		if(!found) {
			cout << "No movies found." << endl;
		}
	}

	return 0;
}