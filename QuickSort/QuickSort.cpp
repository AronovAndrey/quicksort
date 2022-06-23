#include <iostream>
#include <string>
using namespace std;


void quicksort(int* array, int size) {

    int i = 0;
    int j = size - 1;
    int mid = array[size / 2];

    do {
        
        while (array[i] < mid) {
            i++;
        }
        
        while (array[j] > mid) {
            j--;
        }

        
        if (i <= j) {
            swap(array[i], array[j]);
            i++;
            j--;
        }

    } while (i <= j);

    if (j > 0) {  
        quicksort(array, j + 1);
    }

    if (i < size) {
        quicksort(&array[i], size - i);
    }
}


int main()
{
    int size = 5;
    int* array = new int[size];
   
    cout << "You must input " << size << " numbers.\n";

    for (int i = 0; i < size; i++) {
        static int count = 1;
        cout << "Input " << count << " number: \n";
        cin>>array[i];
        count++;
    }

    quicksort(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;
}
