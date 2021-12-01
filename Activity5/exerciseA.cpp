#include <iostream> 
#include <string> 
using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);
int binarySearch(string[], int, string);
int comparisonSelection;
int comparisonBinary;

int main() {
    const int NUM_NAMES = 5;
    string lastNames[NUM_NAMES] = {"Lhei", "Zend", "Landeq", "Apei", "Poiuty"};

    selectionSort(lastNames, NUM_NAMES);
    displayArray(lastNames, NUM_NAMES, "SORTED: ");
	
	cout << "Comparison made in selection sort: " << comparisonSelection-1<< endl;
	
    string searchStudent;
    cout << "Choose a name: ";
    getline(cin, searchStudent);

    int position = binarySearch(lastNames, NUM_NAMES, searchStudent);

    if (position != -1)
       cout << lastNames[position] << " was found." << endl;
    else
        cout << searchStudent << " was NOT found." << endl;

		cout << "Comparison made in binary search: " << comparisonBinary-1<< endl;

		
	
    return 0; 
}

void selectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;


    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
				comparisonSelection++;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void displayArray(string array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}

int binarySearch(string array[], int array_size, string searchStudent)
{
    int first = 0,
        last = array_size - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
		comparisonBinary++;

        if (array[middle] == searchStudent) 
        {
            position = middle;
            found = true;
			
        }
        else if (array[middle] > searchStudent)  
            last = middle - 1;
        else                 
            first = middle + 1; 
        
    }
    return position;
}