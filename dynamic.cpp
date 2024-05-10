#include<iostream>
using namespace std;
int  main(){
    int *ptr=NULL;
    int size=0;
    cout<<"enter the size of array: \n";
    cin>>size;
    ptr= new int[size];
    //prt=(int*)malloc(size*sizeof(int));
    //use memory
    delete []ptr;
    return 0;
}