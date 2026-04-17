// Pattern
#include<iostream>
using namespace std;
int main() {
	int start;
	start=1;
	int end;
	end=5;
	for(int i=1; i<=5; i++) {
		cout<<endl;
		if(i>3) {
			start=start-1;
			end=end+1;
		}
		for(int j=1; j<=5; j++) {
				if(j==start|| j==end) {
					cout<<"*";
				}
				else {
					cout<<" ";
				}
		}
		if(i<3) {
			start=start+1;
			end=end-1;
		}
	}
	return 0;
}

// optimised code 
#include<iostream>
using namespace std;
int main(){
    int start=1, end=5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<((j==start || j==end)?'*':' ');
        }
        cout<<endl;
        if(i<3){
            start=start+1;
            end=end-1;
        }
        else if(i>=3){
            start=start-1;
            end=end+1;
        }
    }
    return 0;
}

