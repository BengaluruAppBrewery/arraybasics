//
//  main.cpp
//  ArrayBasics
//
//  Created by BengaluruAppBrewery on 07/02/22.
//

#include <iostream>

using namespace std;
int main() {
  
    int A[5]; //declaration
    int B[10] = {1,3,5,7,3,9}; //declaration with initialization
    A[0] = 12;
    A[1] = 20;
    A[2] = 30;
    cout<<sizeof(A)<<endl; //takes 4 bytes per interger hence 5(size of array) * 4(size of integer ) = 20
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);
    printf("%d\n", B[9]); // index which do not have values will take 0 as default
    for( int i = 0; i<9; i++){  //iterating using for loop
        cout<<B[i]<<endl;
    }
    for(int j:B){ //iteration using for each
        cout<<j<<endl;
    }
    //Iterating the array by getting the array cout from command line
    int n;
    cout<<"Enter size";
    cin>> n;
    int C[n];
    C[0] = 2;
    for(int k: C){
        cout<<k<<endl;
    }
    return 0;
}
