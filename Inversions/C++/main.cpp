
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;


vector<long> l;
vector<long> aux;
unsigned long long inv;
unsigned long long dq_comp;
unsigned long long bf_comp;
ofstream outfile;
clock_t end_clock;
clock_t start_clock;

void merge(long start, long mid, long end);
void merge_sort(long start, long end);
void merge(long start, long mid, long end){
    long left = start;
    long right = mid + 1;
    long aux_index = start;
    dq_comp+=2;
    while( left <= mid && right <= end)
    {
        dq_comp+=3;
        if( l[left] <= l[right]){
            dq_comp+=1;
            aux[aux_index] = l[left];
            aux_index++;
            left++;
        }
        else
        {
            aux[aux_index] = l[right];
            aux_index++;
            right++;
            inv   +=   (unsigned long long)mid + (1LL)  - (unsigned long long)left;
        }
    }
    dq_comp+=3;
    while (left<= mid){
        dq_comp+=1;
        aux[aux_index] = l[left];
        aux_index++;
        left++ ;
    }
    while (right<= end){
        dq_comp+=1;
        aux[aux_index] = l[right];
        aux_index++;
        right++;
    }

    for( long i = start; i< aux_index; i++){
        dq_comp+=1;
        l[i] = aux[i];
    }

}
void merge_sort(long start, long end){

    if(start < end){
        dq_comp+=1;
        merge_sort(start, (start + end)/2);
        merge_sort((start + end)/2 + 1, end);
        merge(start, (start + end)/2, end);
    }
    return;

}


unsigned long long inversion(long l[], int n){
    unsigned long long data = 0;

    for(int i = 0; i< n;i++ ){

        for (int j = i; j < n;   j++ ){
            if(l[i]>l[j]) data++;
        }
    }
    return data;
}

unsigned long long insertionSort(long arr[], int n)
{
    unsigned long long data = 0;

   int i, key, j;
    bf_comp+=1;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
        bf_comp+=3;
       while (j >= 0 && arr[j] > key)
       {
           bf_comp+=2;
           arr[j+1] = arr[j];
           j = j-1;
           data++;
       }
       arr[j+1] = key;
   }
   return data;
}

unsigned long long inversion_vector(vector<long> v){
    long* input = &v[0];
    return insertionSort(input, (int)v.size());
}



void loadFile(void){

    dq_comp = 0LL;


    ifstream input;
    input.open("2.txt");

    long n;

    input >> n;
    n/=10;
    l.clear();
    aux.clear();

    l.resize(n);
    aux.resize(n);
    inv = 0LL;



    for( long i = 0; i< n; i++){
        input >> l[i];
    }

    input.close();






}

void loadIncr(){
    l.clear();
    aux.clear();

    long n = 100000;

    l.resize(n);
    aux.resize(n);
    for( long i = 0; i< n; i++){
        l[i] = i + 1;
    }


}
void loadDecr(){
    l.clear();
    aux.clear();

    long n = 100000;

    l.resize(n);
    aux.resize(n);


    for( long i = 0; i< n; i++){
        l[i] = n - i;
    }


}

void printL(){

for( long i = 0; i<10; i++){

    cout<< l[i] <<endl;


}
cout<<endl;
}
void using_insertion(){

    start_clock = clock();
    unsigned long long bfinv = inversion_vector(l);
    end_clock = clock() - start_clock;

    cout<<"Brute force approach"<<endl<<endl;
    cout<< "Number of inversions: " << bfinv<< endl;
    cout<< "Number of comparisons: " << bf_comp << endl;
    cout<< "Time elapsed (s): "<< ((float)end_clock)/CLOCKS_PER_SEC <<endl;

    outfile<<"Brute force approach"<<endl<<endl;
    outfile<< "Number of inversions: " << bfinv<< endl;
    outfile<< "Number of comparisons: " << bf_comp << endl;
    outfile<< "Time elapsed (s): "<< ((float)end_clock)/CLOCKS_PER_SEC <<endl;

    cout<<endl<<endl;
    outfile<<endl<<endl;


}


void using_merge(){

    start_clock = clock();

    merge_sort(0,l.size()-1);
    end_clock = clock() - start_clock;

    cout<<"Divide and conquer approach"<<endl<<endl;
    cout<< "Number of inversions: " << inv << endl;
    cout<< "Number of comparisons: " << dq_comp << endl;
    cout<< "Time elapsed (s): "<< ((float)end_clock)/CLOCKS_PER_SEC << endl<<endl;

    outfile<<"Divide and conquer approach"<<endl<<endl;
    outfile<< "Number of inversions: " << inv << endl;
    outfile<< "Number of comparisons: " << dq_comp << endl;
    outfile<< "Time elapsed (s): "<< ((float)end_clock)/CLOCKS_PER_SEC << endl<<endl;

    cout<<endl<<endl;
    outfile<<endl<<endl;



}

int main() {




    outfile.open("output.txt");


    cout<<"Exercise instance first 10^5 numbers."<<endl;
    outfile<<"Exercise instance first 10^5 numbers."<<endl;
    cout<<endl<<endl;
    outfile<<endl<<endl;


    loadFile();
    using_merge();
    loadFile();
    using_insertion();

    cout<<"Increasing order sorted array with 10^5numbers."<<endl;
    outfile<<"Increasing order sorted array with 10^5 numbers."<<endl;
    cout<<endl<<endl;
    outfile<<endl<<endl;


    loadIncr();
    using_merge();
    loadIncr();
    using_insertion();

    cout<<"Decreasing order sorted array with 10^5numbers."<<endl;
    outfile<<"Decreasing order sorted array with 10^5 numbers."<<endl;
    cout<<endl<<endl;
    outfile<<endl<<endl;

    loadDecr();
    using_merge();
    loadDecr();
    using_insertion();


}



