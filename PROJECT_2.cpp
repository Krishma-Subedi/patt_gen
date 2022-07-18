#include <iostream>



using namespace std; 



int main () {

    //INITIALIZING VARIABLES

    int pattern;
    int counter;
    int size; 



    cout << "This program creates four different patterns of different sizes."<< endl;                         
    cout << endl; 

    cout << " 1. PATTERN ONE" << endl;   
    cout << " 2. PATTERN TWO" << endl;  
    cout << " 3. PATTERN THREE" << endl; 
    cout << " 4. PATTERN FOUR" << endl; 

    cout << endl; 


    cout << "To begin, please choose a pattern from 1 to 4 inlcusive:  "; 
    cin >> pattern; 
    cout << endl; 
    

    //Invalid entry when user inputs number out of range
    while ( pattern < 1 || pattern >= 5 ) {
        cout << "Invalid pattern. Choose a pattern again: "; 
        cin >> pattern; 
        cout << endl; 
    }   
    cout << "You have chosen pattern "<< pattern << endl;  
    cout << endl; 

    cout << "Enter a pattern size from 2 to 9 inclusive: ";
    cin >> size; 
    cout << endl; 

    //Invalid entry when user inputs number out of range
    while ( size < 2 || size > 9 ) {
        cout << "Invalid size. Choose a size again: "; 
        cin >> size; 
        cout << endl; 
    }   
    cout << "You have chosen size "<< size << endl; 
    cout << endl; 

    //FUNCTIONS FOR THE PATTERNS

    /* Pattern 1 & 2 */
    char pattern_array[size][size];
    if (pattern == 1 || pattern == 4) 
    {
        for (int i = 0; i < size; i++) { // Iterating over all the size columns
            char base[size];
            for (int j = 0; j < size; j++) { // Creating base row
                base[j] = '$';
            }
            base[i] = '0'+size;
            for (int k = 0; k < size; k++)
             {
                pattern_array[i][k] = base[k];
            }
        }

     //Pattern 4
     if (pattern == 4) { 
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    bool digit_encountered = false;
                    if (digit_encountered == false) {
                        if (pattern_array[i][j] != '$') {
                            digit_encountered = true;
                            pattern_array[i][j] = '$';
                            break;
                        }
                        else {
                            pattern_array[i][j] = '0'+size;
                        }
                    }
                }
            }
        }
    }
    else {
        for (int i = 0; i < size; i++) { // Iterating over all the size columns
            char base[size];
            for (int j = 0; j < size; j++) { // Creating base row
                base[j] = '$';
            }
            base[size-i-1] = '0'+size;
            for (int k = 0; k < size; k++) {
                pattern_array[i][k] = base[k];
            }
        }


      //Pattern 3

        if (pattern == 3) { 
            for (int i = 0; i < size; i++) { // each column
                bool digit_encountered = false;
                for (int j = 0; j < size; j++) { //each row
                    if (digit_encountered == true) {
                        pattern_array[i][j] = '0'+size;
                    }
                    if (digit_encountered == false && pattern_array[i][j] != '$') {
                            digit_encountered = true;
                            pattern_array[i][j] = '$';
                    }
                }
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<< pattern_array[i][j];
        }
        cout<<endl;
    }

    return 0; 
} 