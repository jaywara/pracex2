#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int min;
	ifstream a("score1.txt");
	string line;
	while(getline(a,line)){
		cout << line << "\n";
	}
	for(int i=0;i<20;i++){
		if(line[i]<min)line[i]=min;
	}
	cout<<min;
	return 0;
}

