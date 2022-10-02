#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    char arr[100],arr1[100],arr2[100];
    cout<<"enter your name and age";
    cin.getline(arr,100);
    int x;
    float y;

    //fstream myfile("xyz.txt", ios::out|ios::app); same as ofstream and ifstream just the mode specified
 /*  ofstream myfile("xyz.txt",ios::app);
    myfile<<arr;
    myfile.close();
    cout<<"file written"<<endl;

    cout<<"read operation"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"array content: "<<arr1<<endl;
    cout<<"file read"<<endl;
    obj.close(); 

     ofstream myfile("xyz.txt");
     myfile<<arr;
     myfile.close();
    cout<<"file written"<<endl;

    ifstream myfile2("xyz.txt");
    myfile2.getline(arr1,100);
    cout<<"content "<<arr1<<endl;
    cout<<"read";
    myfile2.close();

    ofstream myfile("xyz.txt");
    myfile<<arr2;
    

 
   

    ofstream myfile2("f2.txt");
    myfile2<<arr;
    myfile2.close();
    cout<<"written";

     ifstream myfile("f1.txt");
    myfile.getline(arr,100);
    cout<<"array content "<<arr<<endl;
    cout<<"file read "<<endl;
    myfile.close();


    
     ifstream myfile("f1.txt");
    myfile.getline(arr,100);
    cout<<"array content "<<arr<<endl;
    cout<<"file read "<<endl;
    myfile.close();*/

char c;
    ifstream myfile("xyz.txt");
    ofstream myfile2("abc.txt");

    while(myfile.get(c))
    {
        myfile2.put(c);
    }
    myfile.close();
    myfile2.close();
}