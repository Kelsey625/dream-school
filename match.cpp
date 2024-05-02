#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[256];
	while(scanf("%s", s) != EOF){
		int len = strlen(s);
		stack<char> str;
		stack<int> index;
		for(int i=0 ; i<len ; i++){
			if(s[i]!='('&&s[i]!=')') continue;
			else{
				if(!str.empty()){
					char now = str.top();
					if(now=='('&&s[i]==')'){
						str.pop();
						index.pop();
					}
					else{
						str.push(s[i]);
						index.push(i);
					}
				}
				else{
					str.push(s[i]);
					index.push(i);
				}
			}
		}
		cout<<s<<endl;
		for(int i=len-1 ; i>=0 ; i--){
			if(!index.empty()){
				if(i==index.top()){
					if(str.top()=='(')
						s[i]='x';
					else
						s[i]='?';
					index.pop();
					str.pop();
				}
				else
					s[i]=' ';
			}
			else
				s[i]=' ';
		}
		cout<<s<<endl;
	}
	return 0;
}
