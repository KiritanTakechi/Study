#include<cstdio>
#include<cstring>
#include<iostream>
#include <algorithm>
std::string s;
int main(){
	std::cin>>s;
	std::reverse(s.begin(),s.end());
	printf("%s",s.c_str());
	return 0;
}
