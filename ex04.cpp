#include<iostream>
using namespace std;
int my_strlen(const char* s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
int main() {
    string s1 = "ggggggdfd";
    string s2 = "dsgsg";
    string s3 = "dfgsdf";
    string s4 = "jdfksjdf";
    cout << my_strlen(s1.c_str()) << endl;
    cout << my_strlen(s2.c_str()) << endl;
    cout << my_strlen(s3.c_str()) << endl;
    cout << my_strlen(s4.c_str()) << endl;
    return 0;
}