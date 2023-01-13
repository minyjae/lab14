#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);


int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int z,double y[]){
    double sum=0,sum1=0,hm,sum2=0,max = x[0],min = x[0],sum3 = 0,gm,temp;
    for(int i=0; i < z ; i++){
        sum += x[i];
        
        
        hm = 1/x[i];
        sum2 += hm;
        
        if(max < x[i]){
            max = x[i];
        }
        if(min > x[i]){
            min = x[i];
        }
        
        gm += log(x[i]);
        sum3 = pow(2.71828,gm/z);
             
    }
    temp = sum/z;
    for(int j=0; j < z ; j++){
        sum1 += pow(x[j]-temp,2);
    }
    y[0]=sum/z;
    y[1]=sqrt(sum1/z);
    y[2]=sum3;
    y[3]=z/sum2;
    y[4]=max;
    y[5]=min;

    
    
    }
