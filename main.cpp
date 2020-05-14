#include <cstdlib>
#include<iostream>
#include <string>
#include <cstring>
using namespace std;
#include "myFunctions.h"

double cube(double x = 4);
double cube(double number)
{return (number * number * number); 
}

void printCalls(){
    static int counter = 0;
    cout << ++counter << endl;
}

void defaultParams(int x = 1, int y = 2, int z = 3);
void defaultParams(int x, int y, int z)
{
    cout<<x<<", "<<y<<", "<<z<<endl;
}

void doubleNumb(int& refVar)
{
    refVar *= 2;
}
void arFunction(int ar[5])
{
    for (int i = 0; i < 5; i++) 
    {
        cout << ar[i] <<endl;
    }
}

void triplePointer()
{
    int y = 20;
    int *p, **pp, ***ppp;
    p = &y;
    pp = &p;
    ppp = &pp;
    
    ***ppp *= 10;
    cout << y;
}
void printArray(int *p, int size)
{
    int *p1 = p;
    for (int i = 0; i < size; i++) {
        cout<<p[i]<<" "<<*p1++<< " "<< *(p+i)<<endl;
    }

}

int * memoryAllocation()
{
    int *p = new int();
    *p = 10;
    return p;    
    
}

int * memoryAllocationArray()
{
    int *pAr = new int[3]();
    pAr[0] = 100;
    pAr[1] = 200;
    pAr[2] = 300;
    return pAr;    
    
}

char * dynamicArrayOfPtrs()
{
    char word[80];
    char *ptrArr[3];
    cout<<"Type 3 Words "<<endl;
    for (int i = 0; i < 3; i++) {
        cout<<"type a word: ";
        cin >> word;
        int len = std::strlen(word);
        ptrArr[i] = new char[len +1];
        strcpy(ptrArr[i], word);
        cout<<ptrArr[i]<<endl;
    }
    return ptrArr[0]; //cannot return full array like java
}

void dynamicArrayOfPtrs2(char* ar[], int size)
{
    char word [80];
    for (int i = 0; i < size; i++) {
        cout<<"Please type a word: ";
        cin >> word;
        
        ar[i] = new char[std::strlen(word+1)];
        if(ar[i] == nullptr)
            exit(-1);
        std::strcpy(ar[i], word);
        cout<<endl;
    }

}

int main(int argc, char** argv) {
    //cout << square(5);
    //cout << cube(5);
    //cout << cube();
    //printCalls(); //the static keeps a memory across the board of variable counter
    //printCalls();
    //printCalls();
    //defaultParams();
    //defaultParams(100, 200);
    //defaultParams(100, 1000);
    
    /*int ar[5]; //notice it's only 5
    for (int i = 0; i < 10; i++) {
        ar[i] = i;
        cout<<ar[i]<<endl;
    
    
    int x = 10;
    int *p = &x; //pointer *p point to address of x (&x)
    *p = 20; //dereference pointer / change x's value at its address!
    
    cout<<"Address of x " <<&x << endl;
    cout<<"x " <<x << endl;
    cout<<"Contents of what p points to " <<*p << endl;
    cout<<"address that p holds " <<p << endl;
    cout<<"address p resides " <<&p << endl;
    
    int **pp;
    pp = &p; //pointer to a pointer declared ** - we point it to p's address
             //(which points to x)
    cout<<"the address of p via a pointer to a pointer "<<pp<<endl;
    cout<<"Address that pp's first child points to "<<*pp<<endl;
    cout<<"Contents of pp (which is p, which is x) "<<**pp<<endl;
    
    int x = 10, y=20;
    int *p1 = &x;
    int *p2 = p1;
    
    cout << *p1<<endl; //same contents
    cout << *p2<<endl;
    
    p2+=6; //goes onto the next address / uses +6 bc we're using int size
    cout << *p2 << endl;
    
    *p1 +=100;
    cout << x <<endl;
     */
    
    //triplePointer();
    
//    int ar1[3] = {5, 6, 7};
//    int *pAr = &ar1[0];
//    int *pArMoving = pAr;
//    int *pWithIndexStable = &ar1[0];
    /*for (int i = 0; i < 3; ++i) {
        
        cout<< "AR1 " << ar1+i<<endl;}

    for (int i = 0; i < 3; ++i) {
        
        cout<< "Contents " << *(ar1 + i)<<endl;
        cout <<"Pointer "<< *(pAr + i)<<endl; //pointer remains at same address
        cout <<"Move "<< *pArMoving++<<endl; //moves the pointer from the beginning
                                             // to end
        cout << pWithIndexStable[i]<<endl;
        cout<<ar1[i]<<endl;
    }
    */
//    printArray(ar1, 3);
//    cout<<"----------------------------"<<endl;
//    int * p=memoryAllocation();
//    if(p = nullptr)
//        return -1;
//    cout<<p<<endl;
//    delete p; //frees memory !!!Needed for memory leak isuues
//    cout<<"----------------------------"<<endl;
//    int * pAr1 = memoryAllocationArray();
//    if(pAr1 = nullptr)
//        return -1;
//    printArray(pAr1, 3);
//    delete[]pAr1;
//TAYLOR NOTE: you can use *p = &x, then use *&g = p; This is 1 address, 2 names   
    int c = 10;    
    int *t = &c;
    int *& rt = t;
    
    char* ar[3];
    
   //dynamicArrayOfPtrs();
    dynamicArrayOfPtrs2(ar, 3);
    
    for (int i = 0; i < 3; i++) {
        cout<<ar[i]<<" ";
    }
    
    for (int i = 0; i < 3; i++) {
        delete[]ar[i];
    }
    
    

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   return 0;
}

