#include<iostream>
#include<cstring>
#define LEN 80
using namespace std;

bool loc(char *source ,char search,int source_size){
	for(int i=0;i<source_size;i++){
		if(source[i]==search){
			source[i]='0';
			return true;
		}
	}	
	return false;
}

int main(){
	char source[LEN];
	char search[LEN];
	
	cout << "��JA�r��:";
	cin >> source;
	cout << "��JB�r��:";
	cin >> search;
	
	int search_size = strlen(search);/*�r�����*/
	int source_size = strlen(source);
	
	for(int i=0;i<search_size;i++){
		if(loc(source ,search[i] ,source_size)==false){
			cout << "false";
			return 0;
		}
	}
	
	cout << "true";
	return 0;
}
