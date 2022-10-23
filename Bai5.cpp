#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	fstream in,out1,out2;
	int a[10][10],x,y,b,n;
	in.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\input2.txt",ios_base::in);
	out1.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\input2_1.txt",ios_base::out);
	out2.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\input2_2.txt",ios_base::out);
	in >> n;
	//doc ma tran ke
	for(int i = 0; i<n;i++)
	{	
		for(int j = 0;j<n;j++)
		{
			in >> a[i][j];
		}
		
	}
	//in danh sach ke
	int t[10];
	out1 << n << endl;
    cout<<"DANH SACH KE\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                t[j]=1;
            }
        }
        out1 << i+1 <<"  ";
        cout << i+1 <<": ";
        for(int a=0;a<n;a++)
        {
            if(t[a]==1)
            {
                out1 << a+1 << " ";
                cout << a+1 << " ";
                t[a]=0;
            }
        }
        out1 << endl;
        cout << endl;
    }
    
	out2 << n << endl;
	cout <<"DANH SACH CANH \n";
	for(int i = 0; i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(a[i][j] == 1)
			{
				out2 << i+1 << "\t" << j+1 << "\n";
				cout << i+1 << "\t" << j+1 << "\n";
			}
		}
	}
	in.close();
	out1.close();
	out2.close();
}


