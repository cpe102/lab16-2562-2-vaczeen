#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int> );
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}
vector<int> randomVector(int N){
	int x;
	vector<int>B;
	for(int i=0;i<N;i++){
			x=rand()%10;
		 B.push_back(x); 
		
	}
	return B;
}
void showVector(vector<int> A){
	cout<<"[ ";
	for(int i=0;i<A.size();i++){
		cout<<A[i]<<" ";
	}
	cout<<" ]";
}
int dotProduct(vector<int> a,vector<int> b){
	int A;
	for(int i=0;i<a.size();i++){
		
			A+=(a[i]*b[i]);
		
	}
	return A;
}
//Write Definition of randomVector() showVector() and dotProduct() here
