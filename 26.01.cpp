#include <iostream>
using namespace std;


int math(int basDegree, int indiDegree) {
    int answer = basDegree;
    for (int i = 1; i < indiDegree; i++) {
        answer *= basDegree;
    }
    return answer;
}


int summNumbers(int min, int max) {
    int summ = 0;
    for (int i = min; i <= max; i++) {
        summ += i;
    }
    return summ;
}

int main()
{
    //cout << math(3, 3); // number 1
    cout << summNumbers(1, 5);



}


int main()
{
    int array[] = { 3,5,2,1,5 };
    int size = sizeof(array) / sizeof(array[0]);
    int array1[2][5] = { {3,4,65,1,5},{4,2,1,762,2} };
    int sizeSecArr = sizeof(array1[0]) / sizeof(array1[0][0]);
    int sizeFirArr = sizeof(array1) / sizeof(array1[0]);
    showArray1(array1, sizeFirArr, sizeSecArr);
    swapArray2(array1, sizeSecArr);
    showArray(array1, size3, size1);
    showArray(array, size); 

}
