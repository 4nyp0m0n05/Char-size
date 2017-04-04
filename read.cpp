#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream fin("try.txt",ios::in);
	char c;
	int array[128];
	
	for(int i=0;i<128;i++){
		array[i]=0;
	}
	while(fin>>noskipws>>c){
		cout<<c;
		array[(int)c]++;
	}
	
	for(int i=0;i<128;i++){
		if(array[i]!=0){
			cout<<(char)i<<" "<<array[i]<<endl;	
		}
	}
	return 0;
}