#include "PhoneticFinder.hpp"
#include <iostream>

using namespace std;

namespace phonetic {

	std::string cast(std::string text) {
	std::string str;
for (int i = 0; i<text.length();i++){
	if(text[i]>=65 && text[i]<=90) str+= text[i]+32;
	else str+= text[i];
}
return str;
}
	std::string find(std::string text1, std::string word1) {
		if(word1.length()==0) 
		throw std::out_of_range{"the word is empty"};
		std::string text = cast(text1);
		std::string word = cast(word1);
		int flag=0;
		for(int i=0;i<text.length();i++){
			if(text[i]==word[0] || (text[i]=='v' && word[0]=='w')||(text[i]=='w' && word[0]=='v') || (text[i]=='g' && word[0]=='j')
			||(text[i]=='j' && word[0]=='g') || (text[i]=='s' && word[0]=='z')||(text[i]=='z' && word[0]=='s') || (text[i]=='d' && word[0]=='t')
			||(text[i]=='t' && word[0]=='d') || (text[i]=='o' && word[0]=='u')||(text[i]=='u' && word[0]=='o') || (text[i]=='i' && word[0]=='y')
			||(text[i]=='y' && word[0]=='i') || (text[i]=='b' && (word[0]=='f' || word[0]=='p'))||(text[i]=='f' && (word[0]=='b'||word[0]=='p')) 
			|| (text[i]=='p' && (word[0]=='b'||word[0]=='f')) || (text[i]=='c' && (word[0]=='k' || word[0]=='q'))||(text[i]=='k' && (word[0]=='c'||word[0]=='q')) 
			|| (text[i]=='q' && (word[0]=='c'||word[0]=='k'))){
				flag=1;
				for(int j=1;j<word.length();j++){
					if(text[i+j]==word[j] || (text[i+j]=='v' && word[j]=='w')||(text[i+j]=='w' && word[j]=='v') || (text[i+j]=='g' && word[j]=='j')
					||(text[i+j]=='j' && word[j]=='g') || (text[i+j]=='s' && word[j]=='z')||(text[i+j]=='z' && word[j]=='s') || (text[i+j]=='d' && word[j]=='t')
					||(text[i+j]=='t' && word[j]=='d') || (text[i+j]=='o' && word[j]=='u')||(text[i+j]=='u' && word[j]=='o')|| (text[i+j]=='i' && word[j]=='y')
					||(text[i+j]=='y' && word[j]=='i') || (text[i+j]=='b' && (word[j]=='f' || word[j]=='p'))||(text[i+j]=='f' && (word[j]=='b'||word[j]=='p')) 
					|| (text[i+j]=='p' && (word[j]=='b'||word[j]=='f')) || (text[i+j]=='c' && (word[j]=='k' || word[j]=='q'))||(text[i+j]=='k' && (word[j]=='c'||word[j]=='q')) 
					|| (text[i+j]=='q' && (word[j]=='c'||word[j]=='k'))) 
					flag=1;
					else {
						flag=0;
						break;
				}
			}
			if(flag==1 && (text[i+word.length()]==' ' || text[i+word.length()]=='\0')) return text1.substr(i,word.length());
			else throw std::out_of_range{"Did not find the word " + word1 + " in the text"};
		}
	}
	if(flag==0)
		throw std::out_of_range{"the word is not in the text"};
		return "finsh";
 }


}
