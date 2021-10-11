#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std::literals::chrono_literals;
using namespace std;
int main()
{
     cout <<"Bai 1:" << endl;
     int a,b;
     a=10;
     b=1;
     cout <<"Tong hai so la: " << a+b <<endl;
     cout <<"Hieu hai so la: " << a-b <<endl;
     cout <<"Tich hai so la: " <<a*b <<endl;
     cout << "Thuong cua hai so la:"<< a/b<< endl;
     //bai 2
     cout<< "Bai 2: "<<endl;
     cout<< "Nhap vao so a= "<<endl;
     cin>>a;
     cout<< "Nhap vao so b= "<<endl;
     cin>>b;
     cout<<"Tong ="<< a+b <<endl;
     cout << "Tbc ="<<float (a+b)/2 <<endl;
     //bai 3
     cout<< "Bai 3: "<<endl;
     float u,v,gt,t;
     cout<<"Nhap vao van toc ban dau"<<endl;
     cin>>u;
     cout<<"Nhap vao gia toc "<<endl;
     cin>>gt;
     cout <<"Nhap vao thoi gian "<<endl;
     cin>>t;
     v=u+gt*t;
     cout<< "Van toc cuoi cung can tim:"<<v<<endl;
     //bai 4
     cout<< "Bai 4: "<<endl;
     float diemkt,diemgk,diemck;
       float tong;
       cout<< "Nhap diem kiem tra: "<<endl;
       cin >> diemck;
       cout << "Nhap diem giua ki" <<endl;
       cin >>diemgk;
       cout <<"Nhap diem cuoi ki" <<endl;
       cin>>diemkt;
       tong= diemkt+diemgk+diemck;
       cout<<"Tong diem la: "<< tong<< endl;
       //bai5
       cout<< "Bai 5: "<<endl;
       int x,y;
       cout<<"Nhap vao 2 so nguyen x,y :"<<endl;
       cin>>x>>y;
       int p,s;
       int total;
       p=x*y;  s=x+y;
       total=s*s+p*(s-x)*(p+y);
       cout<<"total = " << total<<endl;
 // Tinh thoi gian thuc thi chuong trinh bang microsecond
          // lấy thời điểm bắt đầu
          auto start = steady_clock::now();
          // lấy thời điểm kết thúc
          auto end = steady_clock::now();
              auto elapsed2 = duration_cast<duration<int, std::ratio<1, 1000000>>>(end - start);
              std::cout << "Thoi gian = " << elapsed2.count() << " x 10^-6 seconds\n";

     return 0;

}

