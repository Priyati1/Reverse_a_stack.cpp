#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int topele){
	if(s.empty()){
		s.push(topele);
		return;
	}
	int te=s.top();//1
	s.pop();
	insertatbottom(s,topele);
	s.push(te);
}
void reversestack(stack<int>&s){
	// base case
	if(s.empty()){
		return;
	}
	// recursive case
	int topele=s.top();
	s.pop();
	reversestack(s);
	insertatbottom(s,topele);
}
void printstack(stack<int>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(6);
	s.push(9);
	s.push(3);
	printstack(s);
	// while(!s.empty()){
	// 	cout<<s.top()<<" ";
	// 	s.pop();
	// }
	reversestack(s);
	printstack(s);
	return 0;
}