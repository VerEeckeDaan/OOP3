#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int i;
int array[10];
int counter = 0;

void makeRandomArray(){
	srand ( time(0) );

	for (int j = 0;j<10;j++){
		i = rand() % 101;
		 if (i != i-1)
			array[j]=i;
		 else{
			i = rand() % 101;
            array[j]=i;
		 }
	}
}

void print(int * list, unsigned int numberOfElements) {
  for (unsigned int i = 0; i < numberOfElements; i++) {
    cout << list[i];
    if (i < numberOfElements-1) {
      cout << ", ";
    }
  }
  cout << endl;
}

void clear(int * list, unsigned int numberOfElements){
   for (int i = 0; i < numberOfElements; i++) {
    array[i] = 0;
    }
}

void reverse(int * list, unsigned int numberOfElements){
    int temp;
    for (int i = 0; i < numberOfElements/2; ++i){
      temp = list[i];
      temp = list[numberOfElements-i-1];
      list[numberOfElements-i-1] = list[i];
      list[i] = temp;
    }
}

int sum(int * list, unsigned int numberOfElements){
    int sum = 0;
	for (int i=0; i<numberOfElements; i++){
		sum = sum + list[i];
	}
	return sum;
}

double average(int * list, unsigned int numberOfElements){
    double sum = 0;
    double avg = 0;

    for(int i = 0; i < numberOfElements; i++){
        sum += list[i];
    }
    avg = sum / numberOfElements;
    return avg;
}

void sort(int * list, unsigned int numberOfElements, bool ascending){
    int i, j, min_idx;
        for (i = 0; i < numberOfElements-1; i++){
            min_idx = i;
            for (j = i+1; j < numberOfElements; j++)
            if (list[j] < list[min_idx])
                min_idx = j;
            swap(list[min_idx], list[i]);
        }
    if(!ascending){
        reverse(list,numberOfElements);
    }
}

int minimum(int * list, unsigned int numberOfElements){
    int min = list[0];
    int index = 0;

    for (int i = 0; i < numberOfElements; i++){
        if(list[i] < min){
            min = list[i];
            index = i;
        }
    }
    return index;
}

int maximum(int * list, unsigned int numberOfElements){
    int max = list[0];
    int index = 0;

    for (int i = 0; i < numberOfElements; i++){
        if(list[i] > max){
            max = list[i];
            index = i;
        }
    }
    return index;
}

void copy (int * original, int * destination, int length){
    for(int i = 0; i < length; i++){
        destination[i] = original[i];
    }
}

int search(int * list, unsigned int numberOfElements, int value){
    int index = 0;

    for (int i = 0; i < numberOfElements; i++){
        if(list[i] == value){
            index == i;
        } else {
            index == -1;
        }
    }
    return index;
}

int main(){

    int number = 0;
    int sizeArray = 10;
    makeRandomArray();
    cout << "The random array : ";
    print(array,sizeArray);

    cout << "Sum of the array : " << sum(array,sizeArray) << endl;

    cout << "Average off the array : " << average(array,sizeArray) << endl;

    cout << "Minimum value off the array is at index : " << minimum(array,sizeArray) << endl;

    cout << "Maximum value off the array is at index : " << maximum(array,sizeArray) << endl;


    reverse(array,sizeArray);
    cout << "reversed array : ";
    print(array,sizeArray);

    sort(array,sizeArray,0);
    cout << "sort high to low : ";
    print(array,sizeArray);

    sort(array,sizeArray,1);
    cout << "sort low to high : ";
    print(array,sizeArray);

    int copiedArray[10];
    copy(array,copiedArray,sizeArray);
    cout << "copied array : ";
    print(array,sizeArray);

    clear(array,sizeArray);
    cout << "cleared array : ";
    print(array,sizeArray);

    makeRandomArray();
    cout << "The random array : ";
    print(array,sizeArray);

    cout << "What number do you want to search?";
    cin >> number;

    cout << "The number you are looking for is on index : " << search(array,sizeArray,number) << endl;


	return 0;
}
