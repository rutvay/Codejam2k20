#include<iostream>
#include<math.h>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int tn=t;
    while(t--)
    {
        int n;
        int row=0,colom=0;
        int trace=0;
        cin >> n;
        int matrix[n][n];
        int cols=0;
        int rols=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){cin >> matrix[i][j];
                if(i==j)
                {
                    trace+=matrix[i][j];
                }
            }
        }
        int rowcheck=0,colomcheck=0;
        for(int i=0;i<n;i++)
        {
            row=0;
            for(int j=0;j<n;j++)
            {
                if(row==2)
                break;
                row=0;
                rowcheck=matrix[i][j];
                for(int k=0;k<n;k++)
                {
                    if(rowcheck==matrix[i][k])
                    {
                        row++;
                        if(row==2)
                        {
                            rols++;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            colom=0;
            for(int j=0;j<n;j++)
            {   
                if(colom==2)
                break;
                colom=0;
                colomcheck=matrix[j][i];
                for(int k=0;k<n;k++)
                {
                    if(colomcheck==matrix[k][i])
                    {
                        colom++;
                        if(colom==2)
                        {
                            cols++;
                            break;
                        }
                    }
                }
            }
        }
        cout << "Case #"<< tn-t <<": " << trace << " " << rols << " " << cols <<endl;
    }
}