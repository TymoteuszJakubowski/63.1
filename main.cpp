#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class file {
	public:
		ifstream fIn;
		file();
		~file();
};
	file::file(){
	fIn.open("c:\\ciagi.txt");
}
	file::~file(){
	fIn.close();
}
class String {
	public:
	bool compareHalfs(string squence);	
};
bool String::compareHalfs(string sequence){
	string h1, h2;
	if(sequence.length()%2 == 1){
		return false;
	}
	for(int i = 0; i<sequence.length()/2;i++){
		h1 += sequence[i];
	}
	for(int i = sequence.length()/2; i<sequence.length(); i++){
		h2 += sequence[i];
	}
	for(int i = 0; i<h1.length();i++){
		if(h1[i] != h2[i]){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	String s;
	file f;
	string temp;
	while(!f.fIn.eof()){
		f.fIn>>temp;
		if(s.compareHalfs(temp)){
			cout<<temp<<endl;
		}
	}
	return 0;
}
