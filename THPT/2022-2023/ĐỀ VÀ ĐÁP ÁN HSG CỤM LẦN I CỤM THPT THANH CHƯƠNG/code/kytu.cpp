#include<bits/stdc++.h>;
using namespace std;

void xuat( int a[] , char str[] ) {
freopen("kytu.out","w",stdout);
for (int j = 0 ; j < 26 ; j++)
    if (a[j]>0) cout << str[j] << ":" << a[j] << endl;
    }

void dem (char s[]) {

char str[26];

strcpy(str,"abcdefghijklmnopqrstuvxywz");

int a[26] = {0};

for (int j =0 ; j < strlen(s) ; j++) {
    for (int k =0 ; k < 26; k++) {
        if (s[j] == str[k])
    a[k]++;
    }
        }
xuat(a, str);
}
void chuyen(char s[250])
{

int i;  for(i=0;i<=strlen(s);i++){
      if(s[i]>=65&&s[i]<=90)
         s[i]=s[i]+32;
}}
void nhap() {
char s[250];
freopen("kytu.inp","r",stdin);

cin.getline(s,250); chuyen(s);

dem(s);
}

int main() {

    nhap ();
    return 0;
}
