//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <iostream>
using namespace std;
 
int main () {
int a = 0; //banyaknya element data
int i; //untuk iterasi for
int sum = 0, max = 0, min = 0;
 
//minta user input banyaknya data
cout << "Banyaknya element yang akan diinput :";
cin >> a;
 
//bikin array dengan panjang a
int data[a];
 
//minta user input untuk tiap-tiap element
for(i=0; i<a; i++) {
cout << "Input element ke ";
cout << i+1;
cout << " : ";
cin >> data[i];
}
//pake array
cout << "\n Pake Array :";
cout << "\n data yang anda masukan adalah "; 
max = min = data[0];
for(i=0; i<a; i++) {
cout << data[i] << ','; 
sum = sum + data[i];
if (max < data[i]) {
max = data[i];
}
if (min > data[i]) {
min = data[i];
}
}
cout << "\n Jumlah data : " << sum;
cout << "\n Rata-rata : " << sum/a;
cout << "\n terkecil :" << min;
cout << "\n terbesar : " << max;
cout << "\n================================\n";
 
//Pake pointer
sum = 0;
int *ptr;
ptr = data;
 
cout << "\n Pake Pointer :";
cout << "\n data yang anda masukan adalah "; 
max = min = *ptr;
for(i=0; i<a; i++) {
cout << *(ptr + i) << ','; 
 
sum = sum + *(ptr + i);
if (max < *(ptr + i)) {
max = *(ptr + i);
}
if (min > *(ptr + i)) {
min = *(ptr + i);
}
}
cout << "\n Jumlah data : " << sum;
cout << "\n Rata-rata : " << sum/a;
cout << "\n terkecil :" << min;
cout << "\n terbesar : " << max;
return 0;
}
