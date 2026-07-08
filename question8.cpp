// reveser the sentances 
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence";
    getline(cin,sentence);
    reverse(sentence.begin(),sentence.end());
    cout << sentence;
    return 0;
}