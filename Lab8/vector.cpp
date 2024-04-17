#include <iostream>
#include <vector>

using namespace std;

void printMemArr(const int * arr, int size){
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++){
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void incArrBy10(int * arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] += 10;
    }
}

void printMemVec(const vector<int> &v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(size_t i = 0; i < v.size(); i++){
        printf("Value :%i at Memory Location: %p\n", v[i], &v[i]);
    }
}

void incVecBy10(vector<int> &v){
    for(size_t i = 0; i < v.size(); i++){
        v[i] += 10;
    }
}

int main(){
    const int SIZE = 5;

    vector<int> vec(SIZE);

    printf("Before Increment------------\n");
    printMemVec(vec);

    incVecBy10(vec);

    printf("After Increment-------------\n");
    printMemVec(vec);

    vec.pop_back();

    printf("After Pop-------------------\n");
    printMemVec(vec);

    vec.push_back(101);
    vec.push_back(102);

    printf("After Push----------------\n");
    printMemVec(vec);

    return 0;
}
