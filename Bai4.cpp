#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	fstream in,out;
	int a[10][10],x,y,b,n;
	in.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\input1_2.txt",ios_base::in);
	out.open("C:\\Users\\hoang\\OneDrive\\Desktop\\Baitaptrr\\output1_2.txt",ios_base::out);
	in >> n ;
	//tao matran 0
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j] = 0;
		}
	}
	char t;
	//doc tu input1_2 cac phan tu bang 1 
	while(!in.eof()){
		in >> x;
		in >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	//xuat ma tran ke
	cout << n << endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			out << a[i][j] << " ";
			cout << a[i][j] <<" ";
		}
		out << endl;
		cout << endl;
	}
	//danh sach ke
	for(int i=1;i<=n;i++)
	{
		out << i << ": ";
		cout << i << ": ";
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1){
				out << j << " ";
				cout << j << " ";
			}
		}
		out << endl;
		cout << endl;
	}
	//bac cua dinh
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			b+=a[i][j];
		}
		out << "Bac cua dinh "<<i<<" la: "<<b<<endl;
		cout << "Bac cua dinh "<<i<<" la: "<<b<<endl;
		b=0;
	}
	in.close();
	out.close();
}
