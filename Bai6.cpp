#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	fstream in,out;
	int a[10][10] ={};
	int x,y,s = 0,n;
	in.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\input2_1.txt",ios_base::in);
	out.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\output2_1.txt",ios_base::out);
	in >> n;
	//gan mang ban dau bang 0
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			a[i][j] = 0;
		}
	}
	//doc tu file sau do tu ds ke gan phan tu bang 1
	char c;
	while(!in.eof()){
//		in.ignore(5, ' ');
//		y = in.get();
		c = in.get();
		if(c == ' '||c==-1) continue;
		if(c=='\n'){
			x = in.get()-'0';
		}
		else {
		y = c -'0';
		//cout << x << ' ' << y<< ' ';
		a[x][y]=1;
	}
	}
	//in ra ma tran ke va ghi vao file
	out << n << endl;
	cout << n << endl;
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1; j<= n;j++)
		{
			out << a[i][j] << " ";
			cout << a[i][j] << " ";
			
		}
		out << endl;
		cout<<endl;
	}
		out << "\nCHUYEN TU DANH SACH KE input2_1 SANG DANH SACH CANH output2_1\n";
		cout << "\nCHUYEN TU DANH SACH KE input2_1 SANG DANH SACH CANH output2_1\n";
		for(int i = 1; i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			if(a[i][j] == 1)
			{
				
				out << "\t" << i <<"\t"<<j<<endl;
				cout<< i << "\t" << j << endl;
			}
		}
	}
	for(int i = 1; i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			
			s += a[i][j];
			
		}
		out << "\nBac cua dinh "<< i << "la: " << s <<endl;
		cout<<"\nBac cua dinh "<<i<<" la: "<<s<<endl;
		s=0;
		
	}
	
	out.close();
	in.close();
	
}
