#include <QCoreApplication>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int n,count=0; //so tien can rut
    int x1, x2, x3, x4; //so luong cac to tien 10k, 20k, 50k, 100k
    loop:
    cout<<"Nhap so tien can rut: (Luu y, so tien phai chia het cho 10000) ";
    cin>>n;
    if(n%10000==0)
    {
    x1 = n / 100000;
    x2 = (n-x1*100000)/50000;
    x3 = (n-x1*100000-x2*50000)/20000;
    x4 = (n-x1*100000-x2*50000-x3*20000)/10000;
    cout<<"So luong to giay bac cua ban la:"<<endl;
    cout<<x1<<" to 100k\n"<<x2<<" to 50k\n"<<x3<<" to 20k\n"<<x4<<" to 10k\n";
    }
    else {
        if(count == 2)
        {
            cout<<"Ban da nhap sai 3 lan, Good Bye!!\n";
        }
        else
        {
        cout<<"Nhap sai, moi nhap lai!!"<<endl;
        count++;
        goto loop;
        }
    }

//    getch();
}
