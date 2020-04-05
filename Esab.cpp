#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define rep(i,f,t) for(i=f;i<(int)t;++i)
//definations
#define pb push_back
#define mp make_pair
#define all(a) begin(a),end(a)
#define F first
#define S second

const int inf = 1e9 + 5, N = 2e5 + 5, D1[] = { 0,0,1,-1 }, D2[] = { 1,-1,0,0 };

using namespace std;

void Constant(string& STRING){
    for(char& ch:STRING){
        if(ch=='1')
        {
            ch='0';
        }
        else if(ch=='0')
        {
            ch='1';
        }
    }
}
int main()
{
    //main code
    int Temp,inpt;
    cin >> Temp >> inpt;
    while(Temp--)
    {
        int i, j, r=-1, c=-1;
        char ch1, OK;
        string str1(inpt,'?');
        for(i=1, j=0; j<inpt/2 ; i+=2)
        {
            if( i>10 && i%10==1)
            {
                if(c!=-1)
                {
                    cout << c+1 << endl;
                    cin >> ch1;
                    if(str1[c]!=ch1)
                    {
                        Constant(str1);
                    }
                }
                else
                {
                    cout << "1\n";
                    cin>>ch1;
                }
                if(r!=-1){
                    cout << r+1 << endl;
                    cin >> ch1;
                    if(str1[r]!=ch1)
                    {
                        reverse(all(str1));
                    }
                }
                else
                {
                    cout << "1\n";
                    cin>>ch1;
                }
            }
            else
            {
                cout << j+1 << endl;
                cin >> str1[j];
                cout << inpt-j << endl;
                cin >> str1[inpt-1-j];
                if(str1[j]==str1[inpt-1-j])
                {
                    c=j;
                }
                else if(str1[j]!=str1[inpt-1-j])
                {
                    r=j;
                }
                ++j;
            }
        }
        cout << str1 << endl;
        cout.flush();
        cin>>OK;
        if(OK=='N')
        {
            exit(0);
            return 0;
        }
    }
}